#pragma once
#include <vector>
#include <algorithm>
//#include <experimental>
#include <bigInt.h>
class NumTheoryFormulas
{
public:
	typedef BigInt::Rossi SUPERLONG;   //unsigned long long SUPERLONG;  
	NumTheoryFormulas();
	~NumTheoryFormulas();

	 std::vector<std::vector<SUPERLONG>> EuclideanAlgorithm(SUPERLONG a, SUPERLONG b);
	//static
		SUPERLONG ModExponent(SUPERLONG base, SUPERLONG exp, SUPERLONG mod);
	 SUPERLONG MultInverse(SUPERLONG a, SUPERLONG mod);
	 SUPERLONG CRT(int numEquations, SUPERLONG** equations);

	 SUPERLONG GCD(SUPERLONG a, SUPERLONG b);

	//Actually just get the multinv(a,n) -> return x such that ax = 1 mod n

	//Next program:  CRT--assume all coef of x are 1

	//Redo ModExponent--params aren't being passed?

};

