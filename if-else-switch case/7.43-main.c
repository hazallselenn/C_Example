#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,bas_1,bas_2,bas_3;
    printf("rakamlari birbirinden farkli sayiyi giriniz(3 basamakli):");
    scanf("%d",&sayi);

    bas_1=sayi/100;
    sayi=sayi%100;
    bas_2=sayi/10;
    sayi=sayi%10;
    bas_3=sayi/1;

    printf("\n%d %d %d\n",bas_1,bas_2,bas_3);

    if(bas_1>bas_2 && bas_2>bas_3){
        printf("sayinin en büyük rakami sagdan 3.rakamidir");
    }
    else if(bas_1>bas_3 && bas_3>bas_2){
        printf("sayinin en buyuk rakami sagdan 3.rakamidir");
    }
    else if(bas_2>bas_1 && bas_1>bas_3){
        printf("sayinin en buyuk rakami sagdan 2.rakamidir");
    }
    else if(bas_2>bas_3 && bas_3>bas_1){
        printf("sayinin en buyuk rakami sagdan 2.rakamidir");
    }
    else if(bas_3>bas_1 && bas_1>bas_2){
        printf("sayinin en buyuk rakami sagdan 1.rakamidir");
    }
    else if(bas_3>bas_2 && bas_2>bas_1){
        printf("sayinin en buyuk rakami sagdan 1.rakamidir");
    }







    return 0;
}
