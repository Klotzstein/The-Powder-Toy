#include <element.h>

int update_ACLOUD(UPDATE_FUNC_ARGS) {
	int r,rx,ry,tmp = parts[i].tmp;
    if (rand()%100 == 1){
        if (parts[i].tmp = 1){
            parts[i].tmp = 0;
        }
    }
    for (rx=-8; rx<12; rx++)
		for (ry=-8; ry<12; ry++)
			if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
			{
				r = pmap[y+ry][x+rx];
				if ((r>>8)>=NPART || !r)
					continue;
                if ((r&0xFF) == PT_ACRN){
                    if (rand()%1000 == 1){
                        if (parts[r>>8].y > parts[i].y+2){
                            parts[r>>8].type=PT_ACLOUD;
                        }
                    }
                }
                if ((r&0xFF) == PT_ACLOUD){
                    if (parts[i].y >= parts[r>>8].y){
                        if (parts[i].tmp != 1){
                            if (rand()%10 == 1){
                            create_part(-1, x+rand()%3-1, y+rand()%6+1, PT_ACRN);
                            }
                        }
                } else {
                    parts[i].tmp = 1;
                }
                }
                
            }
	return 0;
}

