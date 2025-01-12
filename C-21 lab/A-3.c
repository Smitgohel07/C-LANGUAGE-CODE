#include <stdio.h>
#include <string.h>
struct S {
  int number;
  float price;
  char name[20];
};

union U {
  int n;
  float p;
  char na[20];
};

void main() {
  struct S s1;
  s1.number = 1;
  s1.price = 10;
  strcpy(s1.name, "name");

  printf("Structure values:\n");
  printf("Number: %d\n", s1.number);
  printf("Price: %.2f\n", s1.price);
  printf("Name: %s\n", s1.name);

  union U u1;
  u1.n = 4;
  printf("Union (n): %d\n", u1.n); 
  u1.p = 40.0;
  printf("Union (p): %.2f\n", u1.p);  
  strcpy(u1.na, "na");
  printf("Union (na): %s\n", u1.na);  
  
}

