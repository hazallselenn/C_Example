#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Halley yildizi her 75 yilda bir dünyadan görünmektedir.1986 ve sonrasýnda görülebilecel 20 tarihi bulup
2000 li yillarda kaç kre görülebilecegini yazan program


*/
int main()

{
    setlocale(LC_ALL, "Turkish");
    int yil=1986;
    int adet=1;
    int adet_2;
    printf("Halley yildizinin görülebilecegi yillar:");
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
    printf("\nHalley yýldýzý 2000 li yýllarda %d kez görülebilir",adet_2);
    return 0;
}
