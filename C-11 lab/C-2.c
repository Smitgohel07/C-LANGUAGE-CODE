#include <stdio.h>
int main(){
    int i,base,power,sum=0,ans=0,j,temp;
    printf("Enter base and power: ");
    scanf("%d %d",&base,&power);
    temp=base;
    for(i=1;i<power;i++)
    {
        sum=0;
        for(j=0;j<base;j++)
        {
            sum=sum+temp;
        }
        temp=sum;
    }
    printf("%d",sum);
}