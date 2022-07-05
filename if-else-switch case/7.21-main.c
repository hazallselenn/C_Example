#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sehir_ici,sehir_disi,ort;

    printf("aracin sehir ici yakit tüketim miktarini giriniz:");
    scanf("%f",&sehir_ici);
    printf("aracin sehir disi yakit tüketim miktariniz giriniz:");
    scanf("%f",&sehir_disi);

    ort=((sehir_ici*55)/100) + ((sehir_disi*45)/100);

    if(ort<3.00){
        printf("ortalama yakit tüketimi=%.2f\n",ort);
        printf("yakit tüketim sinifi=cok az");
    }
    else if(ort>=3.00 && ort<6.00){
        printf("ortalama yakit tüketimi=%.2f\n",ort);
        printf("yakit tüketim sinifi=ekonomik");
    }else if(ort>=6.00 && ort<8.00){
        printf("ortalama yakit tüketimi=%.2f\n",ort);
        printf("yakit tüketim sinifi=fazla");}
    else if(ort>=8.00){
        printf("ortalama yakit tüketimi=%.2f\n",ort);
        printf("yakit tüketim sinifi=cok fazla");
    }






    return 0;
}
