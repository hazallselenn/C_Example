#include <stdio.h>
#include <stdlib.h>

//trafik yanlis sayisi,motor yanlis sayisi ve ilk yardim yanlis sayisina göre direksiyon sinavına girip girmeyecegini hesaplar
//Calculates whether or not to take the driving test according to the number of
//traffic mistakes, the number of engine mistakes and the number of first aid mistakes.

int main()
{
    float trafik_y,motor_y,ilkyardim_y;
    float trafik_puan,motor_puan,ilkyardim_puan;

    printf("trafik yanlis sayisini giriniz:");
    scanf("%f",&trafik_y);
    printf("Motor yanlis sayisini giriniz:");
    scanf("%f",&motor_y);
    printf("ilk yardým yanlis sayisini giriniz:");
    scanf("%f110",&ilkyardim_y);

    trafik_puan=100-((100/50)*trafik_y);
    motor_puan=100-(2.5*motor_y);
    ilkyardim_puan=100-((100.00/30.00)*ilkyardim_y);

    printf("trafik puaniniz:%.2f\n",trafik_puan);
    printf("motor puaniniz:%.2f\n",motor_puan);
    printf("ilk yardim puaniniz:%.2f\n",ilkyardim_puan);

    if(trafik_puan>=70 && motor_puan >=70 && ilkyardim_puan >=70){
        printf("direksiyon sinavina katilabilirsiniz");
    }else{
    printf("üzgünüz direksiyon sinavina katilamazsiniz");}




















    return 0;
}
