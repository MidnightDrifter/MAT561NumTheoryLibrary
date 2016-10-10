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

	solver.EuclideanAlgorithm(3215, 4761);
	NumTheoryFormulas::SUPERLONG modexp = solver.ModExponent(3546789, 1254865, 13315791);
	NumTheoryFormulas::SUPERLONG modinv = solver.MultInverse(357912486, 147852369) % 147852369;
//	mpz_class base;
//	mpz_class exp; 
//	mpz_class mod;
//	base = 25356575;
//	exp = "123345678987654321";
//	mod = "112233445566778899";

	//answer = solver.ModExponent(base, exp , mod);
	//answer *= 1;
	//if (solver.ModExponent(base, exp, mod) != answer)
	//{
	//	return -1;
	//}
	NumTheoryFormulas::SUPERLONG two = 2;
	NumTheoryFormulas::SUPERLONG equations[4][2] = { {3256,125},{1234,137},{4567,323},{3578,143} };
	NumTheoryFormulas::SUPERLONG bigM = 125 * 137 * 323 * 143;
	NumTheoryFormulas::SUPERLONG crt = solver.CRT(4, equations);
	//Decrypt a msg
	unsigned long long p = 658943;  //prime 1
	unsigned long long q = 357389;  //prime 2
	unsigned long long N = p * q;  //modulus
	unsigned long long e = 2347;  //exponent
	unsigned long long mE = 21511484;  //encrypted msg
	unsigned long long d = solver.MultInverse(e, (p-1) * (q-1));  //mult inv. exponent

	unsigned long long msg = solver.ModExponent(mE, d, N);  //decrypted msg

	//encrypt msg
	//msg is 'HELP' -> 08051216
	//p = 658943, q =357389, e = 2347
	unsigned long long encrypted = solver.ModExponent(8051216, 2347, 658943 * 357389);  //Encrypted msg
	unsigned long long p1 = 658943;
	unsigned long long q1 = 357389;
	unsigned long long N1 = p1*q1;
	unsigned long long e1 = 2347;
	unsigned long long d1 = solver.MultInverse(e1, (p1 - 1)*(q1 - 1));
	unsigned long long decrypted = solver.ModExponent(encrypted, d1, N1);



	if(answer ==0)
	{
		return 1;
	}

	return 0;
}