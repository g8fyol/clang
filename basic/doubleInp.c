#include "stdio.h"


double get_double(char *prompt, double min, double max){
    double input; 
    do{
        printf("%s", prompt);
        scanf("%lf", &input);
        if(input < min) printf("input should be atleast %lf \n", min);
        if(input > max) printf("input should be atmost %lf \n", max);
    }while(input < min || input > max);
    return input;
}