#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tur;
    int yas,hacim;

    printf("Arac turunu giriniz (M,m:Minibus, P,p: Panelvan)");
    scanf("%c",&tur);
    printf("Aracin yasini giriniz:");
    scanf("%d",&yas);

    switch(tur){
        case 'M':if(yas>=1 && yas<=6){printf("2011 yili MTV tutari 523.00 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",523.00/2.00);}
                 else if(yas>=7 && yas<=15){printf("2011 yili MTV tutari 346 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",346.00/2.00);}
                 else if(yas>=16){printf("2011 yili MTV tutari 172 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",172.00/2.00);}break;
        case 'm':if(yas>=1 && yas<=6){printf("2011 yili MTV tutari 523.00 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",523.00/2.00);}
                 else if(yas>=7 && yas<=15){printf("2011 yili MTV tutari 346 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",346.00/2.00);}
                 else if(yas>=16){printf("2011 yili MTV tutari 172 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",172.00/2.00);}else{printf("yasi hatali girdiniz");}break;
        case 'P':printf("Aracin silindir hacmini giriniz:");scanf("%d",&hacim);
                 if(hacim<=1900){if(yas>=1 && yas<=6){printf("2011 yili MTV tutari 697 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",697.00/2.00);}
                    else if(yas>=7 && yas<=15){printf("2011 yili MTV tutari 436 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",436.00/2.00);}
                    else if(yas>=16){printf("2011 yili MTV tutari 260 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",260.00/2.00);}
                    else{printf("yasi hatali girdiniz");}}
                 else if(hacim>=1901){
                    if(yas>=1 && yas<=6){printf("2011 yili MTV tutari 1052 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",1052.00/2.00);}
                    else if(yas>=7 && yas<=15){printf("2011 yili MTV tutari 697 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",697.00/2.00);}
                    else if(yas>=16){printf("2011 yili MTV tutari 436 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",436.00/2.00);}else{printf("yasi hatali girdiniz");}
                }else{printf("hacmi hatali girdiniz");}break;
        case 'p':printf("Aracin silindir hacmini giriniz:");scanf("%d",&hacim);
                 if(hacim<=1900){
                    if(yas>=1 && yas<=6){printf("2011 yili MTV tutari 697 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",697.00/2.00);}
                    else if(yas>=7 && yas<=15){printf("2011 yili MTV tutari 436 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",436.00/2.00);}
                    else if(yas>=16){printf("2011 yili MTV tutari 260 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",260.00/2.00);}else{printf("yasi hatali girdiniz");}}
                 else if(hacim>=1901){
                    if(yas>=1 && yas<=6){printf("2011 yili MTV tutari 1052 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",1052.00/2.00);}
                    else if(yas>=7 && yas<=15){printf("2011 yili MTV tutari 697 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",697.00/2.00);}
                    else if(yas>=16){printf("2011 yili MTV tutari 436 TL\nTaksit bedeli(MTV tutarinin yarisi):%.2f",436.00/2.00);}else{printf("yasi hatali girdiniz");}
                }else{printf("hacmi hatali girdiniz");}break;


       default:printf("hatali tuslama");break;
    }







    return 0;
}
