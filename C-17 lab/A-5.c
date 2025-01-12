#include <stdio.h>
void main(){
    int i,n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *ptr = a;
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    } 
}