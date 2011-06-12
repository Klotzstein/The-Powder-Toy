#include <element.h>

int update_THRM(UPDATE_FUNC_ARGS) {
	int r, rx, ry;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if ((r>>8)>=NPART || !r)
					continue;
				if (((r&0xFF)==PT_FIRE || (r&0xFF)==PT_PLSM || (r&0xFF)==PT_EMBE || (r&0xFF)==PT_XPLO && (parts[i].temp>=(273.15+400.0f)) )) // TODO: could this go in update_PYRO?
				{
					if (8>(rand()%800)) {
						part_change_type(i,x,y,PT_EMBE);
						parts[i].ctype = PT_OIL;
						parts[i].temp = 1000.0f;
                        parts[i].life =  rand()%155+80;
						pv[y/CELL][x/CELL] += rand()%1+1;


			}	}	}
	return 0;
}
