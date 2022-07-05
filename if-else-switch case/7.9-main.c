#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi_1,sayi_2,sayi_3;
    printf("ьз adet ondalikli sayi giriniz:");
    scanf("%f %f %f",&sayi_1,&sayi_2,&sayi_3);

    if(sayi_1 > sayi_2){
            if(sayi_1 > sayi_3){
                if(sayi_2 > sayi_3){
                    printf("%.2f %.2f %.2f",sayi_1,sayi_2,sayi_3);}}}

    else if(sayi_1 > sayi_3 && sayi_3 > sayi_2 && sayi_1 >sayi_2){
        printf("%.2f > %.2f > %.2f",sayi_1,sayi_3,sayi_2);
    }else if(sayi_2 > sayi_1 && sayi_1 > sayi_3 && sayi_2 > sayi_3){
        printf("%.2f > %.2f > %.2f",sayi_2,sayi_1,sayi_3);
    }else if(sayi_2 > sayi_3 && sayi_3 > sayi_1 && sayi_2 > sayi_1){
        printf("%.2f > %.2f > %.2f",sayi_2,sayi_3,sayi_1);
    }else if(sayi_3 > sayi_2 && sayi_2 > sayi_1 && sayi_3 > sayi_1){
        printf("%.2f > %.2f > %.2f",sayi_3,sayi_2,sayi_1);
    }else if(sayi_3 > sayi_1 && sayi_3 > sayi_2 && sayi_1 > sayi_2){
        printf("%.2f > %.2f > %.2f",sayi_3,sayi_1,sayi_2);
    }else{
        printf("%.2f = %.2f = %.2f",sayi_1,sayi_2,sayi_3);
    }















    return 0;
}
