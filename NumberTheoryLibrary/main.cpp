#include "NumTheoryFormulas.h"
#include <math.h>
#include <gmp.h>

NumTheoryFormulas;
int main(int argc, char *argv[])
{
	NumTheoryFormulas::SUPERLONG NegativeOne(-1);
	long x = 349993;
	long y = 380247;
	// Class  #s :  349993, 380247
	//NumTheoryFormulas::EuclideanAlgorithm(x, y);

	//mpz_class answer = 52;
	int answer = 1;
	NumTheoryFormulas solver = NumTheoryFormulas();

	solver.EuclideanAlgorithm(NumTheoryFormulas::SUPERLONG(3215), NumTheoryFormulas::SUPERLONG(4761));
	NumTheoryFormulas::SUPERLONG modexp = solver.ModExponent(NumTheoryFormulas::SUPERLONG(3546789), NumTheoryFormulas::SUPERLONG(1254865), NumTheoryFormulas::SUPERLONG(13315791));
	NumTheoryFormulas::SUPERLONG modinv = solver.MultInverse(NumTheoryFormulas::SUPERLONG(357912486), NumTheoryFormulas::SUPERLONG(147852369)) % NumTheoryFormulas::SUPERLONG(147852369);
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
	NumTheoryFormulas::SUPERLONG two = NumTheoryFormulas::SUPERLONG(2);
	NumTheoryFormulas::SUPERLONG equations[4][2] = { {NumTheoryFormulas::SUPERLONG(3256),NumTheoryFormulas::SUPERLONG(125)},{ NumTheoryFormulas::SUPERLONG(1234),NumTheoryFormulas::SUPERLONG(137)},{ NumTheoryFormulas::SUPERLONG(4567),NumTheoryFormulas::SUPERLONG(323)},{ NumTheoryFormulas::SUPERLONG(3578),NumTheoryFormulas::SUPERLONG(143)} };
	NumTheoryFormulas::SUPERLONG bigM(125 * 137 * 323 * 143);// = 125 * 137 * 323 * 143;
	NumTheoryFormulas::SUPERLONG crt = solver.CRT(4, equations);
	//Decrypt a msg
	NumTheoryFormulas::SUPERLONG p(678943);// = 658943;  //prime 1
	NumTheoryFormulas::SUPERLONG q(357389);// = 357389;  //prime 2
	NumTheoryFormulas::SUPERLONG N = p * q;  //modulus
	NumTheoryFormulas::SUPERLONG e(2347);// = 2347;  //exponent
	NumTheoryFormulas::SUPERLONG mE(21511484); = 21511484;  //encrypted msg
	NumTheoryFormulas::SUPERLONG d = solver.MultInverse(e, (p+NegativeOne) * (q+NegativeOne));  //mult inv. exponent

	NumTheoryFormulas::SUPERLONG msg = solver.ModExponent(mE, d, N);  //decrypted msg

	//encrypt msg
	//msg is 'HELP' -> 08051216
	//p = 658943, q =357389, e = 2347
	NumTheoryFormulas::SUPERLONG encrypted = solver.ModExponent(NumTheoryFormulas::SUPERLONG(8051216), NumTheoryFormulas::SUPERLONG(2347), NumTheoryFormulas::SUPERLONG(658943 * 357389));  //Encrypted msg
	NumTheoryFormulas::SUPERLONG p1(658943);// = 658943;
	NumTheoryFormulas::SUPERLONG q1(357839);// = 357389;
	NumTheoryFormulas::SUPERLONG N1 = p1*q1;
	NumTheoryFormulas::SUPERLONG e1(2347);// = 2347;
	NumTheoryFormulas::SUPERLONG d1 = solver.MultInverse(e1, (p1 - 1ull)*(q1 - 1ull));
	NumTheoryFormulas::SUPERLONG decrypted = solver.ModExponent(encrypted, d1, N1);



	if(answer ==0)
	{
		return 1;
	}

	return 0;
}