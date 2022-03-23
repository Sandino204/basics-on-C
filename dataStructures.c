#include<stdio.h>

struct student {
    int no;
    float gpa;
};

void main(){
    struct student s1;

    s1.no = 0;
    s1.gpa = 5.3;

    printf("no = %d\ngpa = %f,\n", s1.no, s1.gpa);
}