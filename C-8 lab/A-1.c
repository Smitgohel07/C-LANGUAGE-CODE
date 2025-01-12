/*#include <stdio.h>
void main(){
    int i=1,n;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i+=1;
    }
}
*/
#include <stdio.h>
void main(){
    int i=1,n;
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}
