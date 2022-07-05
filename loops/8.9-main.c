#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

klavyeden girilen sayilarin pozitif ve negatif adedini bulma

Finding the positive and negative number of numbers entered from the keyboard

*/
int main()
{
    setlocale(LC_ALL, "Turkish");
    int pozitif,adet=0;
    int sayi;

    printf("Kac adet sayi gireceksiniz:");
    scanf("%d",&adet);
    printf("Sayilar (%d tane):",adet);
    for(int i=0;i<adet;i++){
        scanf("%d",&sayi);
        if(sayi>=0){
            pozitif++;
        }
    }
    printf("\nGirilen %d sayinin %d tanesi negatif, %d tanesi pozitiftir",adet,(adet-pozitif),pozitif);




    return 0;
}
