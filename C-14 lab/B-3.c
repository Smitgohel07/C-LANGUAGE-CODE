#include <stdio.h>
void main(){
    int i,n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d index: ",i);
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }    
}
