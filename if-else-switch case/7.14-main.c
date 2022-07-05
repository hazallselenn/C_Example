#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dprm;
    printf("Righter cinsinden deprem buyuklugunu giriniz=");
    scanf("%f",&dprm);

   if(dprm<5.00){
    printf("ufak veya hasarsiz");
   }else if(dprm>=5.00 && dprm <5.50){
   printf("az hasarli");}else if(dprm>=5.50 && dprm<6.50){
   printf("ciddi hasar:catlamalar ve cokmeler olabilir");}else if(dprm>=6.50 && dprm <7.50){
   printf("felaket:evler ve binalar cokebilir");}else{
   printf("facia:bütün yapilar yok olur");}







    return 0;
}
