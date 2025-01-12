#include <stdio.h>
void main(){
    int i,n,j;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=0;
            } 
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}