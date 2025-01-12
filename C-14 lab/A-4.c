#include <stdio.h>
void main(){
    int size,i;
    printf("Enter a size for array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter a value for a[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int max=arr[0],min=arr[0];
     for(i=1;i<size;i++){
        max=max>arr[i]?max:arr[i];
        min=min<arr[i]?min:arr[i];
    }
    int sum=0;
    float avg=0;
    for(i=0;i<size;i++){
       sum=sum+arr[i];
    }
    avg=(float)sum/size;
    printf("max= %d, min= %d, sum=%d, avg=%.2f",max,min,sum,avg);
}