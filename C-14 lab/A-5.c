#include <stdio.h>
void main(){
    int i=0,height,weight,count=0;
    int a[5],b[5];
    for(i=0;i<5;i++){
     printf("Enter person  height and weight: ");
     scanf("%d %d",&height,&weight);
     a[i]=height;
     b[i]=weight;
    }
    for(i=0;i<5;i++){
        if(a[i]>170 && b[i]<50){
            count++;
        }
    }
    printf("%d",count);
}
