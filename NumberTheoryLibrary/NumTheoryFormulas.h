#pragma once
#include <vector>
#include <algorithm>
class NumTheoryFormulas
{
public:
	NumTheoryFormulas();
	~NumTheoryFormulas();

	static std::vector<std::vector<long>> EuclideanAlgorithm(long a, long b);
};

