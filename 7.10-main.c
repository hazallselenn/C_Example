#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bas_1,bas_2,bas_3,bas_4,sayi;

    printf("dört basamakli bir sayi giriniz:");
    scanf("%d",&sayi);

    bas_1=sayi/1000;
    sayi=sayi%1000;
    bas_2=sayi/100;
    sayi=sayi%100;
    bas_3=sayi/10;
    sayi=sayi%10;
    bas_4=sayi;

    //printf("%d %d %d %d",bas_1,bas_2,bas_3,bas_4);

    if(((bas_1*10)+(bas_2))*((bas_3*10)+(bas_4))==((bas_2*10)+(bas_1))*((bas_4*10)+(bas_3))){
        printf("girilen sayi tersyüz sayidir");
    }else{
    printf("girilen sayi tersyüz sayi degildir");}






    return 0;
}
