#include <stdio.h>
void main(){
    int i=1,n,sum,totalsum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        if(i<n){
           sum=i*i;
           totalsum+=sum;
           printf("%d + ",sum);
        }
        else if(i=n){
            sum=i*i;
            totalsum+=sum;
            printf("%d ",sum);
        }
        i++;
    }
   printf("= %d",totalsum);
}