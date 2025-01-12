#include <stdio.h>
void main(){
    int days,year,week;
    printf("Enter number of days: ");
    scanf("%d",&days);
    year = days/365;
    week = (days-year*365)/7;
    days = (days-year*365-week*7);
    printf("%d year\n%d week\n%d days",year,week,days);

}