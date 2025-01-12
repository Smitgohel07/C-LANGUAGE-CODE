#include <stdio.h>
void main(){
    int a,b;
    printf("Swap two number: ");
    scanf("%d %d",&a,&b);//not using temporary variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    
   scanf("%d %d",&a,&b);//using temporary variable
   a=a^b;
   b=a^b;
   a=a^b;
   printf("%d %d",a,b);
}
