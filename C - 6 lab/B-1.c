#include <stdio.h>
void main(){
    float electricity_unit,units,bill;
    printf("Enter electricity unit charge: ");
    scanf("%f",&units);
    if(units>0 && units<=50){
        electricity_unit=units*0.50;
    }else if (units>50 && units<=150){
        electricity_unit=(50*0.50)+((units-50)*0.75);
    }else if (units>150 && units<=250){
        electricity_unit=(50*0.50)+(100*0.75)+((units-150)*1.20);
    }else if(units>250){
        electricity_unit=(50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);
    }
    bill=electricity_unit+(electricity_unit*0.20);
    printf("Total Electricity Bill: Rs. %.2f",bill);
}