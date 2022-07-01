#include <stdio.h>
#include <stdlib.h>

//vize,final ve devam puani girilen ogrencinin gecip gecmedigini hesaplar.
//gecme notu 60 ve üzeridir.

//Calculates whether the student whose visa, final and attendance score is entered has passed or not.
//His/her passing grade is 60 and above.

int main(){

int exam_1,exam_2,ort,devam_puan;
printf("ara sinav puanini giriniz:");
scanf("%d",&exam_1);
printf("son sinav puanini giriniz:");
scanf("%d",&exam_2);
printf("devam puanini giriniz:");
scanf("%d",&devam_puan);

ort=((exam_1*40)/100) + ((exam_2*50)/100) + ((devam_puan*10)/100);

if(ort>=60){
    printf("Tebrikler gectiniz");
}
else{
    printf("kaldiniz");
}










    return 0;
}
