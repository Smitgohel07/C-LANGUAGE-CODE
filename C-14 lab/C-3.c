#include <stdio.h>
void main(){
    int i,n,c=0,j;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d numbers: ",n);
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
        printf("ascending order: %d\n",a[i]);
    }  
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("\nduplicate number is: %d\n",a[i]);
                a[j]=0;
            }  
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }  
} 