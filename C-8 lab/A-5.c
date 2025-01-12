#include <stdio.h>
void main(){
    int n,oddn=0,evenn=0,count=0;
    while(count<10)
    {   printf("enter number: ");
        scanf("%d",&n);
        if(n&1)
        {
        evenn++;
        }
        else
        {
        oddn++;
        }
        count++;
    }
    printf("count even numbers: %d\n",evenn);
    printf("count odd numbers: %d",oddn);
}
