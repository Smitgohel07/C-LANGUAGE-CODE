#include <stdio.h>
void main(){
    int i,n,c=0,j;
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
                c++;
            }
        }
    }
    printf("%d",c);
}
