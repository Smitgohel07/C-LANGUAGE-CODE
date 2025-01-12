/*#include <stdio.h>
void main(){
    int i=1,count=1,s,sum=0;
    while(count<=10){
        s=i*i;
        if(s%10==3){
            printf("%d",s);

        }sum+=i;
        i++;
        count++;
    }
     printf("%d",sum);
}
*/
#include <stdio.h>
void main(){
    int n,i=1,sum=0,squ,count=0;
    float avg; 
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=n){
        squ=i*i;
        if(squ % 10 == 3){  
            sum += squ;    
            count++;     
        }
        i++;
    }
    if(count > 0){
        avg = (float)sum / count;
        printf("Average is: %.2f\n", avg); 
    }else{
        printf("No numbers satisfy the condition.\n"); 
    }
}