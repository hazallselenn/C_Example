#include <stdio.h>
#include <stdlib.h>

int main()
{
    float si1,si2,si3,sd1,sd2,sd3,ort1,ort2,ort3;

    printf("Birinci aracin sehir ici be disi tuketim miktariniz giriniz:");
    scanf("%f %f",&si1,&sd1);
    printf("Ýkinci aracin sehir ici be disi tuketim miktariniz giriniz:");
    scanf("%f %f",&si2,&sd2);
    printf("Ucuncu aracin sehir ici be disi tuketim miktariniz giriniz:");
    scanf("%f %f",&si3,&sd3);

    ort1=((si1*55)/100)+((sd1*45)/100);
    ort2=((si2*55)/100)+((sd2*45)/100);
    ort3=((si3*55)/100)+((sd3*45)/100);

    if(ort1>ort2 && ort2>ort3){
        printf("En az yakit harcayan 3.aractir.\n(Ortalama yakit tuketimi=%.2f)",ort3);
    }
    else if(ort1>ort3 && ort3>ort2){
        printf("En az yakit harcayan 2.aractir.\n(Ortalama yakit tuketimi=%.2f)",ort2);
    }
    else if(ort2>ort1 && ort1>ort3){
        printf("En az yakit harcayan 3.aractir.\n(Ortalama yakit tuketimi=%.2f)",ort3);
    }
    else if(ort2>ort3 && ort3>ort1){
        printf("En az yakit harcayan 1.aractir.\n(Ortalama yakit tuketimi=%.2f)",ort1);
    }
    else if(ort3>ort2 && ort2>ort1){
        printf("En az yakit harcayan 1.aractir.\n(Ortalama yakit tuketimi=%.2f)",ort1);
    }
    else if(ort3>ort1 && ort1>ort2){
        printf("En yakit harcayan 2.aractir.\n(Ortalama yakit tuketimi=%.2f)",ort2);
    }










    return 0;
}
