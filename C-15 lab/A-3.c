#include <stdio.h>
void main(){
    int i,n,count=0;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            count++;
        }
    }
    printf("%d",count);

}
