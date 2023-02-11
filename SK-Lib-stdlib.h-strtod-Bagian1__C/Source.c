#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char szOrbits[] = "365.24 29.53";
	char* pEnd;
	double d1, d2;

	d1 = strtod(szOrbits, &pEnd);
	d2 = strtod(pEnd, NULL);
	
	printf("The moon completes %.2f orbits per Earth year.\n", d1 / d2);
	
	_getch();
	return 0;
}