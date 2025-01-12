#include <stdio.h>
void main(){
    int i,n,count=0;
    float average,sum=0;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];  
    }
    average = sum/n;
    for(i=0;i<n;i++) {
        if(a[i]>average) {
            count++;
        }
    }
     printf("The average is: %.2f\n", average);
    printf("Count of numbers greater than the average: %d", count);
}
