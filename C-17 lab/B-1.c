#include <stdio.h>
void main(){
    int i,n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter %d elements: ",n);
        scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++){
        int *ptr = &a[i];
        int *pptr = &b[i];
        *pptr = *ptr;
        printf("copy elements from array one :%d\n",*pptr);
    }
}