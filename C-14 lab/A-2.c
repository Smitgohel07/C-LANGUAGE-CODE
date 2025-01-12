#include <stdio.h>
void main(){
    int i,n,positive=0,negative=0;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]>=0){
        positive++;
       }else{
        negative++;
       }
    }
    printf("positive number= %d and negative number= %d",positive,negative);
}    