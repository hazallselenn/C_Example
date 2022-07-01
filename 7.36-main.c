#include <stdio.h>
#include <stdlib.h>

int main()
{
    char durum;
    float sure;

    printf("Calisma durumunuzu girin(Memur m,M - Diger d,D):");
    scanf("%c",&durum);
    printf("Toplam calisma surenizi giriniz(ay olarak):");
    scanf("%f",&sure);
    printf("------------------------------------------------\n");
    if(sure<12){
        printf("Uzgunuz tam 1 yil dolmadigi icin izin hakkiniz yok\nCalisma sureniz=%.f ay=%.2f yil eder",sure,sure/12.00);
    }
    if(durum=='m'||durum=='M'){
        if(sure>=12 && sure<=120){
            printf("Izin sureniz 20 gun");
        }else if(sure>120){
        printf("Izin sureniz 30 gun");}}
    else if(durum=='d'||durum=='D'){
            if(sure>=12 && sure<72){
                printf("Izin sureniz 14 gun");
            }else if(sure>=72 && sure<180){
            printf("Izin sureniz 20 gun");}
            else if(sure>=180){
                printf("Izin sureniz 26 gun");}
    }else{printf("hatali tuslama");}






    return 0;
}
