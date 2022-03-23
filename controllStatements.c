#include<stdio.h>

void main(){
    int x;
    int y;

    printf("Input the first value \n");
    scanf("%d",&x);
    printf("Input the second value \n");
    scanf("%d",&y);
    
    //conditional statements
    if(x > y){
        printf("the first value is greater than the second value");
    }else if(x < y){
        printf("the second value is greater than the first value");
    }else{
        printf("the first value is equal to the second value");
    }

    //for loop

    int i;
    for(i = 0; i < x; i++){
      printf("%d \n", i);    
    }

    //while loop
    i = 0;
    while(i < x){
        printf("%d \n", i);
        i++;
    }

    //do while loop
    i = 0;
    do{
        printf("%d \n", i);
        i++;
    }while(i < x);

    //switch case
    int n = 2;
     
    switch(n){
        case 1:
            printf("case 1");
            break;
        case 2:
            printf("case 2");
            break;
        default:
            printf("case none");        
    }
}
