#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
i=1 den n e kadar olan sayilarin i+1/i denklemi ile toplami

Sum of the numbers from i=1 to n with the equation i+1/i
*/
int main()
{
    setlocale(LC_ALL, "Turkish");
    int n;
    float sonuc;
    printf("n degeri:");
    scanf("%d",&n);
    for(float i=1.00;i<=n;i++){
        sonuc+=(i+1)/i;
    }
    printf("\nsonuc:%.2f",sonuc);













    return 0;
}
