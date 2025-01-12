#include <stdio.h>
#include <string.h>
struct Book{
    char title[50];
    char author[50];
    char publication[50];
    float price; 
};
int main(){
    struct Book b[3];
    for(int i=0; i<3; i++){
        printf("Enter Book title: ");
        gets(b[i].title);
        // scanf(" %[^\n]", books[i].title);
        printf("Enter Book author name: ");
        gets(b[i].author);
        printf("Enter Book publication name: ");
        gets(b[i].publication);
        printf("Enter Book price: ");
        scanf("%f",&b[i].price);
    }

    for(int i=0; i<3; i++){
        printf("%s\n",b[i].title);
        printf("%s\n",b[i].author);
        printf("%s\n",b[i].publication);
        printf("%f",b[i].price);
    }
    return 0;
}