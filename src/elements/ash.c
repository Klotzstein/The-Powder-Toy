#include <element.h>

int update_ASH(UPDATE_FUNC_ARGS) {
	int r, rx, ry, rt;
		for (rx=-1; rx<2; rx++)
			for (ry=-1; ry<2; ry++)
				if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
				{
					r = pmap[y+ry][x+rx];
					if ((r>>8)>=NPART || !r)
						continue;
                    rt = parts[r>>8].type;
                    if(rt==PT_WOOD||rt==PT_COAL||rt==PT_BCOL||rt==PT_PLNT||rt==PT_VINE||rt==PT_GRAS){
                        parts[i].temp+=(rand()/(RAND_MAX/100));
                        parts[i].life = rand()%50+120;
                        parts[i].type = PT_FIRE;
                        parts[i].life = rand()%50+120;
                        parts[i].temp+=(rand()/(RAND_MAX/100));
                    }
				}
	return 0;
}
