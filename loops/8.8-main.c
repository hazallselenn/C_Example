#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Halley yildizi her 75 yilda bir d�nyadan g�r�nmektedir.1986 ve sonras�nda g�r�lebilecel 20 tarihi bulup
2000 li yillarda ka� kre g�r�lebilecegini yazan program


*/
int main()

{
    setlocale(LC_ALL, "Turkish");
    int yil=1986;
    int adet=1;
    int adet_2;
    printf("Halley yildizinin g�r�lebilecegi yillar:");
    while(1){
        printf("%d,",yil);
        yil+=75;
        adet++;
        if(adet==21){
            break;
        }
        if(yil>=2000 && yil<3000){
            adet_2++;
        }


    }
    printf("\nHalley y�ld�z� 2000 li y�llarda %d kez g�r�lebilir",adet_2);
    return 0;
}
