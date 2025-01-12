#include <stdio.h>
void main(){
    int a=0,b=1,ans,n,count;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    for(count=1;count<n;count++){
        ans=a+b;
        printf(",%d",ans);
        a=b;
        b=ans;
    }
}