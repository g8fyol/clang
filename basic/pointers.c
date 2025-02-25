#include "stdio.h"


int main(){
    int a = 78;
    int *pointer = &a;
    printf("%p is location of %d\n",pointer, *pointer);
}