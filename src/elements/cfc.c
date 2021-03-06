#include <element.h>

int update_CFC(UPDATE_FUNC_ARGS) {
	int r,rx,ry;
	for (rx=-2; rx<3; rx++)
		for (ry=-2; ry<3; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if ((r>>8)>=NPART || !r)
					continue;
				if ((r&0xFF)==PT_O3)
				{
                    parts[i].life--;
                    kill_part(r>>8);
				}
                if (parts[i].life<=0){
                    parts[i].type = PT_NONE;
                }
			}
	return 0;
}
