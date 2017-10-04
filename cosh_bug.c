/*
Taken from:
Kong, Soonho, Sicun Gao, and Edmund M. Clarke. 
Floating-point Bugs in Embedded GNU C Library. 
No. CMU-CS-13-130. CARNEGIE-MELLON UNIV PITTSBURGH PA SCHOOL OF COMPUTER SCIENCE, 2013.
*/

//$ gcc cosh_bug.c -lm && ./a.out

#include <math.h>
#include <fenv.h>
#include <stdio.h>

int main() {
 double x = 3.113408;
 fesetround(FE_UPWARD);
 printf("cosh(%f) = %f\n", x, cosh(x));
 return 0;
}
