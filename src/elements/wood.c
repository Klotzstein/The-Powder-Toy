#include <element.h>

int update_WOOD(UPDATE_FUNC_ARGS) {
    	int r,rx,ry,count=0,idv;


	if (1>rand()%100 && ((int)(1000.0f*pv[y/CELL][x/CELL])+count)>(rand()%1000))
	{




		pv[y/CELL][x/CELL] += 5.0f * CFDS;
		parts[i].temp = 200;

		create_part(i, x+rand()%8, y+rand()%8, PT_FIRE);
        if (2>rand()%200){


            create_part(i, x+rand()%75, y+rand()%75, PT_NCWS);
        }
	}
	return 0;
}
