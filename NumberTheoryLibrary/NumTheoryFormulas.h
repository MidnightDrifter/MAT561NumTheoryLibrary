#pragma once
#include <vector>
#include <algorithm>
#include <InfInt.h>
//#include <experimental>
//#include <bigInt.h>
class NumTheoryFormulas
{
public:

	typedef InfInt SUPERLONG;   //unsigned long long SUPERLONG;
	//typedef unsigned long long BIG;								   //typedef BigInt::DEC_DIGIT DECIMAL;
	//typedef long long SIGNEDBIG;
	typedef  std::pair<SUPERLONG, bool> FAILPAIR;
	NumTheoryFormulas();
	~NumTheoryFormulas();

	 std::vector<std::vector<SUPERLONG>> EuclideanAlgorithm(SUPERLONG a, SUPERLONG b);
	//static
		SUPERLONG ModExponent(SUPERLONG base, SUPERLONG exp, SUPERLONG mod);
		FAILPAIR MultInverse(SUPERLONG a, SUPERLONG mod);
	 FAILPAIR CRT(int numEquations, SUPERLONG equations[][2]);

	 SUPERLONG GCD(SUPERLONG a, SUPERLONG b);

	// SUPERLONG buildFromString(const char* c) { return SUPERLONG(std::string(c), BigInt::DEC_DIGIT); }

	 SUPERLONG encrypt(SUPERLONG msg, SUPERLONG exp, SUPERLONG p, SUPERLONG q) { return ModExponent(msg, exp, p*q); }
	 FAILPAIR decrypt(SUPERLONG msg, SUPERLONG exp, SUPERLONG p, SUPERLONG q); 

	//SUPERLONG encrypt(const char* msg, BIG exp, BIG p, BIG q) { return encrypt(SUPERLONG(msg), SUPERLONG(exp), SUPERLONG(p), SUPERLONG(q)); }
	// FAILPAIR decrypt(const char* msg, BIG exp, BIG p, BIG q) { return decrypt(SUPERLONG(msg), SUPERLONG(exp), SUPERLONG(p), SUPERLONG(q)); }



	// SUPERLONG ModExponent(BIG base, BIG exp, BIG mod) { return ModExponent(SUPERLONG(base), SUPERLONG(exp), SUPERLONG(mod)); }
	// FAILPAIR MultInverse(BIG a, BIG b) { return MultInverse(SUPERLONG(a), SUPERLONG(b)); }
	//// SUPERLONG CRT()
	// SUPERLONG GCD(BIG a, BIG b) {return GCD(SUPERLONG(a), SUPERLONG(b)); }
	//  

	//Actually just get the multinv(a,n) -> return x such that ax = 1 mod n

	//Next program:  CRT--assume all coef of x are 1

	//Redo ModExponent--params aren't being passed?

};

