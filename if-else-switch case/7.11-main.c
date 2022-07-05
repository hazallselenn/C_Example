#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bas_1,bas_2,bas_3,bas_4,sayi,kare,toplam,gecici;

    printf("dört basamakli sayi giriniz:");
    scanf("%d",&sayi);
    gecici=sayi;

    bas_1=sayi/1000;
    sayi=sayi%1000;
    bas_2=sayi/100;
    sayi=sayi%100;
    bas_3=sayi/10;
    sayi=sayi%10;
    bas_4=sayi;

    //printf("%d %d %d %d\n",bas_1,bas_2,bas_3,bas_4);

    toplam=(((bas_1*10)+(bas_2))+((bas_3*10)+(bas_4)));
    kare=(toplam*toplam);
    printf("\n%d %d\n",toplam,kare);

    if(gecici==kare){
        printf("girilen sayi yarimkare bir sayidir");
    }else{
    printf("girilen sayi yarimkare bir sayi degildir");
    }


    return 0;
}
