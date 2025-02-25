#include "stdio.h"

int sumArray(int[], int);
void doubleArray(int[], int);
void printArray(int[], int);

int main(){
    int a[] = {24,53,63,6,35,6,3,6,6,3,};
    int length = sizeof(a)/sizeof(a[0]);
    int sum =  sumArray(a, length);
    printf("sum of all elements is %d \n", sum);
    doubleArray(a,length);
    printArray(a,length);
    return 0;
}

void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        printf("%d, ", *(a+1));
    }
    printf("\n");
}

int sumArray(int a[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum;
}

void doubleArray(int a[], int size){
    for(int i = 0; i < size; i++){
        *(a+i) = a[i];
    }
}