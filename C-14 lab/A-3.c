#include <stdio.h>
void main(){
    int i,n,odd=0,even=0;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d elements: ",n);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
        even++;
       }else{
        odd++;
       }
    }
    printf("odd numbers = %d and even numbers = %d",odd,even);

}  