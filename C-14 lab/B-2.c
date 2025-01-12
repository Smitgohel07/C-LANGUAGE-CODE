#include <stdio.h>
#include <math.h>
void main(){
    int i,n;
    float product=1,sum=0,ans=0;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];  
        product *= a[i];
        ans = ans+ (1.0/ a[i]);
    }
    float harmonic_mean = n / (ans);
    float avg = sum / n;
    float geometric_mean = pow(product, 1.0/n);
    printf("Arithmetic Mean: %.2f\n", avg);
    printf("Geometric Mean: %.2f\n", geometric_mean);
    printf("Harmonic Mean: %f",harmonic_mean);
}