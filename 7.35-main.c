#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod;
    int adet;

    printf("Kullanici kodunu (A,a,B,b,C,c,d,D ve adetini giriniz:");
    scanf("%c %d",&kod,&adet);
    printf("-----------------------------------------------------\n");

    switch(kod){
         case 'A':printf("Borcunuz %d TL",adet*1);break;
         case 'a':printf("Borcunuz %d TL",adet*1);break;
         case 'B':printf("Borcunuz %d TL",adet*2);break;
         case 'b':printf("Borcunuz %d TL",adet*2);break;
         case 'C':printf("Borcunuz %d TL",adet*3);break;
         case 'c':printf("Borcunuz %d TL",adet*3);break;
         case 'D':printf("Borcunuz %d TL",adet*3);break;
         case 'd':printf("Borcunuz %d TL",adet*3);break;
         default:printf("hatali tuslama");break;

     }


     return 0;
}
