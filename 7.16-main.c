#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dogru_say,yanlis_say;
    float net_say;

    printf("Dogru sayisini giriniz=");
    scanf("%d",&dogru_say);
    printf("Yanlis sayisini giriniz=");
    scanf("%d",&yanlis_say);

    net_say=(dogru_say -(yanlis_say/4));

    if(dogru_say%4==1){net_say=net_say+0.25;}else if(dogru_say%4==2){
    net_say=net_say+0.50;}else if(dogru_say%4==3){
    net_say==net_say+0.75;}

    printf("net sayiniz:%.2f\n",net_say);
    printf("kurunuz:");
    if(net_say < 10){
        printf("beginner");
    }else if(net_say>=10 && net_say<30){
    printf("elementary");}else if(net_say>=30 && net_say<50){
    printf("preintermediate");}else if(net_say>=50 && net_say<70){
    printf("ındermediate");}else{
    printf("upper");}





    return 0;
}
