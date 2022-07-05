#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a,b,c;
   printf("a,b,c uzunluklarýný giriniz=");
   scanf("%d %d %d",&a,&b,&c);

   if(((b+c>a) && a>abs(b-c) && ((b+c)> abs(b-c)))){
    if(((a+c)>b)&&(b>abs(a-c))&&((a+c)>abs(a-c))){
        if(((a+b)>c)&&(c>abs(a-b))&&((a+b)>abs(a-b))){
            printf("bu bir ucgendir. Bu ucgenin tipi:");
        }
    }
   }

   if(a==b || b==c || a==c){
    printf("ikizkenar ucgendir");
   }else if(a==b && b==c && a==c){
       printf("eskenar ucgendir");
   }else{
   printf("cesitkenar ucgendir");}



    return 0;
}
