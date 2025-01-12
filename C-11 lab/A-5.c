#include <stdio.h>
void main(){
    int i=1,n,ans=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(;i<=n;i++){
        ans*=i;
        if(i<n){
            printf("%d x ",i);
        }else{
            printf("%d",i);
        }
    }
    printf(" = %d",ans);
}
