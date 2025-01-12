#include <stdio.h>    /// 1,2,4,5,7,8,10, Missing numbers are 3,6,9
void main(){
    int i,n,j,sum=0; 
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d number: ",n);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
     for(j=a[i]+1;j<a[i+1];j++){
        if(j!=a[i+1]){
            printf("%d ",j);
        }
        else{
            break;
        }
     }
    } 
}