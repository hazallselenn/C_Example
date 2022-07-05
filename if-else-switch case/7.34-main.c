#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ay;
    int sayi;

    printf("Hangi ayda (1..12) kac kisi tura katilacaksiniz:");
    scanf("%c %d",&ay,&sayi);

    switch(ay){
        case '1':printf("Toplam borcunuz %d TL",sayi*150);break;
        case '2':printf("Toplam borcunuz %d TL",sayi*150);break;
        case '3':printf("Toplam borcunuz %d TL",sayi*50);break;
        case '4':printf("Toplam borcunuz %d TL",sayi*50);break;
        case '5':printf("Toplam borcunuz %d TL",sayi*50);break;
        case '6':printf("Toplam borcunuz %d TL",sayi*250);break;
        case '7':printf("Toplam borcunuz %d TL",sayi*250);break;
        case '8':printf("Toplam borcunuz %d TL",sayi*250);break;
        case '9':printf("Toplam borcunuz %d TL",sayi*50);break;
        case '10':printf("Toplam borcunuz %d TL",sayi*50);break;
        case '11':printf("Toplam borcunuz %d TL",sayi*50);break;
        case '12':printf("Toplam borcunuz %d TL",sayi*150);break;
        default:printf("hatali tuslama");break;

    }












    return 0;
}
