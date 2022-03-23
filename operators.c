#include<stdio.h>
#include<stdbool.h>

void main(){
    int x = 10;
    int y = 20;
    bool t = true;
    bool f = false;

    //Aritmetic operators
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);

    //Relational operators
    printf("x > y = %d\n", x > y);
    printf("x < y = %d\n", x < y);
    printf("x == y = %d\n", x == y);
    printf("x <= y = %d\n", x <= y);
    printf("x >= y = %d\n", x <= y);

    //Logical operators
    printf("t && f = %d \n", t && f);
    printf("t || f = %d \n", t || f);
    printf("t && t = %d \n", t  && t);
    printf("t || t = %d \n", t && t);
    printf("f && f = %d \n", f  && f);
    printf("f || f = %d \n", f || f);
}