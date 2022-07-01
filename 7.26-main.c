#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sn1,sn2,sn3,obn1,obn2,obn3,so1,so2,so3,sss1,sss2,sss3;
    printf("birinci dersin basari notu,sinif ortalamasi ve sapmayi giriniz:");
    scanf("%f %f %f",&obn1,&so1,&sss1);
    printf("ikinci dersin basari notu,sinif ortalamasi ve sapmayi giriniz:");
    scanf("%f %f %f",&obn2,&so2,&sss2);
    printf("ucuncu dersin basari notu,sinif ortalamasi ve sapmayi giriniz:");
    scanf("%f %f %f",&obn3,&so3,&sss3);

    sn1=(obn1-so1)/sss1;
    sn2=(obn2-so2)/sss2;
    sn3=(obn3-so3)/sss3;

    if(sn1 > sn2 && sn2 > sn3){
        printf("en basarili olunan ders 1.derstir.(Standart not=%.2f)",sn1);
    }
    else if(sn1 > sn3 && sn3 > sn3){
        printf("en basarili olunan ders 1.derstir.(Standart not=%.2f)",sn1);
    }else if(sn2 > sn1 && sn1 > sn3){
        printf("en basarili olunan ders 2.derstir.(Standart not=%.2f)",sn2);
    }else if(sn2 > sn3 && sn3 > sn1){
        printf("en basarili olunan ders 2.derstir.(Standart not=%.2f)",sn2);
    }else if(sn3 > sn2 && sn2 > sn1){
        printf("en basarili olunan ders 3.derstir.(Standart not=%.2f)",sn3);
    }else if(sn3 > sn1 && sn1 > sn2){
        printf("en basarili olunan ders 3.derstir.(Standart not=%.2f)",sn3);
    }

    return 0;
}
