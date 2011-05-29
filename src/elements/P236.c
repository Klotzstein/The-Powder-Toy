#include <element.h>

int update_P236(UPDATE_FUNC_ARGS) {
    	int r,rx,ry,count=0,idv;
	if (1>rand()%100 && ((int)(5.0f*pv[y/CELL][x/CELL])+count)>(rand()%1000))
	{

	create_part(i, x, y, PT_NEUT);
		pv[y/CELL][x/CELL] += 10.0f * CFDS;
		parts[i].temp = MAX_TEMP/2;

		create_part(i, x+rand()%8, y+rand()%8, PT_NCWS);
        if (2>rand()%300){
            create_part(i, x+rand()%75, y+rand()%75, PT_NCWS);
        }
	}
	return 0;
}
