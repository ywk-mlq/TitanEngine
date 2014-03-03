#include "stdafx.h"
#include "definitions.h"
#include "Global.Breakpoints.h"

int BreakPointSetCount = 0;
extern BreakPointDetail BreakPointBuffer[MAXIMUM_BREAKPOINTS] = {};

ULONG_PTR dr7uint(DR7* dr7)
{
    ULONG_PTR ret=0;
    if(BITGET(dr7->HWBP_MODE[0],0))
        BITSET(ret,0);
    if(BITGET(dr7->HWBP_MODE[0],1))
        BITSET(ret,1);
    if(BITGET(dr7->HWBP_MODE[1],0))
        BITSET(ret,2);
    if(BITGET(dr7->HWBP_MODE[1],1))
        BITSET(ret,3);
    if(BITGET(dr7->HWBP_MODE[2],0))
        BITSET(ret,4);
    if(BITGET(dr7->HWBP_MODE[2],1))
        BITSET(ret,5);
    if(BITGET(dr7->HWBP_MODE[3],0))
        BITSET(ret,6);
    if(BITGET(dr7->HWBP_MODE[3],1))
        BITSET(ret,7);
    if(BITGET(dr7->HWBP_TYPE[0],0))
        BITSET(ret,16);
    if(BITGET(dr7->HWBP_TYPE[0],1))
        BITSET(ret,17);
    if(BITGET(dr7->HWBP_SIZE[0],0))
        BITSET(ret,18);
    if(BITGET(dr7->HWBP_SIZE[0],1))
        BITSET(ret,19);
    if(BITGET(dr7->HWBP_TYPE[1],0))
        BITSET(ret,20);
    if(BITGET(dr7->HWBP_TYPE[1],1))
        BITSET(ret,21);
    if(BITGET(dr7->HWBP_SIZE[1],0))
        BITSET(ret,22);
    if(BITGET(dr7->HWBP_SIZE[1],1))
        BITSET(ret,23);
    if(BITGET(dr7->HWBP_TYPE[2],0))
        BITSET(ret,24);
    if(BITGET(dr7->HWBP_TYPE[2],1))
        BITSET(ret,25);
    if(BITGET(dr7->HWBP_SIZE[2],0))
        BITSET(ret,26);
    if(BITGET(dr7->HWBP_SIZE[2],1))
        BITSET(ret,27);
    if(BITGET(dr7->HWBP_TYPE[3],0))
        BITSET(ret,28);
    if(BITGET(dr7->HWBP_TYPE[3],1))
        BITSET(ret,29);
    if(BITGET(dr7->HWBP_SIZE[3],0))
        BITSET(ret,30);
    if(BITGET(dr7->HWBP_SIZE[3],1))
        BITSET(ret,31);
    return ret;
}

void uintdr7(ULONG_PTR dr7, DR7* ret)
{
    memset(ret, 0, sizeof(DR7));
    if(BITGET(dr7,0))
        BITSET(ret->HWBP_MODE[0],0);
    if(BITGET(dr7,1))
        BITSET(ret->HWBP_MODE[0],1);
    if(BITGET(dr7,2))
        BITSET(ret->HWBP_MODE[1],0);
    if(BITGET(dr7,3))
        BITSET(ret->HWBP_MODE[1],1);
    if(BITGET(dr7,4))
        BITSET(ret->HWBP_MODE[2],0);
    if(BITGET(dr7,5))
        BITSET(ret->HWBP_MODE[2],1);
    if(BITGET(dr7,6))
        BITSET(ret->HWBP_MODE[3],0);
    if(BITGET(dr7,7))
        BITSET(ret->HWBP_MODE[3],1);
    if(BITGET(dr7,16))
        BITSET(ret->HWBP_TYPE[0],0);
    if(BITGET(dr7,17))
        BITSET(ret->HWBP_TYPE[0],1);
    if(BITGET(dr7,18))
        BITSET(ret->HWBP_SIZE[0],0);
    if(BITGET(dr7,19))
        BITSET(ret->HWBP_SIZE[0],1);
    if(BITGET(dr7,20))
        BITSET(ret->HWBP_TYPE[1],0);
    if(BITGET(dr7,21))
        BITSET(ret->HWBP_TYPE[1],1);
    if(BITGET(dr7,22))
        BITSET(ret->HWBP_SIZE[1],0);
    if(BITGET(dr7,23))
        BITSET(ret->HWBP_SIZE[1],1);
    if(BITGET(dr7,24))
        BITSET(ret->HWBP_TYPE[2],0);
    if(BITGET(dr7,25))
        BITSET(ret->HWBP_TYPE[2],1);
    if(BITGET(dr7,26))
        BITSET(ret->HWBP_SIZE[2],0);
    if(BITGET(dr7,27))
        BITSET(ret->HWBP_SIZE[2],1);
    if(BITGET(dr7,28))
        BITSET(ret->HWBP_TYPE[3],0);
    if(BITGET(dr7,29))
        BITSET(ret->HWBP_TYPE[3],1);
    if(BITGET(dr7,30))
        BITSET(ret->HWBP_SIZE[3],0);
    if(BITGET(dr7,31))
        BITSET(ret->HWBP_SIZE[3],1);
}