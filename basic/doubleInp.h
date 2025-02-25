#ifndef DOUBLEINPUT_H  //checks if this macro exists or not if not then goes inside this if yes --> then it igones what's inside this header as it is already defined
#define DOUBLEINPUT_H

#define MAX 100
#define MIN -100
double get_double(char *prompt, double min, double max);

#endif