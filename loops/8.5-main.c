#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Baslangic ve bitis degerlerine göre aradaki cift sayilari sayan program(baslangic ve bitis degerleri ciftse dahil edilecek)

Program that counts even numbers between start and end values ​​(starting and ending values ​​will be included if even)
*/
int main()
{
    setlocale(LC_ALL, "Turkish");
    int baslangic,bitis,adet;

    printf("baslangic ve bitis degerini giriniz:");
    scanf("%d %d",&baslangic,&bitis);
    printf("Sayiar sunlardir:");
    for(int i=baslangic;i<=bitis;i++){
        if(i%2==0){
            adet++;
            printf("%d ",i);
        }
    }
    printf("(Toplam %d adet)",adet);

    return 0;
}
