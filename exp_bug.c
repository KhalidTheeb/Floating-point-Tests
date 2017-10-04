/*
Taken from:
Kong, Soonho, Sicun Gao, and Edmund M. Clarke. 
Floating-point Bugs in Embedded GNU C Library. 
No. CMU-CS-13-130. CARNEGIE-MELLON UNIV PITTSBURGH PA SCHOOL OF COMPUTER SCIENCE, 2013.
*/

//The result should be in the range between -1 and 1
//$ gcc exp_bug.c -lm && ./a.out

#include <math.h>
#include <fenv.h>
#include <stdio.h>

int main() {
 double x = -2.437592;
 fesetround(FE_UPWARD);
 printf("sin(%f)=%f\n", x, sin(x));
 return 0;
}
