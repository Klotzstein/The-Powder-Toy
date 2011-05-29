#include <element.h>

int update_MGMA(UPDATE_FUNC_ARGS) {

		int r, rx, ry, rt, t = parts[i].type;
    for(rx=-2; rx<3; rx++)
        for(ry=-2; ry<3; ry++)
            if(x+rx>=0 && y+ry>0 &&
               x+rx<XRES && y+ry<YRES && (rx || ry))
            {
                r = pmap[y+ry][x+rx];
                if((r>>8)>=NPART || !r)
                    continue;
                if(rand()%4000 < 1){
                    int nnx = rand()%3 -1;
                    //int nny = rand()%3 -1;
                    int nny = -1;
                    if(x+rx+nnx>=0 && y+ry+nny>0 &&
                       x+rx+nnx<XRES && y+ry+nny<YRES && (nnx || nny))
                    {
                        if((pmap[y+ry+nny][x+rx+nnx]>>8)>=NPART||pmap[y+ry+nny][x+rx+nnx])
                            continue;
                        if(create_part(-1,x+rx+nnx,y+ry+nny,PT_SMKE))
                            parts[pmap[y+ry+nny][x+rx+nnx]>>8].temp = parts[i].temp;
                    }
                }

            }
    if (parts[i].temp< R_TEMP + 1500)
        parts[i].temp = R_TEMP + 1500;
if( t==PT_EMBE && parts[i].life <=1)
        if(t==PT_EMBE && parts[i].life <=1)
	{
		if (parts[i].tmp==3){
			t = PT_DSTW;
			part_change_type(i,x,y,t);
			parts[i].life = 0;
		}
			if ( t==PT_EMBE)
					{
						parts[i].life = 0;
						t = parts[i].type = PT_STNE;
						part_change_type(i,x,y,t);
					}
	}
    return 0;
}
