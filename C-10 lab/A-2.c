#include <stdio.h>
void main(){
    int i=0,sum=0,nn,n;
    float avg;
    printf("Enter toal size of numbers: ");
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&nn);
        sum+=nn;
        i++;
    }
    avg=(float)sum/n;
    printf("%d %.2f",sum,avg); 
}
