#pragma once
#include <vector>
#include <algorithm>
//#include <experimental>
#include <gmp.h>

class NumTheoryFormulas
{
public:
	NumTheoryFormulas();
	~NumTheoryFormulas();

	static std::vector<std::vector<long long>> EuclideanAlgorithm(long long a, long long b);
	//static
		long long ModExponent(long long base, long long exp, long long mod);
	static long long LinearCongruenceSolver(long long a, long long b, long long mod);
	//Actually just get the multinv(a,n) -> return x such that ax = 1 mod n

	//Next program:  CRT--assume all coef of x are 1

	//Redo ModExponent--params aren't being passed?

};

