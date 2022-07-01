#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bh;
    printf("(1,3,5,7,9) rakamlarindan birinin ing karsiliginin bas harfini giriniz");
    scanf("%c",&bh);
    if(bh=='o'){
            printf("one-bir-1");
    }else if(bh=='t'){
            printf("three-üc-3");
    }else if(bh=='f'){
            printf("five-bes-5");
    }else if(bh=='s'){
            printf("seven-yedi-7");
    }else if(bh=='n'){
            printf("nine-dokuz-9");
    }else{
    printf("yanlis tuslama");}
    return 0;
}
