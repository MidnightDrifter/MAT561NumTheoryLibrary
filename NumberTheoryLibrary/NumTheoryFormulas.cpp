#include "NumTheoryFormulas.h"




std::vector<std::vector<long>> NumTheoryFormulas::EuclideanAlgorithm(long a, long b)
{
	std::vector<std::vector<long>> output = std::vector<std::vector<long>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD
	
	long bigger = std::max(a, b);
	long smaller = std::min(a, b);

	long quotient = bigger / smaller;
	long remainder = bigger % smaller;
	
	output.push_back(std::vector<long>());
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
	long gcd = 0;
	for (int i = 1; (bigger != 0 && smaller != 0); i++)
	{
		int t = bigger;
		bigger =  smaller;
		smaller = t - quotient*smaller;

		if (smaller != 0)
		{
			quotient = bigger / smaller;
			remainder = bigger % smaller;
		}

		else
		{
			remainder = 0;
			gcd = bigger;
		}
		

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

	//long gcd = (*output.end()).at(0);
	//if (gcd == 0)
	//{
	//	gcd = (*output.end()).at(2);
	//}
	
	long curr[2] = { 1l,0l };
	long next[2] = { 0l,1l };
	long temp[2] = { 0l,0l };
	for (auto i = output.begin(); i!=output.end(); i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];

		next[0] =   curr[0] - (*i).at(1)*next[0];
		next[1] =  curr[1]- (*i).at(1)*next[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}
	
	output.push_back(std::vector<long>());
	output.at(output.size()-1).push_back(std::max(a, b));
	output.at(output.size()-1).push_back(next[0]);
	output.at(output.size()-1).push_back(std::min(a, b));
	output.at(output.size()-1).push_back(next[1]);
	output.at(output.size()-1).push_back(gcd);

//Print output here

	printf("A   Q   B   R   GCD\n");

	for (auto i = output.begin(); i != output.end(); i++)
	{
		if (i != output.end() - 2)
		{
			for (int j = 0; j < 5; j++)
			{
				printf("%li", (*i).at(j));
				printf("%s", "   ");
			}
			printf("\n");
		}
	}
	
	return output;

}


long NumTheoryFormulas::ModExponent(long base, long exp, long mod)
{
	long m = 1;
	long b = base;
	long e = exp;
	
	do
	{
		b %= mod;
		if (e % 2 == 1)
		{
			m *= b;
			m %= mod;
		}
		b *= b;
		e >>= 1;
	} while (e > 0);
	return m;
}

long NumTheoryFormulas::LinearCongruenceSolver(long a, long b, long mod)
{
	long xCoef = a%mod;
	//long myB= b%mod;
	long myMod = mod;

	//Euclidean algorithm, return the coef of b in the final row

	std::vector<std::vector<long>> output = std::vector<std::vector<long>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD

	long bigger = std::max(xCoef, mod);
	long smaller = std::min(xCoef, mod);

	long quotient = bigger / smaller;
	long remainder = bigger % smaller;

	output.push_back(std::vector<long>());
	output.at(0).push_back(bigger);
	output.at(0).push_back(quotient);
	output.at(0).push_back(smaller);
	output.at(0).push_back(remainder);
	output.at(0).push_back(0l);

	if (mod == 0 || xCoef == 0)
	{
		//
		//Find the linear combination such that ax + by = GCD
		//Push back that linear comb. + GCD
		return -1;
	}
	long gcd = 0;
	for (int i = 1; (bigger != 0 && smaller != 0); i++)
	{
		int t = bigger;
		bigger = smaller;
		smaller = t - quotient*smaller;

		if (smaller != 0)
		{
			quotient = bigger / smaller;
			remainder = bigger % smaller;
		}

		else
		{
			remainder = 0;
			gcd = bigger;
		}


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

	//long gcd = (*output.end()).at(0);
	//if (gcd == 0)
	//{
	//	gcd = (*output.end()).at(2);
	//}

	long curr[2] = { 1l,0l };
	long next[2] = { 0l,1l };
	long temp[2] = { 0l,0l };
	for (auto i = output.begin(); i != output.end(); i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];

		next[0] = curr[0] - (*i).at(1)*next[0];
		next[1] = curr[1] - (*i).at(1)*next[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}
	if (b % gcd == 0)
	{
		return next[1];
	}

	else
	{
		//No solutions
		return -1;
	}



}

NumTheoryFormulas::NumTheoryFormulas()
{
}


NumTheoryFormulas::~NumTheoryFormulas()
{
}
