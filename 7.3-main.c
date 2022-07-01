#include <stdio.h>
#include <stdlib.h>

//klavyeden girilen 5 basamakli sayinin palindrom olup olmadigini hesaplar.
//Calculates whether a 5-digit number entered from the keyboard is a palindrome.

int main()
{
    int sayi;
    printf("sayiyi giriniz:");
    scanf("%d",&sayi);

    int bas_5,bas_4,bas_3,bas_2,bas_1;
    bas_5=sayi/10000;
    sayi=sayi%10000;
    bas_4=sayi/1000;
    sayi=sayi%1000;
    bas_3=sayi/100;
    sayi=sayi%100;
    bas_2=sayi/10;
    sayi=sayi%10;
    bas_1=sayi/1;

    if(bas_5==bas_1 && bas_4 == bas_2){
        printf("sayi palindromdur");
    }else{

    printf("sayi palindrom değildir");
    }







    return 0;
}
