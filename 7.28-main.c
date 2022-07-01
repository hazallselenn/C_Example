#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float gc,ds1,ds2,ds3,fark1,fark2,fark3;

    printf("kahramanin gucunu giriniz:");
    scanf("%f",&gc);
    printf("dusmanlarin gucunu giriniz(3 adet):");
    scanf("%f %f %f",&ds1,&ds2,&ds3);

    fark1=fabs(gc-ds1);
    fark2=fabs(gc-ds2);
    fark3=fabs(gc-ds3);


    printf("\n\n%.2f %.2f %.2f\n\n",fark1,fark2,fark3);

    if(fark1>fark2 && fark2>fark3){
        printf("Kahraman 3 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark3);
    }else if(fark1>fark3 && fark1>fark2){
    printf("Kahraman 2 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark2);}
    else if(fark2>fark1 && fark1>fark3){
        printf("Kahraman 3 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark3);
    }
    else if(fark2>fark3 && fark3>fark1){
        printf("Kahraman 1 nolu dusmana saldirmalidir. (Guc farki:%.2f",fark1);
    }
    else if(fark3>fark2 && fark2>fark1){
        printf("Kahraman 1 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark1);
    }
    else if(fark3>fark1 && fark1>fark2){
        printf("Kahraman 2 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark2);
    }
    else if(fark1==fark2 > fark3){
        printf("kahraman 1 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark1);
    }
    else if(fark1==fark3>fark2){
        printf("Kahraman 1 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark1);
    }
    else if(fark2==fark3>fark1){
        printf("Kahraman 2 nolu dusmana saldirmalidir. (Guc farki:%.2f)",fark2);
    }


    return 0;
}
