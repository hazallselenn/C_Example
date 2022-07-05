#include <stdio.h>
#include <stdlib.h>

int main()
{

    float kilo,boy,vki_e,vki_k;
    char cinsiyet;

    printf("Kilo(kg), boy(m) ve cinsiyet(e,E / k,K) gir:");
    scanf("%f %f %c",&kilo,&boy,&cinsiyet);
    printf("---------------------------------------------\n");

    if(cinsiyet=='K'||cinsiyet=='k'){
        vki_k=kilo/(boy*boy);
        printf("Vucut kitle indeksi:%.2f\n",vki_k);
        if(vki_k<19.1){
            printf("Zayifsiniz. Saglik riski!");
        }else if(vki_k>=19.1 && vki_k<=25.8){
        printf("Normalsiniz. Risk yoktur");}
        else if(vki_k>=25.9 && vki_k<=32.2){
            printf("Sismanlik sinirinda ya da sismansiniz. Riskli");
        }else{printf("Obezite. Ciddi derecede riski");}
    }else if(cinsiyet=='E'||cinsiyet=='e'){
        vki_e=kilo/(boy*boy);
        printf("Vucut kitle indeksi:%.2f\n",vki_e);
        if(vki_e<20.7){
            printf("Zayifsiniz. Saglik riski!");
        }else if(vki_e>=20.7 && vki_e<=26.4){
        printf("Normalsiniz. Risk yoktur");}
        else if(vki_e>=26.5 && vki_e<=31.1){
            printf("Sismanlik sinirinde ya da sismansiniz. Riskli");
        }else{printf("Obezite. Ciddi derecede riskli");}

    }else{printf("hatali tuslama");}









    return 0;
}
