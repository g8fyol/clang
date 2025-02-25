#include <stdio.h>
#include "doubleInp.h"


int main(){
    double price, tip;
    printf("enter price meal :: ");
    price = get_double("enter price mean :: ", MIN, MAX);

    printf("enter the tip amount (in percentage)");
    tip = get_double("enter the tip amount :: ", MIN, MAX);

    double tipAmt = price * tip / 100.0;
    double total = price + tipAmt;
    printf("total tips :: %5.3lf\n ", tipAmt);
    printf("total amount :: %5.3lf\n", total);
    return 0;
}