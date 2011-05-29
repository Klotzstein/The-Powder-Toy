#include <element.h>

int update_WOOD(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np, t;
        for(rx=-2; rx<3; rx++)
            for(ry=-2; ry<3; ry++)
                if(x+rx>=0 && y+ry>0 &&
                   x+rx<XRES && y+ry<YRES && (rx || ry))
           if ((r&0xFF)==PT_FIRE || ((parts[i].temp>=(273.15+300.0f)) && 1>(rand()%20)))

                    {
                        create_part(8, x+rand()%8, y+rand()%8, PT_WCHP);
                       	create_part(i, x+rand()%8, y+rand()%8, PT_WCHP);
                        create_part(i, x+rand()%8, y+rand()%8, PT_ASH);
                        create_part(i, x+rand()%8, y+rand()%8, PT_ASH);
                    }
	return 0;
}
