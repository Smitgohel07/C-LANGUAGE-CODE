#include <stdio.h>
#include <math.h>
void main(){
    int n,count=0,temp,b;
    double sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    int number=n;
    while(n>0){
        count++;
        n/=10;
    }
    while(temp>0){
        b=temp%10;
        sum=sum+pow(b,count);
        temp/=10;
    }
    if(number==sum)
      printf("%d is armstrong number",number);
    else
     printf("%d is not armstrong number",number);
}