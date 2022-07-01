#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay,ucret,ihbar_tazminati;
    printf("toplam calisma sürenizi giriniz(ay):");
    scanf("%d",&ay);
    printf("aylik ücretinizi giriniz(TL):");
    scanf("%d",&ucret);
    printf("--------------");

    ucret=ucret/30;
    printf("ihbar süresi:");
    if(ay<6){
        printf("14 gün\n");
        printf("ihbar tazminati:%d",ucret*14);
    }else if(ay>=6 && ay<=18){
    printf("28 gün\n");
    printf("ihbar tazminati:%d",ucret*28);}
    else if(ay>18 && ay<=36){
        printf("42 gün\n");
        printf("ihbar tazminati:%d",ucret*42);
    }else{
    printf("56 gün\n");
    printf("ihbar tazminati:%d",ucret*56);}









    return 0;
}
