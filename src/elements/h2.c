#include <element.h>

int update_H2(UPDATE_FUNC_ARGS)
{
    int r,rx,ry,rt;
    for(rx=-2; rx<3; rx++)
        for(ry=-2; ry<3; ry++)
			if (x+rx>0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
                rt = (r&0xFF);
				if ((r>>8)>=NPART || !r)
					continue;
                if(pv[y/CELL][x/CELL] > 8.0f && rt == PT_DESL)//This will not work. DESL turns to fire above 5.0
                {
                    part_change_type(r>>8,x+rx,y+ry,PT_WATR);
                    part_change_type(i,x,y,PT_OIL);
                }
            }
    return 0;
}
