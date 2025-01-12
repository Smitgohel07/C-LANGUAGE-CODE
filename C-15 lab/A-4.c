#include <stdio.h>
void main(){
    int i,n,elements;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printf("search element: ");
    scanf("%d",&elements);
    for(i=0;i<n;i++){
        if(elements==a[i]){
            printf("Element found at index: %d\n",i);
        }
    }
}