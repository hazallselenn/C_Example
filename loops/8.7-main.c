#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    /*
    girilen iki sayi arasindaki 4 e ve 7 ye tam b�l�nebilen sayilari ve kac adet olduklarini ekrana yazan program

    A program that displays the numbers that are divisible by 4 and 7 between two entered numbers and how many they are.
    */

    setlocale(LC_ALL, "Turkish");
    int birinci,ikinci,adet;

    printf("Birinciyi giriniz:");
    scanf("%d",&birinci);
    printf("�kinciyi giriniz:");
    scanf("%d",&ikinci);

    for(int i=birinci;i<=ikinci;i++){
        if(i%4==0){
            if(i%7==0){
                printf("%d, ",i);
                adet++;
            }
        }
    }
    printf("\nToplam %d adet",adet);





    return 0;
}
