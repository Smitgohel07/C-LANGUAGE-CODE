#include <stdio.h>
void main(){
    int i=1,base,power,ans=1;
    printf("Enter base and power: ");
    scanf("%d %d",&base,&power);
    for(;i<=power;i++){
        ans=ans*base;
    }
    printf("%d",ans);
}
