#include<stdio.h> 

void main(){
    int a = 10; 
    int *p = &a;

    printf("\n address of a is %p", &a);
    printf("\n address of pointer variable p is %p", p);
    printf("\n value of a using pointer *p is %d \n", *p);
}