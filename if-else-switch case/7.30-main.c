#include <stdio.h>
#include <stdlib.h>

int main()
{
    char secim;
    float miktar,ucret;

    printf("****URUN SECENEKLER�****\n(T veya t) : Transistor\n(D veya d) : Direnc\n(K veya k) : Kondansat�r\n************************");
    printf("\nSeciminizi giriniz:");
    scanf("%c",&secim);

    if(secim=='t'|| secim=='T'){
       printf("Ne kadarlik TRANS�STOR alacaksiniz:");
       scanf("%f",&miktar);
       if(miktar>=1000){
        printf("Odeme=%.2f",miktar-((miktar*10)/100));
       }else(printf("Odeme:%.2f",miktar));
       }
    else if(secim=='D'||secim=='d'){
        if(miktar>=100){
        printf("Odeme=%.2f",miktar-((miktar*5)/100));
       }else(printf("Odeme:%.2f",miktar));
    }else if(secim=='K'||secim=='k'){
        if(miktar>=500){
        printf("Odeme=%.2f",miktar-((miktar*8)/100));
       }else(printf("Odeme:%.2f",miktar));
    }else{printf("Yanlis tuslama");}









    return 0;
}
