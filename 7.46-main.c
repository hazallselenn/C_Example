#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi,o1,o2,o3,o4,o5,o6,o7,o8,o9,bas1,bas2,bas3;
    printf("Sayiyi giriniz (en fazla 3 basamak)=");
    scanf("%d",&sayi);



    bas3=sayi/100;
    sayi=sayi%100;
    bas2=sayi/10;
    sayi=sayi%10;
    bas1=sayi/1;

    o1=(bas3*100)+(bas2*10)+(bas1);
    o2=(bas3*100)+(bas1*10)+(bas2);
    o3=(bas2*100)+(bas3*10)+(bas1);
    o4=(bas2*100)+(bas1*10)+(bas3);
    o5=(bas1*100)+(bas2*10)+(bas3);
    o6=(bas1*100)+(bas3*10)+(bas2);


    printf("\n%d %d %d\n",bas1,bas2,bas3);
    printf("\n%d %d %d %d %d %d\n",o1,o2,o3,o4,o5,o6);

    if(bas1==0 && bas2>bas3){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o3);
    }else if(bas1==0 && bas3>bas2){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o1);
    }else if(bas2==0 && bas1>bas3){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o6);
    }else if(bas2==0 && bas3>bas1){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o2);
    }else if(bas1>bas2 && bas2 > bas3 && bas1!=0 && bas2!=0 && bas3!=0){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o5);
    }else if(bas1>bas3 && bas3>bas2 && bas1!=0 && bas2!=0 && bas3!=0){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o6);
    }else if(bas2>bas1 && bas1>bas3 && bas1!=0 && bas2!=0 && bas3!=0){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o4);
    }else if(bas2>bas3 && bas3>bas1 && bas1!=0 && bas2!=0 && bas3!=0){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o3);
    }else if(bas3>bas2 && bas2>bas1 && bas1!=0 && bas2!=0 && bas3!=0){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o1);
    }else if(bas3>bas1 && bas1>bas2 && bas1!=0 && bas2!=0 && bas3!=0){
        printf("bu sayidan elde edilebilecek en buyuk sayi=%d",o29);
    }








    return 0;
}
