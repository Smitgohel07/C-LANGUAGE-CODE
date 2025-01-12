#include <stdio.h>
void swaparray(int array1[],int array2[],int n);
void main(){
    int temp,i,n;
    printf("Enter size of a array: ");
    scanf("%d",&n);
    int array1[n];
    int array2[n];
    for(i=0;i<n;i++){
        printf("Enter elements of array 1: ");
        scanf("%d",&array1[i]);
    }

    for(i=0;i<n;i++){
        printf("Enter elements of array 2: ");
        scanf("%d",&array2[i]);
    }
    swaparray(array1,array2,n);
}
void swaparray(int array1[],int array2[],int n){
    int i,temp;
    for(i=0;i<n;i++){
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }
    for(i=0;i<n;i++){
        printf("array 1: %d\n",array1[i]);
    }
    for(i=0;i<n;i++){
        printf("array 2: %d\n",array2[i]);
    }
}