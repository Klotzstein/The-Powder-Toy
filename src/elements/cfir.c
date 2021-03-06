#include <element.h>

int update_CFIR(UPDATE_FUNC_ARGS) {
	int r,rx,ry, trade;
	for ( trade = 0; trade<5; trade ++)
	{
		rx = rand()%3-1;
		ry = rand()%3-1;
		if (x+rx>=0 && y+ry>0 && x+rx<XRES && y+ry<YRES && (rx || ry))
		{
			r = pmap[y+ry][x+rx];
			if ((r>>8)>=NPART || !r)
				continue;
			if ((r&0xFF)!=PT_WARP&&(r&0xFF)!=PT_POT&&(r&0xFF)!=PT_STKM&&(r&0xFF)!=PT_STKM2&&(r&0xFF)!=PT_DMND&&(r&0xFF)!=PT_CLNE&&(r&0xFF)!=PT_BCLN&&(r&0xFF)!=PT_PCLN&&(10>=rand()%200))
			{
                int nrx = rand()%3 -1;
                int nry = rand()%3 -1;
                if(x+rx+nrx>=0 && y+ry+nry>0 &&
                   x+rx+nrx<XRES && y+ry+nry<YRES && (nrx || nry))
                {
                    if((pmap[y+ry+nry][x+rx+nrx]>>8)>=NPART||pmap[y+ry+nry][x+rx+nrx])
                        continue;
                    parts[i].x = x+rx+nrx;
                    parts[i].y = y+ry+nry;
                    parts[i].x = parts[r>>8].x;
                    parts[i].y = parts[r>>8].y;
                    parts[r>>8].x = x;
                    parts[r>>8].y = y;
                }
				//parts[i].life += 4;
				pmap[y][x] = r;
				pmap[y+ry][x+rx] = (i<<8)|parts[i].type;
				trade = 5;
                create_part(-1, x, y, PT_CFIR);
			}
        }
	}	
    return 0;
}
