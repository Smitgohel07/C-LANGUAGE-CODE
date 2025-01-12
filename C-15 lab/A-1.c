#include <stdio.h>
void main(){
    int i,n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
        printf("copy elements from array one :%d\n",b[i]);
    }
}