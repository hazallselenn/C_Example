#include <stdio.h>
#include <stdlib.h>

//ALES,yabanci dil ve mezuniyet puanina göre siralamaya girip girmedigini hesaplar.
//ALES calculates whether it is ranked according to foreign language and graduation score.

int main()
{
    float Ales_p,yabanci_dil_p,mezuniyet_not_ort,siralama_p;
    printf("ales puaninizi giriniz:");
    scanf("%f",&Ales_p);
    printf("Yabanci dil puaninizi giriniz:");
    scanf("%f",&yabanci_dil_p);
    printf("mezuniyet not ortasý:");
    scanf("%f",&mezuniyet_not_ort);

    siralama_p=((Ales_p*50)/100)+((yabanci_dil_p*25)/100)+((mezuniyet_not_ort*25)/100);

    if(siralama_p>=60){
        printf("siralamaya girebilir");
    }
    else{
        printf("siralamaya giremez");
    }



    return 0;
}
