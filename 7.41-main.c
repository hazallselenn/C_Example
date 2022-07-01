#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,bas_1,bas_2,bas_3,cift_say,cift_say_1=0;

    printf("sayiyi giriniz(3 basamakli):");
    scanf("%d",&sayi);

    bas_3=sayi/100;
    sayi=sayi%100;
    bas_2=sayi/10;
    sayi=sayi%10;
    bas_1=sayi/1;

    //printf("\n%d %d %d\n",bas_3,bas_2,bas_1);

    if(bas_1%2==0)
    {
        cift_say++;
    }

    if(bas_2%2==0)
    {
        cift_say++;
    }

    if(bas_3%2==0)
    {
        cift_say++;
    }


    printf("sayida %d tane cift rakam vardir",(cift_say+cift_say_1));
    return 0;
}
