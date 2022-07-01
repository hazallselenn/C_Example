#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gun;
    printf("gun degerini giriniz(1-7)");
    scanf("%c",&gun);

    switch(gun){
        case '1':printf("girdiginiz deger ''pazartesi'' ye aittir");break;
        case '2':printf("girdiginiz deger ''sali''ya aittir");break;
        case '3':printf("girdiginiz deger ''carsamba''ya aittir");break;
        case '4':printf("girdiginiz deger ''persembe''ye aittir");break;
        case '5':printf("girdiginiz deger ''cuma'' ya aittir");break;
        case '6':printf("girdiginiz deger ''cumartesi'' ye aittir");break;
        case '7':printf("girdiginiz deger ''pazar'' a aittir");break;
        default:printf("hatali tuslama");break;

    }
    return 0;
}
