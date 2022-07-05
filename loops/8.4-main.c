#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

girilen 10 sayinin tek olanlarinin ortalamasini bulan program

program that finds the average of the odd ones of 10 entered numbers
*/
int main()
{

    setlocale(LC_ALL, "Turkish");
    int sayi;
    float toplam,sayac;

    printf("Sayilari giriniz (10 adet)");
    for(int i=0;i<10;i++){
        scanf("%d",&sayi);
        if(sayi%2==1){
            toplam+=sayi;
            sayac++;
        }
    }
    printf("girilen %.f adet tek sayinin ortalamasi=%.2f",sayac,toplam/sayac);







    return 0;
}
