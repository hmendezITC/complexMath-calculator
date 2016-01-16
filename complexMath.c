#include <stdio.h>
#include "complexMath.h"

void setCNumber(struct ComplexNumber *ptr, float real, float img){
	ptr->real = real;
	ptr->img = img;
}

void printCNumber(struct ComplexNumber *ptr){
	printf("\n%1.2f %1.2fj\n", ptr->real, ptr->img);
}
