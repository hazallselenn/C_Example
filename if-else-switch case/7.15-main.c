#include <stdio.h>
#include <stdlib.h>

int main()
{
     short saat;
     printf("G�n�n saatini giriniz=");
     scanf("%d",&saat);

     if(saat<6){
        printf("�yi uykular");
     }else if(saat>=6 && saat<11){
     printf("G�naydin");}else if(saat>=11 && saat<17){
     printf("�yi g�nler");}else if(saat>=17 && saat<22){
     printf("�yi aksamlar");}else if(saat>=22 && saat<24){
     printf("�yi geceler");}else{printf("iyi uykular");}

     if(saat<0 || saat>24){
        printf("hatali tuslama");
     }











    return 0;
}
