#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay,ucret,ihbar_tazminati;
    printf("toplam calisma s�renizi giriniz(ay):");
    scanf("%d",&ay);
    printf("aylik �cretinizi giriniz(TL):");
    scanf("%d",&ucret);
    printf("--------------");

    ucret=ucret/30;
    printf("ihbar s�resi:");
    if(ay<6){
        printf("14 g�n\n");
        printf("ihbar tazminati:%d",ucret*14);
    }else if(ay>=6 && ay<=18){
    printf("28 g�n\n");
    printf("ihbar tazminati:%d",ucret*28);}
    else if(ay>18 && ay<=36){
        printf("42 g�n\n");
        printf("ihbar tazminati:%d",ucret*42);
    }else{
    printf("56 g�n\n");
    printf("ihbar tazminati:%d",ucret*56);}









    return 0;
}
