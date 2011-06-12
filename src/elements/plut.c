#include <element.h>

int update_PLUT(UPDATE_FUNC_ARGS) {
	int r,nx,ny;
    for(nx=-2; nx<3; nx++)
        for(ny=-2; ny<3; ny++)

	if (1>rand()%100 && ((int)(5.0f*pv[y/CELL][x/CELL]))>(rand()%1000))
	{

                    int temporaro = 1000;
                    while (temporaro > -1001){
                        create_part(-1,x+rand()%2,y+rand()%2,PT_NCWS);
                        create_part(-1,x-rand()%2,y-rand()%2,PT_PLUT);
                        create_part(-1,x-rand()%2,y+rand()%2,PT_NCWS);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_PLUT);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_FIRE);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_FIRE);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_FIRE);
                        create_part(-1,x+1,y-1,PT_FIRE);
                        create_part(-1,x+1,y-1,PT_XPLO);
                        create_part(-1,x,y,PT_ZAP);
                        temporaro--;
                    }




        if (2>rand()%200){


                        create_part(-1,x+rand()%2,y+rand()%2,PT_NCWS);
                        create_part(-1,x-rand()%2,y-rand()%2,PT_PLUT);
                        create_part(-1,x-rand()%2,y+rand()%2,PT_NCWS);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_PLUT);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_FIRE);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_FIRE);
                        create_part(-1,x+rand()%2,y-rand()%2,PT_FIRE);
                        create_part(-1,x+1,y-1,PT_FIRE);
                        create_part(-1,x+1,y-1,PT_XPLO);
                        create_part(-1,x,y,PT_ZAP);
        }
	}
	return 0;
}
