#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cevap;
    float gun_sayisi,maas,odenek;
    printf("son 3 ay kesintisiz calistiniz mi?(E,e, H,h)=");
    scanf("%c",&cevap);

    if(cevap=='E'||cevap=='e'){
            printf("Prim gun sayinizi giriniz:");
            scanf("%f",&gun_sayisi);
            if(gun_sayisi>=600){
                printf("Calisirkenki son aylik maasiniz:");
                scanf("%f",&maas);
                odenek=(((maas/30))*40)/100;
                printf("Gunluk issizlik odenegi:%.2fTL\n",odenek);
                printf("Issizlik aylik maasiniz:%.2fTL\n",odenek*30);
                if(gun_sayisi>=600 && gun_sayisi<=899){
                    printf("Issizlik odenegi alabileceginiz süre:180 gun");
                }else if(gun_sayisi>=900 && gun_sayisi<=1079){
                    printf("Issizlik odenegi alabileceginiz sure:240 gun");
                }else if(gun_sayisi>=1080){
                printf("Issizlik odenegi alabileceginiz sure:300 gun");}



            }
            else{
                printf("Maalesef issizlik maasi ödemesi alamazsiniz");
            }



    }else if(cevap=='H'||cevap=='h'){
        printf("Maalesef issizlik maasi ödemesi alamazsiniz");}else{printf("yanlis tuslama");}














    return 0;
}
