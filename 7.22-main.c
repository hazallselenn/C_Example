#include <stdio.h>
#include <stdlib.h>

int main()
{

    float bp1,bp2,bp3,ip1,ip2,ip3,up1,up2,up3,ort1,ort2,ort3;

    printf("birinci jürinin yarismaci puanlari:");
    scanf("%f %f %f",&bp1,&ip1,&up1);
    printf("ikinci jürnin yarismaci puanlari:");
    scanf("%f %f %f",&bp2,&ip2,&up2);
    printf("ucuncu jürnin yarismaci puanlari:");
    scanf("%f %f %f",&bp3,&ip3,&up3);

    ort1=(bp1+bp2+bp3)/3;
    ort2=(ip1+ip2+ip3)/3;
    ort3=(up1+up2+up3)/3;

    if(ort1>ort2 && ort2>ort3){
        printf("en iyi 1.yarismacidir(Ortalama puan=%.2f)",ort1);
    } else if(ort1>ort3 && ort3>ort2){
        printf("en iyi 1.yarismacidir(Ortalama puan=%.2f)",ort1);
    } else if(ort2>ort1 && ort1>ort3){
        printf("en iyi 2.yarismacidir(Ortalama puan=%.2f)",ort2);
    } else if(ort2>ort3 && ort3>ort1){
        printf("en iyi 2.yarismacidir(Ortalama puan=%.2f)",ort2);
    } else if(ort3>ort2 && ort2>ort1){
        printf("en iyi 3.yarismacidir(Ortalama puan=%.2f)",ort3);
    } else if(ort3>ort1 && ort1>ort2){
        printf("en iyi 3.yarismacidir(Ortalama puan=%.2f)",ort3);
    } else if(ort1 == ort2 && ort2>ort3){
        printf("en iyi 1.yarismacidir(ortalama puan=%.2f)",ort1);
    } else if(ort1 == ort3 && ort1>ort2){
        printf("en iyi 1.yarismacidir(ortalama puan=%.2f)",ort1);
    } else if(ort2 == ort3 && ort2>ort1){
        printf("en iyi 2.yarismacidir(ortalama puan=%.2f)",ort2);
    } else{
    printf("en iyi 1.yarismacidir(ortalama puan=%.2f)",ort1);}













return 0;
}
