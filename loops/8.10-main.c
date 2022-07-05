#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*
klavyeden girilen n ve x degerine göre serinin sonucunu bulan program
seri:T=1-x/1+x2/2-x3/3...xn/n;

program that finds the result of the series according to the n and x values ​​entered from the keyboard
serial:T=1-x/1+x2/2-x3/3...xn/n;
*/
int main()
{
    setlocale(LC_ALL, "Turkish");
    int x,n;
    float sonuc;
    sonuc=1.00;

    printf("x degeri:");
    scanf("%d",&x);
    printf("n degeri:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
        sonuc+=(pow(x,i))/i;}

        else if(i%2==1 || i==1){
            sonuc-=((pow(x,i))/i);

        }
    }
    printf("\nsonuc:%.2f",sonuc);

    return 0;
}
