#include <stdio.h>
#include <stdlib.h>

int main()
{
    float brut_aylik,yillik,toplam_vergi;

    printf("Brüt aylik gelirinizi giriniz: ");
    scanf("%f",&brut_aylik);
    printf("----------------------");

    yillik=brut_aylik*12;
    printf("\nToplam yillik geliriniz:%.2f\n",yillik);


    if(yillik>=0&&yillik<=10700){
        printf("Odemeniz gereken vergi:%.2f\n",(yillik*15)/100);
        printf("Her ay gelirinizden kesilecek vergi:%.2f\n",((yillik*15)/100)/12);
        printf("Vergisi kesilmis net aylik geliriniz:%.2f\n",brut_aylik-(((yillik*15)/100)/12));}
    else if(yillik>10700.00&&yillik<=26000){
        float eklenecek;
        yillik=yillik-10700.00;
        toplam_vergi=toplam_vergi+1605.00;
        eklenecek=(yillik*20)/100;
        toplam_vergi=toplam_vergi+eklenecek;
        printf("Odemeniz gereken toplam vergi:%.2f\n",toplam_vergi);
        printf("Her ay gelirinizden kesilecek vergi:%.2f\n",toplam_vergi/12);
        printf("Vergisi kesilmis net aylik geliriniz:%.2f\n",brut_aylik-(toplam_vergi/12));}
    else if(yillik>26000.00 && yillik<=94000.00){
        float eklenecek;
        yillik=yillik-26000.00;
        toplam_vergi=toplam_vergi+4665.00;
        eklenecek=(yillik*27)/100;
        toplam_vergi=toplam_vergi+eklenecek;
        printf("Odemeniz gereken toplam vergi:%.2f\n",toplam_vergi);
        printf("Her ay gelirinizden kesilecek vergi:%.2f\n",toplam_vergi/12);
        printf("Vergisi kesilmis net aylik gelirniz:%.2f\n",brut_aylik-(toplam_vergi/12));}
    else if(yillik>94000){
        toplam_vergi=(yillik*35)/100;
        printf("Odemeniz gereken toplam vergi:%.2f\n",toplam_vergi);
        printf("Her ay gelirinizden kesilecek vergi:%.2f\n",toplam_vergi/12);
        printf("Vergisi kesilmis net aylik geliriniz:%.2f\n",brut_aylik-(toplam_vergi/12));}





















    return 0;
}
