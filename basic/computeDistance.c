#include "stdio.h"
#include "math.h"  //this header files contain just prototype of various functions not the function itself
// we need to link libm.so (shared object) to include those definitions
#include "doubleInp.h"
// double get_double(char *prompt, int min, int max);

int main(){
    double x = get_double("enter the x value :: ", MIN, MAX);
    double y = get_double("enter Y value :: ", MIN, MAX);
    double length = sqrt(pow(x, 2) + pow(y, 2));

    printf("the length of line is : %lf \n", length);
    
}