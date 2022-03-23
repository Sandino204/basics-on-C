#include<stdio.h>
#include<string.h>

void main(){
    char s[25];
    char s2[25];

    printf("Enter 2 strings\n");
    gets(s);
    gets(s2);

    printf("the concatenation of the two strings are %s", strcat(s, s2));
}
