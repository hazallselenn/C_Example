#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ay;
    printf("ay degerini giriniz(1-12):");
    scanf("%c",&ay);

    switch(ay){
        case '1': printf("girdiginiz deger ''ocak'' ayidir");break;
        case '2':printf("girdiginiz deger ''subat'' ayidir.");break;
        case '3':printf("girdiginiz deger ''mart'' ayidir.");break;
        case '4':printf("girdiginiz deger ''nisan'' ayidir.");break;
        case '5':printf("girdiginiz deger ''mayis'' ayidir.");break;
        case '6':printf("girdiginiz deger ''haziran'' ayidir");break;
        case '7':printf("girdiginiz deger ''temmuz'' ayidir");break;
        case '8':printf("girdiginiz deger ''agustos'' ayidir");break;
        case '9':printf("girdiginiz deger ''eylul'' ayidir");break;
        case '10':printf("girdiginiz deger ''ekim'' ayidir");break;
        case '11':printf("girdiginiz deger ''kasim'' ayidir");break;
        case '12':printf("girdiginiz deger ''aralik'' ayidir");break;
        default:printf("yanlis tuslama");break;

    }
    return 0;
}
