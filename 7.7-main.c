#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cinsiyet;
    float boy,ideal_kilo,kilo;

    printf("cinsiyetinizi giriniz(e,E-k,K)");
    scanf("%c",&cinsiyet);
    printf("Boyunuz(m):");
    scanf("%f",&boy);
    printf("Kilonuz(kg):");
    scanf("%f",&kilo);

    boy=boy*100;
    boy=boy-150;

    if(cinsiyet=='k'|| cinsiyet=='K'){
        ideal_kilo=ideal_kilo+45;
        boy=boy/2.5;
        ideal_kilo=ideal_kilo+(boy*2.2);
        printf("ideal kilonuz:%.2f\n",ideal_kilo);
        if(kilo>ideal_kilo){
            printf("ideal kilonuzdan daha agirsiniz");
        }else if(kilo==ideal_kilo){
            printf("ideal kilonuzla es degersiniz");
        }else{
            printf("ideal kilonuzdan hafifsiniz");
        }
    }else if(cinsiyet=='e'|| cinsiyet=='E'){
        ideal_kilo=ideal_kilo+48;
        boy=boy/2.5;
        ideal_kilo=ideal_kilo+(boy*2.7);
        printf("ideal kilonuz:%.2f\n",ideal_kilo);
        if(kilo>ideal_kilo){
            printf("ideal kilonuzdan daha agirsiniz");
        }else if(kilo==ideal_kilo){
            printf("ideal kilonuzla es degersiniz");
        }else{
            printf("ideal kilonuzdan hafifsiniz");
        }

    }else{
        printf("yanlis tuslama");

    }










    return 0;
}
