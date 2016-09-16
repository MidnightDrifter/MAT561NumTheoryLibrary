#include "NumTheoryFormulas.h"




std::vector<std::vector<long>> EuclideanAlgorithm(long a, long b)
{
	std::vector<std::vector<long>> output = std::vector<std::vector<long>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD
	
	long bigger = std::max(a, b);
	long smaller = std::min(a, b);

	long quotient = bigger / smaller;
	long remainder = bigger % smaller;
	
	//output.push_back(std::vector<long>());
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
		bigger =  smaller;
		smaller = t - quotient*smaller;
		quotient = bigger / smaller;
		remainder = bigger % smaller;

		output.push_back(std::vector<long>());
		output.at(i).push_back(bigger);
		output.at(i).push_back(quotient);
		output.at(i).push_back(smaller);
		output.at(i).push_back(remainder);
		output.at(i).push_back(0l);



	}

	//If we get here, either bigger OR smaller = 0, GCD is the greater of the two
	//Find the linear combination such that ax + by = GCD via looping waaaaay back through the matrix somehow, gonna be ugly af
	//Push back that linear comb. + GCD

	long gcd = (*output.end()).at(0);
	if (gcd == 0)
	{
		gcd = (*output.end()).at(2);
	}
	
	long curr[2] = { 1l,0l };
	long next[2] = { 0l,1l };
	long temp[2] = { 0l,0l };
	for (auto i = output.begin(); (*i).at(3) !=0; i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];

		next[0] -= (*i).at(1) * curr[0];
		next[1] -= (*i).at(1) * curr[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}
	
	output.push_back(std::vector<long>());
	output.at(output.size()).push_back(std::max(a, b));
	output.at(output.size()).push_back(next[0]);
	output.at(output.size()).push_back(std::min(a, b));
	output.at(output.size()).push_back(next[1]);
	output.at(output.size()).push_back(gcd);


	return output;

}

NumTheoryFormulas::NumTheoryFormulas()
{
}


NumTheoryFormulas::~NumTheoryFormulas()
{
}
