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

	//mpz_class answer = 52;
	int answer = 1;
	NumTheoryFormulas solver = NumTheoryFormulas();

	mpz_class base;
	mpz_class exp; 
	mpz_class mod;
	base = 25356575;
	exp = "123345678987654321";
	mod = "112233445566778899";

	//answer = solver.ModExponent(base, exp , mod);
	//answer *= 1;
	if (solver.ModExponent(base, exp, mod) != answer)
	{
	//	return -1;
	}

	if(answer ==0)
	{
		return 1;
	}

	return 0;
}