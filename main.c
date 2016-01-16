#include <stdio.h>
#include "complexMath.h"

int main (int argc, char *argv[]){
	printf("Complex Numbers Calculator\n");
	
	struct ComplexNumber number1;

	setCNumber(&number1, 1, 2);
	printCNumber(&number1);

	return 0;
}
