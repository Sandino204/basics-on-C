#include<stdio.h>

void main(){
    //static initialization
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int i = 0;
    for(i = 0; i < 10; i++){
        printf("%d \n", a[i]);
    }
    //Dinamic initialization
     int b[3];
    for(i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 3; i++){
        printf("%d \n", a[i]);
    }
}