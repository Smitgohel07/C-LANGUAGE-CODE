#include <stdio.h>
void main(){
    int i,n,temp;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < n / 2; i++) {
        temp = a[i];               
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }    
}