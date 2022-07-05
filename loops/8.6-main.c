#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
baslangic ve bitis yillarina göre artik yillari ve kac adet oldugunu bulan program

The program that finds leap years and how many there are according to the start and end years
*/
int main()
{
    setlocale(LC_ALL, "Turkish");

    int baslangic,bitis,adet;

    printf("baslangic yilini giriniz:");
    scanf("%d",&baslangic);
    printf("bitis yilini giriniz:");
    scanf("%d",&bitis);

    for(int i=baslangic;i<=bitis;i++){
        if(i%4==0){
             adet++;
             printf("%d ",i);


        }
    }
    printf("\nToplam %d adet",adet);





    return 0;
}
