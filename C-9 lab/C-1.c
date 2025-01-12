#include <stdio.h>
void main(){
    int n,sum=0,digit=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        int rem = n%10;
        sum=sum*10+rem;
        n=n/10;
        digit++;
    }

    int j=0;
    while(j<digit)
    {
        int i=sum%10;

        if(i==1)
        {
            printf("ONE ");
        }
        else if(i==2)
        {
            printf("TWO ");
        }
        else if(i==3)
        {
            printf("THREE ");
        }
        else if(i==4)
        {
            printf("FOUR ");
        }
        else if(i==5)
        {
            printf("FIVE ");
        }
        else if(i==6)
        {
            printf("SIX ");
        }
        else if(i==7)
        {
            printf("SEVEN ");
        }
        else if(i==8)
        {
            printf("EIGHT ");
        }
        else if(i==9)
        {
            printf("NINE ");
        }
        else
        {
            printf("ZERO ");
        }
        sum=sum/10;
        j++;
    }
}
