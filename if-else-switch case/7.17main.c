#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sure,ucret;

    printf("süreyi giriniz(saat)=");
    scanf("%f",&sure);

    printf("borcunuz:");
    if(sure<1.00){
        printf("5 TL");
    }else if(sure>=1 && sure<5){
    printf("20 TL");}else if(sure>=5 && sure<=10){
    printf("40 TL");}else{
        ucret=40.00;
        sure=sure-10.00;
        sure=sure/1;
        ucret=ucret+(sure*0.50);
        printf("%.2f TL",ucret);
    }






    return 0;
}
