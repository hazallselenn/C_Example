#include <stdio.h>
#include <stdlib.h>

int main()
{

    float bom,iom,uom,bip,iip,uip,bhp,ihp,uhp,net1,net2,net3;



    printf("Birincinin oynadigi mac, isabetli ve hatali pas sayisini giriniz:");
    scanf("%f %f %f",&bom,&bip,&bhp);
    printf("İkincinin oynadigi mac, isabetli ve hatali pas sayisini giriniz:");
    scanf("%f %f %f",&iom,&iip,&ihp);
    printf("Ucuncunun oynadigi mac, isabetli ve hatali pas sayisini giriniz:");
    scanf("%f %f %f",&uom,&uip,&uhp);
    net1=bip-bhp;
    net2=iip-ihp;
    net3=uip-uhp;

    if(net1>net2 && net2>net3){
        printf("En kötüsü 3.oyuncudur.\n(Net isabetli pas=%.2f, mac basina dusen net isabetli pas=%.2f",(uip-uhp),(net3/uom));
    }else if(net1>net3 && net3>net2){
        printf("En kötüsü 2.oyuncudur.\n(Net isabetli pas=%.2f, mac basina dusen net isabetli pas=%.2f",(iip-ihp),(net2/iom));
    }else if(net2>net1 && net1>net3){
        printf("En kötüsü 3.oyuncudur.\n(Net isabetli pas=%.2f, mac basina dusen net isabetli pas=%.2f",(uip-uhp),(net3/uom));
    }else if(net2>net3 && net3>net1){
        printf("En kötüsü 1.oyuncudur.\n(Net isabetli pas=%.2f, mac basina dusen net isabetli pas=%.2f",(bip-bhp),(net1/(bom)));
    }else if(net3>net2 && net2>net1){
        printf("En kötüsü 1.oyuncudur.\n(Net isabetli pas=%.2f, mac basina dusen net isabetli pas=%.2f",(bip-bhp),(net1/(bom)));
    }else if(net3>net1 && net1>net2){
        printf("En kötüsü 2.oyuncudur.\n(Net isabetli pas=%.2f, mac basina dusen net isabetli pas=%.2f",(iip-ihp),(net2/iom));
    }












    return 0;
}
