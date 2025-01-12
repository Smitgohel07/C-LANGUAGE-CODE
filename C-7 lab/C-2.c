#include <stdio.h>

void main(){
    int month, year, days;
    
    printf("Enter month number: ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    switch(month){
        case 1: printf("January\n31 days");
            break;
        case 3: printf("March\n31 days");
            break;
        case 5: printf("May\n31 days");
            break;
        case 7: printf("July\n31 days");
            break;
        case 8: printf("August\n31 days");
            break;
        case 10: printf("October\n31 days");
            break;
        case 12: printf("December\n31 days");
            break;
        case 2: 
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            }else{
                days = 28;
            }
            printf("February\n%d days", days);
            break;
        case 4: printf("April\n30 days");
            break;
        case 6: printf("June\n30 days");
            break;
        case 9: printf("September\n30 days");
            break;
        case 11: printf("November\n30 days");
            break;
        default: printf("Invalid month number");
            break;           
    }
}

