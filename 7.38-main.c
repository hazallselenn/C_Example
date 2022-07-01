#include <stdio.h>
#include <stdlib.h>

int main()
{

    float basari_n,sinif_ort,standart_s,standart_n;

    printf("Basari notu, sinif ortalamasi ve standart sapmayi giriniz:");
    scanf("%f %f %f",&basari_n,&sinif_ort,&standart_s);

    standart_n=(basari_n-sinif_ort)/standart_s;
    printf("Standart Not=%.2f\n",standart_n);
    printf("Harf Notu=");
    if(standart_n>=2){
        printf("A");
    }else if(standart_n>=1 && standart_n<2){
    printf("B");}else if(standart_n>=0 && standart_n<1){
    printf("C");}else{printf("F");}












    return 0;
}
