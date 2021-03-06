#include <element.h>

int update_C6(UPDATE_FUNC_ARGS) {
	int r, rx, ry;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if ((r>>8)>=NPART || !r)
					continue;
				if (((r&0xFF)!=PT_C6 && parts[r>>8].temp>1000)||(r&0xFF)==PT_BFLM ||(r&0xFF)==PT_PLSM ||(r&0xFF)==PT_FIRE)
				{
					if (1>rand()%6)
					{
						part_change_type(i,x,y,PT_BFLM);
						parts[r>>8].temp = parts[i].temp = MAX_TEMP;
						parts[i].life = rand()%150+50;
						pv[y/CELL][x/CELL] += 6.0;
					}
				}
			}
	return 0;
}
