#include <stdio.h>
void main(){
    int n,sum=0,ans=0,i=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n!=0){
        int rem1=n%2;
        sum=sum*10+rem1;
        n=n/2;
        i++;
    }
    int j=0;
    while(j<i){
        if(sum==0){
            printf("0");
        }else{
            int rem2=sum%10;
            printf("%d",rem2);
            sum=sum/10;
        }
        j++;
    }
}
// #include <stdio.h>
// void main(){
//     int n,reminder,binary=0,nextdigit=1;
//     printf("Enter a decimal number: ");
//     scanf("%d", &n);
//     while(n!=0){
//         reminder=n%2;
//         binary=binary+reminder*nextdigit;
//         n=n/2; 
//         nextdigit=nextdigit*10;
//     }
//     printf("Binary: %d\n", binary);
// }
