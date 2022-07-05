#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int basamak_1,basamak_2,basamak_3,basamak_4,sayi,toplam,kup,gecici;

    printf("dört basamakli bir sayi giriniz:");
    scanf("%d",&sayi);

    gecici=sayi;
    basamak_1=sayi/1000;
    sayi=sayi%1000;
    basamak_2=sayi/100;
    sayi=sayi%100;
    basamak_3=sayi/10;
    sayi=sayi%10;
    basamak_4=sayi;

   //printf("\n%d %d %d %d",basamak_1,basamak_2,basamak_3,basamak_4);

    toplam=basamak_1 + basamak_2 + basamak_3 + basamak_4;
    kup=pow(toplam,3);

    //printf("\n%d %d",toplam,kup);

    if(gecici!=kup){
        printf("girilen %d sayisi kupunu dolduran bir sayi degildir",gecici);
    }else{
        printf("girilen %d sayisi kupunu dolduran bir sayidir",gecici);
    }

    return 0;
}
