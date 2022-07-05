#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*

0 ile 15 arasindaki sayilarin sekizlik onalt�l�k sistemdeki g�r�n��lerini yazdirma
%x onalt�l�k
%o sekizlik

Printing the octal and hexadecimal appearances of numbers 0 to 15
%x hexadecimal
%o octal




*/
int main()
{
    setlocale(LC_ALL, "Turkish");
    printf("ONLUK  SEK�ZL�K  ONALT�L�K\n");
    for(int i=0;i<16;i++){
        printf("%d          %o          %x\n",i,i,i);
    }

    return 0;
}
