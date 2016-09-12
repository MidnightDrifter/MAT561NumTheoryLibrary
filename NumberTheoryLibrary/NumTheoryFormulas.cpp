#include "NumTheoryFormulas.h"

std::vector<std::vector<long>> EuclideanAlgorithm(long a, long b)
{
	std::vector<std::vector<long>> output = std::vector<std::vector<long>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD
	
	long bigger = std::max(a, b);
	long smaller = std::min(a, b);

	long quotient = bigger / smaller;
	long remainder = bigger % smaller;
	
	output.at(0).push_back(bigger);
	output.at(0).push_back(quotient);
	output.at(0).push_back(smaller);
	output.at(0).push_back(remainder);
	output.at(0).push_back(0l);

	if (a == 0 || b == 0)
	{
		//
		//Find the linear combination such that ax + by = GCD
		//Push back that linear comb. + GCD
		return output;
	}

	for (int i = 1; (bigger != 0 && smaller != 0); i++)
	{
		int t = bigger;
		bigger = std::max(t - quotient*smaller, smaller);
		smaller = std::min(t - quotient*smaller, smaller);
		quotient = bigger / smaller;
		remainder = bigger % smaller;


		output.at(i).push_back(bigger);
		output.at(i).push_back(quotient);
		output.at(i).push_back(smaller);
		output.at(i).push_back(remainder);
		output.at(i).push_back(0l);



	}

	//If we get here, either bigger OR smaller = 0
	//Find the linear combination such that ax + by = GCD via looping waaaaay back through the matrix somehow, gonna be ugly af
	//Push back that linear comb. + GCD
	return output;

}

NumTheoryFormulas::NumTheoryFormulas()
{
}


NumTheoryFormulas::~NumTheoryFormulas()
{
}
