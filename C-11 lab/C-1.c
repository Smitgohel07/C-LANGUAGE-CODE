#include <stdio.h>
#include <math.h>
void main() {
    int n, first, last, count = 0, temp1, temp2, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    last = n % 10;
    temp1 = n;
    while (temp1 > 0){
        count++;
        temp1 = temp1 / 10;
    }

    temp2 = n;
    while (temp2 >= 10){
        temp2 = temp2 / 10;
    }
    first = temp2;

    n = n - first * (int)pow(10, count - 1);
    n = n / 10;  

    n = last * (int)pow(10, count - 1) + n * 10 + first;

    printf("The number after swapping first and last digits is: %d\n", n);
}
