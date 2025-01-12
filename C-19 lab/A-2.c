#include <stdio.h>
void array(int a[],int n);
void main(){
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter elements: ");
        scanf("%d",&a[i]);
    }
    array(a,n);
}
void array(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}