#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas,a,b,c,fark1,fark2,fark3;
    printf("Yasinizi giriniz:");
    scanf("%d",&yas);
    printf("Adaylarin yasini giriniz(3 adet):");
    scanf("%d %d %d",&a,&b,&c);

    fark1=fabs(yas-a);
    fark2=fabs(yas-b);
    fark3=fabs(yas-c);

    if(fark1 > fark2 && fark2 > fark3){
        printf("yasiniza en yakin 3 numarali adaydir.Yas farki = %d",fark3);
    }else if(fark1 > fark3 && fark3 > fark2){
    printf("yasiniza en yakin 2 numarali adaydir.Yas farki = %d",fark2);}
    else if(fark2>fark1 && fark1>fark3){
        printf("yasiniza en yakin 3 numarali adaydir.Yas farki = %d",fark3);
    }else if(fark2>fark3 && fark3>fark1){
    printf("yasiniza en yakin 1 numarali adaydir.Yas farki = %d",fark1);}
    else if(fark3>fark1 && fark1>fark2){
        printf("yasiniza en yakin 2 numarali adaydir.Yas farki = %d",fark2);
    }else if(fark3>fark2 && fark2>fark1){
    printf("yasiniza en yakin 1 numarali adaydir.Yas farki = %d",fark1);}
    else if(fark1==fark2 && fark2==fark3){
        printf("yasiniza en yakin 1 numarali adaydir.Yas farki = %d",fark1);
    }else if(fark1==fark2 && fark3>fark1){
    printf("yasiniza en yakin 1 numarali adaydir.Yas farki = %d",fark1);}
    else if(fark1==fark2 && fark1>fark3){
        printf("yasiniza en yakin 3 numarali adaydir.Yas farki = %d",fark3);}
    else if(fark1==fark3 && fark2>fark1){
        printf("yasiniza en yakin 1 numarali adaydir.Yas farki = %d",fark1);}
    else if(fark1==fark3 && fark1>fark2){
        printf("yasiniza en yakin 2 numarali adaydir.Yas farki = %d",fark2);}
    else if(fark2 == fark3 && fark1>fark2){
        printf("yasiniza en yakin 2 numarali adaydir.Yas farki = %d",fark2);}
    else if(fark2==fark3 && fark2>fark1){
        printf("yasiniza en yakin 1 numarali adaydir.Yas farki = %d",fark1);}



    return 0;
}
