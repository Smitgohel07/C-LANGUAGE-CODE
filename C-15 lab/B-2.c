#include <stdio.h>
void main(){
    int i,n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d numbers: ",n);
        scanf("%d",&a[i]);
    }///a[0]=1  a[1]=2  a[3]=4   
     ///a[0]=4  a[1]=2  a[3]=1  
    for(i=0;i<n/2;i++){
        int temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}