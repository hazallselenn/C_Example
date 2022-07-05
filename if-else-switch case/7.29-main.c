#include <stdio.h>
#include <stdlib.h>

int main()
{
    char secim;
    printf("----------MENU----------");
    printf("\n(D veya d) Daire\n(T veya(t) Diktdörtgen\n(K veya k) Kare\n(U veya u) Ucgen");
    printf("\nSeciminiz:");
    scanf("%c",&secim);

    if(secim=='D'|| secim=='d'){
            float yaricap,alan;
            float pi=3.14;
            printf("dairenin yaricapini giriniz:");
            scanf("%f",&yaricap);
            alan=pi*(yaricap * yaricap);
            printf("yaricapi %.2f olan dairenin alani:%.2f birimkaredir",yaricap,alan);
    }else if(secim=='T'|| secim=='t'){
            float kenar_1,kenar_2,alan;
            printf("Dikdörtgenin uzun ve kýsa kenar uzunlugunu giriniz:");
            scanf("%f %f",&kenar_1,&kenar_2);
            alan=kenar_1*kenar_2;
            printf("Uzunlugu %.2f ve %.2f olan dikdörtgenin alani:%.2f birimkaredir",kenar_1,kenar_2,alan);
    }else if(secim=='K' || secim=='k'){
            float kenar;
            printf("Karenin tek kenar uzunlugunu giriniz:");
            scanf("%f",&kenar);
            printf("tek kenar uzunlugu %.2f olan karenin alani %.2f birimkaredir",kenar,(kenar*kenar));
    }else if(secim=='U' || secim=='u'){
            float taban,yukseklik,alan;
            printf("Ucgenin taban uzunlugu ve yukseklik bilgisini giriniz:");
            scanf("%f %f",&taban,&yukseklik);
            alan=(taban*yukseklik)/2;
            printf("taban uzunlugu %.2f yuksekligi %.2f olan ucgenin alani:%.2f",taban,yukseklik,alan);

    }
    return 0;
}
