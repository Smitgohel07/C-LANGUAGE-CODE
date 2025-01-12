#include <stdio.h>
void main(){
    int i,n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int second_max = a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            if(a[i]>max){
                second_max = a[i];
            }
        }
    }
    printf("Max element:%d and SecondMax element: %d",max,second_max);
}