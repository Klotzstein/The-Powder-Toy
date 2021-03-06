#include <element.h>

int update_PLNT(UPDATE_FUNC_ARGS) {
	int r, rx, ry, np, t;
        for(rx=-2; rx<3; rx++)
            for(ry=-2; ry<3; ry++)
                if(x+rx>=0 && y+ry>0 &&
                   x+rx<XRES && y+ry<YRES && (rx || ry))
                {
                    r = pmap[y+ry][x+rx];
                    if((r>>8)>=NPART || !r)
                        continue;
                    if((r&0xFF)==PT_WATR && 1>(rand()%250))
                    {
                        parts[i].type = PT_PLNT;
                        parts[r>>8].type = PT_PLNT;
                        parts[r>>8].life = 0;
                    }
                    else if((r&0xFF)==PT_RWTR && 1>(rand()%250))
                    {
                        parts[i].type = PT_PLNT;
                        parts[r>>8].type = PT_PLNT;
                        parts[r>>8].life = 0;
                    }
                    else if((r&0xFF)==PT_LAVA && 1>(rand()%250))
                    {
                        parts[i].life = 4;
                        parts[i].type = PT_FIRE;
                    }
                    else if((r&0xFF)==PT_SMKE && (1>rand()%250))
                    {
                        parts[r>>8].type = PT_NONE;
                        parts[i].life = rand()%60 + 60;
                    }
                    else if((r&0xFF)==PT_C02)
                    {
                        parts[r>>8].type = PT_NONE;
                        parts[i].life = rand()%60 + 60;
                    }
                    else if(parts[r>>8].type==PT_ROOT && parts[r>>8].tmp2==1)
                    {
                        parts[r>>8].tmp2 = 2;
                        parts[i].ctype = PT_ROOT;
                    }
                    if (parts[i].ctype==PT_ROOT)
                    { 
                        int nrx = rand()%3 -1;
                        int nry = rand()%3 -1;
                        if (parts[r>>8].type == PT_PLNT && parts[r>>8].ctype != PT_ROOT && (1>rand()%50))
                            parts[r>>8].ctype = PT_ROOT;

                        if(create_part(-1,x+rx+nrx,y+ry+nry,PT_PLNT))
                            parts[pmap[y+ry+nry][x+rx+nrx]>>8].temp = parts[i].temp;
                        if (1>rand()%2)
                            parts[i].ctype=PT_NONE;
                    }
                    else if ((r&0xFF)==PT_WOOD && (1>rand()%20) && abs(rx+ry)<=2 && VINE_MODE)
                    {
                        int nrx = rand()%3 -1;
                        int nry = rand()%3 -1;
                        if(x+rx+nrx>=0 && y+ry+nry>0 &&
                           x+rx+nrx<XRES && y+ry+nry<YRES && (nrx || nry))
                        {
                            if((pmap[y+ry+nry][x+rx+nrx]>>8)>=NPART||pmap[y+ry+nry][x+rx+nrx])
                                continue;
                            if(create_part(-1,x+rx+nrx,y+ry+nry,PT_VINE))
                                parts[pmap[y+ry+nry][x+rx+nrx]>>8].temp = parts[i].temp;
                        }
                    }
                    else if((r&0xFF)==PT_DIRT && (1>rand()%20))
                    {
                        int nrx = rand()%3 -1;
                        int nry = rand()%3 -1;
                        if(x+rx+nrx>=0 && y+ry+nry>0 &&
                           x+rx+nrx<XRES && y+ry+nry<YRES && (nrx || nry))
                        {
                            if((pmap[y+ry+nry][x+rx+nrx]>>8)>=NPART||pmap[y+ry+nry][x+rx+nrx])
                                continue;
                            if(create_part(-1,x+rx+nrx,y+ry+nry,PT_GRAS))
                                parts[pmap[y+ry+nry][x+rx+nrx]>>8].temp = parts[i].temp;
                        }
                    }

                    //if(t==PT_SNOW && (r&0xFF)==PT_WATR && 15>(rand()%1000))
                    //t = parts[i].type = PT_WATR;
                }
		if(parts[i].life==2)
		{
		    for(rx=-1; rx<2; rx++)
                for(ry=-1; ry<2; ry++)
                    if(x+rx>=0 && y+ry>0 &&
                       x+rx<XRES && y+ry<YRES && (rx || ry))
                    {
                        r = pmap[y+ry][x+rx];
                        if((r>>8)>=NPART)
                            continue;
                        if(!r)
                            create_part(-1,x+rx,y+ry,PT_O2);
                    }
		    parts[i].life = 0;
		}
	return 0;
}
