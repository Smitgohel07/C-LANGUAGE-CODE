#include <stdio.h>
void main(){
    int i=1,n,count=0,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            sum+=i;
        } 
        i++;
    }if(sum==n)
    printf("%d is prefect number",n);
    else
    printf("%d is not prefect number",n);
}