#include <stdio.h>
void main(){
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);
    switch(month){
    case 1:printf("january\n31 Days");
        break;
    case 2:printf("february\n28 Days(29 Days in Leap year)");
        break;
    case 3:printf("march\n31 Days");
        break;
    case 5:printf("may\n31 Days");
        break;
    case 7:printf("july\n31 Days");
        break;
    case 8:printf("august\n31 Days");
        break;
    case 10:printf("octomber\n31 Day");
        break;
    case 12:printf("december\n31 Days");
        break;
    case 4:printf("april\n30 Days");
        break;
    case 6:printf("june\n30 Days");
        break;
    case 9:printf("september\n30 Days");
        break;
    case 11:printf("november\n30 Days");
        break; 
    default:printf("Envaild");  
    break;           
    }
}
