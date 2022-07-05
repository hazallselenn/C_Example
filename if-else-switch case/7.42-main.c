#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tur;
    float sayi,otobus;
    float koltuk=46.00;
    float oran;

    printf("Tur türünü giriniz(I,i:sehirici, D,d:sehirdisi):");
    scanf("%c",&tur);
    printf("Tura kac kisi katilacak?:");
    scanf("%f",&sayi);


    otobus=(sayi/koltuk)+1.00;
    oran=(sayi/((otobus*46)));
    printf("bu tur için %.1f adet otobuse ihtiyac var",otobus);
    printf("\nturdaki bos koltuk sayisi:%.1f\n",(otobus*46)-sayi);
    printf("Turun doluluk orani %.2f\n",oran);
    printf("Karlilik derecesi:");

    if(tur=='I'||tur=='i'){
            if(oran<=0.60){
                printf("Zarar");
            }
            else if(oran>0.60 && oran<=0.90){
                printf("Karli");
            }else{printf("Cok karli");}
    }else if(tur=='d'||tur=='D'){
            if(oran<=0.70){
                printf("Zarar");
            }else if(oran>0.70 && oran<=0.90){printf("Karli");}
            else{printf("Cok karli");}

    }else{printf("hatali tuslama");}










    return 0;
}
