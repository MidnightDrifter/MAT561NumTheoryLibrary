#include "NumTheoryFormulas.h"
#include <math.h>
#include <gmp.h>

NumTheoryFormulas;
int main(int argc, char *argv[])
{
	long x = 349993;
	long y = 380247;
	// Class  #s :  349993, 380247
	//NumTheoryFormulas::EuclideanAlgorithm(x, y);

	int answer = 52;
	NumTheoryFormulas solver = NumTheoryFormulas();
	answer = solver.ModExponent(25356575, 12345678987654321, 112233445566778899);
	answer *= 1;
	//if (NumTheoryFormulas::ModExponent(25356575l,12345678987654321l, 112233445566778899l) != answer)
	{
	//	return -1;
	}

	return 0;
}