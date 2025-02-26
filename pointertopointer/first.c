#include<stdio.h>
#include <string.h>


int main(){
    char a[] = {'g','h','i','a','b','r','t','o','p'};
    char *p = a;
    char* *poi = &p;
    printf("%p", poi);
    char (*q)[9] = &a;
    for(int i = 0; i < strlen(a); i++){
        printf("%c ", *(*q + i));
    } 
    printf("\n");

    return 0;
}