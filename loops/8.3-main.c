#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

65 ile 84 arasindaki sayilarin ascýý kod tablosundaki karakter karsiligini büyük ve kücük olarak yazdirma

Printing the character equivalent of numbers between 65 and 84 in upper and lower case code table
*/
int main()
{
    setlocale(LC_ALL, "Turkish");

    int ascii=65;
    printf("ASCII KOD  B.KARAKTER  K.KARAKTER\n");
    for(int i=65;i<=84;i++){
        printf("   %d         %c           %c\n",ascii,i,i+32);
        ascii++;
    }





    return 0;
}
