#include <stdio.h>
#include <stdlib.h>

int main()
{
     short saat;
     printf("Günün saatini giriniz=");
     scanf("%d",&saat);

     if(saat<6){
        printf("Ýyi uykular");
     }else if(saat>=6 && saat<11){
     printf("Günaydin");}else if(saat>=11 && saat<17){
     printf("Ýyi günler");}else if(saat>=17 && saat<22){
     printf("Ýyi aksamlar");}else if(saat>=22 && saat<24){
     printf("Ýyi geceler");}else{printf("iyi uykular");}

     if(saat<0 || saat>24){
        printf("hatali tuslama");
     }











    return 0;
}
