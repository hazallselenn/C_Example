#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sigorta,hurda,onarim,kar,masraf;

    printf("Hasarli aracin sigorta, onarim ve hurda bedelini giriniz:");
    scanf("%d %d %d",&sigorta,&onarim,&hurda);

    masraf=sigorta-hurda;
    kar=onarim-masraf;

    if(onarim>=masraf){
        printf("araci perte ayirmalisiniz\n");
        printf("bu araci perte ayirarak %d TL kar elde edersiniz",kar);
    }else{
        printf("bu araci onarim icin servise göndermelisiniz");

    }



    return 0;
}
