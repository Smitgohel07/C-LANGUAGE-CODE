#include <stdio.h>
void main(){
    int i=1,n;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            if(i<n)
            printf("%d,",i);
            else
            printf("%d",i);
        }
        i++;
    }
}