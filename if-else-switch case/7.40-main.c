#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,bas_5,bas_4,bas_3,bas_2,bas_1,uchane,gecici;

    printf("sayiyi girniz:");
    scanf("%d",&sayi);
    gecici=sayi;

    bas_5=sayi/10000;
    sayi=sayi%10000;
    bas_4=sayi/1000;
    sayi=sayi%1000;
    bas_3=sayi/100;
    sayi=sayi%100;
    bas_2=sayi/10;
    sayi=sayi%10;
    bas_1=sayi/1;

    uchane=(bas_3*100)+(bas_2*10)+bas_1;

    if(uchane>=500){
        printf("Girilen %d sayisinin yuvarlatilmis hali %d dir",gecici,(bas_5*10000)+((bas_4+1)*1000));
    }else if(uchane>=0 && uchane<500){
    printf("Girilen %d sayisinin yuvarlatilmis hali %d dir",gecici,(bas_5*10000)+(bas_4)*1000);}







    return 0;
}
