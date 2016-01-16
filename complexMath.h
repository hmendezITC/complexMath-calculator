#include <stdio.h>
#ifndef COMPLEX_MATH
#define COMPLEX_MATH


//Complex number structure
struct ComplexNumber{
	float real;			//Real part
	float img;			//Imaginary part
};

//Adds two complex numbers of type ComplexNumber
//Returns a ComplexNumber pointer

void setCNumber(struct ComplexNumber *ptr, float real, float img);
void printCNumber(struct ComplexNumber *ptr);

#endif
