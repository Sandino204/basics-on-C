#include<stdio.h>

int sum(int a, int b) { 
    return a + b;
}

int mult(int x, int y) {
    return x * y;
}

void values(int a, int b){
    printf("the two values that sum and multiplicate are %d and %d \n", a, b);
}

void main(){
    printf("%d \n", sum(5, 10));
    printf("%d \n", mult(5, 10));
    values(5, 10);
}