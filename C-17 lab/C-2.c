#include <stdio.h>
void main(){
    int n,temp;
    printf("Enter array of a size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter elements: ");
        scanf("%d",&a[i]);
    }
    int *ptr = a;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(*(ptr+i) > *(ptr+j)){
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }  
    for(int i=0; i<n; i++){
        printf("%d ",*(ptr+i));
    }
}