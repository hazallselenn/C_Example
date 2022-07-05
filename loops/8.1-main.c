#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*

0 ile 15 arasindaki sayilarin sekizlik onaltýlýk sistemdeki görünüþlerini yazdirma
%x onaltýlýk
%o sekizlik

Printing the octal and hexadecimal appearances of numbers 0 to 15
%x hexadecimal
%o octal




*/
int main()
{
    setlocale(LC_ALL, "Turkish");
    printf("ONLUK  SEKÝZLÝK  ONALTÝLÝK\n");
    for(int i=0;i<16;i++){
        printf("%d          %o          %x\n",i,i,i);
    }

    return 0;
}
