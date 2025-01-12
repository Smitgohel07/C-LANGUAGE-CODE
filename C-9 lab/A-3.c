#include <stdio.h>
void main(){
    int i=1,base,power,ans=1;
    printf("Enter base and power: ");
    scanf("%d %d",&base,&power);
    while(i<=power){
        ans=ans*base;
        i++;
    }
    printf("%d",ans);
}
