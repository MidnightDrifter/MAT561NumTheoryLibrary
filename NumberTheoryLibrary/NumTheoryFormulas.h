#pragma once
#include <vector>
#include <algorithm>
#include <gmp.h>
#include <gmp-mparam.h>
class NumTheoryFormulas
{
public:
	NumTheoryFormulas();
	~NumTheoryFormulas();

	static std::vector<std::vector<long>> EuclideanAlgorithm(long a, long b);
	static long ModExponent(long base, long exp, long mod);

};

