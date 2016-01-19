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

void getCNumbersOp(struct ComplexNumber *n1, struct ComplexNumber *n2, char *operator, char *argv[]);
void setCNumber(struct ComplexNumber *ptr, float real, float img);
void printCNumber(struct ComplexNumber *ptr);
void printOperation(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);

int doCNumbersOp(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2, char operator);
void addCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);
void subCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);
void mulCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);
void divCNumbers(struct ComplexNumber *result, struct ComplexNumber *number1, struct ComplexNumber *number2);

#endif
