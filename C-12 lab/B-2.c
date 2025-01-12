#include <stdio.h>
void main(){
    double i,j,n;
    double factorial,ans=1.0;
    printf("Enter number: ");
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
        factorial=1;
        for(j=1;j<=i;j++){
            factorial*=j;
        }
    ans+=1.0/factorial;
    }
    printf("The sum of the series is: %lf", ans);
}