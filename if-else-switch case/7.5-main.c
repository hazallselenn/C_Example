#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;
    int kilo;
    float boy;
    float indeks;


    printf("yasinizi giriniz:");
    scanf("%d",&yas);
    printf("kilonuzu giriniz(kg):");
    scanf("%d",&kilo);
    printf("boyunuzu giriniz(m):");
    scanf("%f",&boy);



    if(yas>=13 && yas<=17){
        indeks=((kilo)/((boy)*(boy)));
        if(indeks>=18.50 && indeks<=24.99){
            printf("vucut kitle indeksiniz:%.2f\n",indeks);
            printf("tebrikler askeri liseye girebilirsiniz");
        }else{
        printf("askeri liseye giremezsiniz");}

    }else{
    printf("yas araligi saglanmamaktadir");}















    return 0;
}
