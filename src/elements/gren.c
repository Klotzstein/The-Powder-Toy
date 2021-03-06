#include <element.h>

int update_GREN(UPDATE_FUNC_ARGS) {
	int r,nx,ny;
    for(nx=-2; nx<3; nx++)
        for(ny=-2; ny<3; ny++)
            if(x+nx>=0 && y+ny>0 && x+nx<XRES && y+ny<YRES && (nx || ny))
            {
                r = pmap[y+ny][x+nx];
                if((r>>8)>=NPART || !r)
                    continue;
                if ((r&0xFF)==PT_FIRE){
                    int temporaro = 1000;
                    while (temporaro > -1001){
                        create_part(-1,x+1,y+1,PT_BRMT);
                        create_part(-1,x-1,y-1,PT_IFIL);
                        create_part(-1,x-1,y+1,PT_BRMT);
                        create_part(-1,x+1,y-1,PT_IFIL);
                        create_part(-1,x,y,PT_BMTL);
                        temporaro--;
                    }
                    pv[y/CELL][x/CELL] += 2.0f;
                    if (y+CELL<YRES)
                        pv[y/CELL+1][x/CELL] += 2.0f;
                    if (x+CELL<XRES)
                    {
                        pv[y/CELL][x/CELL+1] += 2.0f;
                        if (y+CELL<YRES)
                            pv[y/CELL+1][x/CELL+1] += 2.0f;
                    }
                    parts[i].type = PT_NONE;
                }
                if ((r&0xFF)==PT_PLSM){
                    int temporaro = 1000;
                    while (temporaro > -1001){
                        create_part(-1,x+1,y+1,PT_BRMT);
                        create_part(-1,x-1,y-1,PT_IFIL);
                        create_part(-1,x-1,y+1,PT_BRMT);
                        create_part(-1,x+1,y-1,PT_IFIL);
                        create_part(-1,x,y,PT_BMTL);
                        temporaro--;
                    }
                    pv[y/CELL][x/CELL] += 2.0f;
                    if (y+CELL<YRES)
                        pv[y/CELL+1][x/CELL] += 2.0f;
                    if (x+CELL<XRES)
                    {
                        pv[y/CELL][x/CELL+1] += 2.0f;
                        if (y+CELL<YRES)
                            pv[y/CELL+1][x/CELL+1] += 2.0f;
                    }
                    parts[i].type = PT_NONE;
                }
                if ((r&0xFF)==PT_BFLM){
                    int temporaro = 1000;
                    while (temporaro > -1001){
                        create_part(-1,x+1,y+1,PT_BRMT);
                        create_part(-1,x-1,y-1,PT_IFIL);
                        create_part(-1,x-1,y+1,PT_BRMT);
                        create_part(-1,x+1,y-1,PT_IFIL);
                        create_part(-1,x,y,PT_BMTL);
                        temporaro--;
                    }
                    pv[y/CELL][x/CELL] += 10.0f;
                    if (y+CELL<YRES)
                        pv[y/CELL+1][x/CELL] += 10.0f;
                    if (x+CELL<XRES)
                    {
                        pv[y/CELL][x/CELL+1] += 10.0f;
                        if (y+CELL<YRES)
                            pv[y/CELL+1][x/CELL+1] += 10.0f;
                    }
                    parts[i].type = PT_NONE;
                }
                if ((r&0xFF)==PT_SPRK){
                    int temporaro = 1000;
                    while (temporaro > -1001){
                        create_part(-1,x+1,y+1,PT_BRMT);
                        create_part(-1,x-1,y-1,PT_IFIL);
                        create_part(-1,x-1,y+1,PT_BRMT);
                        create_part(-1,x+1,y-1,PT_IFIL);
                        create_part(-1,x,y,PT_FSEP);
                        temporaro--;
                    }
                    pv[y/CELL][x/CELL] += 2.0f;
                    if (y+CELL<YRES)
                        pv[y/CELL+1][x/CELL] += 2.0f;
                    if (x+CELL<XRES)
                    {
                        pv[y/CELL][x/CELL+1] += 2.0f;
                        if (y+CELL<YRES)
                            pv[y/CELL+1][x/CELL+1] += 2.0f;
                    }
                    parts[i].type = PT_NONE;
                }
            }
    return 0;
}
