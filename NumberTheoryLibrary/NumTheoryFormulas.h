#pragma once
#include <vector>
#include <algorithm>
#include <experimental/
class NumTheoryFormulas
{
public:
	NumTheoryFormulas();
	~NumTheoryFormulas();

	static std::vector<std::vector<long>> EuclideanAlgorithm(long a, long b);
	static long ModExponent(long base, long exp, long mod);
	static long LinearCongruenceSolver(long a, long b, long mod);

};

