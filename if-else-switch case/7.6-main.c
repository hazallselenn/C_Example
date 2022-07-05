#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cinsiyet;
    float baba_boy,anne_boy,hedefboy_k,hedefboy_e;
    printf("cocugun cinsiyetini giriiz(e,E - k,K)");
    scanf("%c",&cinsiyet);

    printf("babasinin boyu(m):");
    scanf("%f",&baba_boy);
    printf("annesinin boyu(m)");
    scanf("%f",&anne_boy);

    if(cinsiyet=='k' || cinsiyet=='K'){
        hedefboy_k=(baba_boy+anne_boy-0.13)/2;
        if(hedefboy_k>=1.63 && hedefboy_k<=1.64){
            printf("hedef boy:%.2f\n",hedefboy_k);
            printf("türkiye ortalamasindan daha uzun olacak");
        }else{
            printf("hedef boy:%.2f\n",hedefboy_k);
            printf("türkiye ortalamasindan daha kisa olacak");

        }
    }else if(cinsiyet=='e' || cinsiyet=='E'){
        hedefboy_e=(baba_boy+anne_boy+0.13)/2;
        if(hedefboy_e>=1.75 && hedefboy_e<=1.76){
            printf("hedef boy:%.2f\n",hedefboy_e);
            printf("türkiye ortalamasindan daha uzun olacak");
        }else{
            printf("hedef boy:%.2f\n",hedefboy_e);
            printf("türkiye ortalamasindan daha kisa olacak");

        }


    }else{
    printf("hatali tuslama");}

















    return 0;
}
