#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bs,byg,is,iyg,us,uyg,kar1,kar2,kar3;

    printf("Birincisinin sermayesi ve yillik getirisi:");
    scanf("%d %d",&bs,&byg);
    printf("İkincisinin sermayesi ve yillik getirisi:");
    scanf("%d %d",&is,&iyg);
    printf("Ucuncusunun sermayesi ve yillik getirisi:");
    scanf("%d %d",&us,&uyg);

    kar1=(byg*12)-bs;
    kar2=(iyg*12)-is;
    kar3=(uyg*12)-us;
    printf("\n%d %d %d\n",kar1,kar2,kar3);

    if(kar1>kar2 && kar2>kar3){
        printf("En karli yatirim 1.yatirimdir.\n(15 yil sonundaki toplam getiri=%d, net kar=%d)",(byg*12),kar1);
    }else if(kar1>kar3 && kar3>kar2){
    printf("En karli yatirim 1.yatirimdir.\n(15 yil sonundaki toplam getiri=%d, net kar=%d)",(byg*12),kar1);}
    else if(kar2>kar1 && kar1>kar3){
    printf("En karli yatirim 2.yatirimdir.\n(15 yil sonundaki toplam getiri=%d, net kar=%d)",(iyg*12),kar2);}
    else if(kar2>kar3 && kar3>kar1){
    printf("En karli yatirim 2.yatirimdir.\n(15 yil sonundaki toplam getiri=%d, net kar=%d)",(iyg*12),kar2);}
    else if(kar3>kar1 && kar1>kar2){
    printf("En karli yatirim 3.yatirimdir.\n(15 yil sonundaki toplam getiri=%d, net kar=%d)",(uyg*12),kar3);}
    else if(kar3>kar2 && kar2>kar1){
    printf("En karli yatirim 3.yatirimdir.\n(15 yil sonundaki toplam getiri=%d, net kar=%d)",(uyg*12),kar3);}













    return 0;
}
