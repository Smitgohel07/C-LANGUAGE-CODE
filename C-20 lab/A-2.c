#include <stdio.h>
void main() {
    char str[100];
    char str2[100];
    int j = 0;
    char *ptr = str;

    printf("Enter the string: ");
    scanf("%[^\n]",str);  

    while (*ptr != '\0') {
        if ((*ptr != ' ') && ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= '0' && *ptr <= '9'))) {
            str2[j] = *ptr;  
            j++;  
        }
        ptr++;  
    }

    str2[j] = '\0';  
    printf("Processed string: %s", str2);
}
