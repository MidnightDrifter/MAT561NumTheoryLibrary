#include "NumTheoryFormulas.h"
static const BigInt::Rossi RossiZero(0);
static const BigInt::Rossi RossiOne(1); 
static const BigInt::Rossi RossiTwo(2);
static const BigInt::Rossi RossiNegOne(-1);



std::vector<std::vector<NumTheoryFormulas::SUPERLONG>> NumTheoryFormulas::EuclideanAlgorithm(SUPERLONG a, SUPERLONG b)
{
	std::vector<std::vector<SUPERLONG>> output = std::vector<std::vector<SUPERLONG>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD
	
	SUPERLONG bigger = std::max(a, b);
	SUPERLONG smaller = std::min(a, b);

	SUPERLONG quotient = bigger / smaller;
	SUPERLONG remainder = bigger % smaller;
	
	output.push_back(std::vector<SUPERLONG>());
	output.at(0).push_back(bigger);
	output.at(0).push_back(quotient);
	output.at(0).push_back(smaller);
	output.at(0).push_back(remainder);
	output.at(0).push_back(RossiZero);

	if (a == RossiZero || b == RossiZero)
	{
		//
		//Find the linear combination such that ax + by = GCD
		//Push back that linear comb. + GCD
		return output;
	}
	SUPERLONG gcd = RossiZero;
	for (int i = 1; (bigger != RossiZero && smaller != RossiZero); i++)
	{
		SUPERLONG t = bigger;
		bigger =  smaller;
		smaller = t - quotient*smaller;

		if (smaller != RossiZero)
		{
			quotient = bigger / smaller;
			remainder = bigger % smaller;
		}

		else
		{
			remainder = RossiZero;
			gcd = bigger;
		}
		

		output.push_back(std::vector<SUPERLONG>());
		output.at(i).push_back(bigger);
		output.at(i).push_back(quotient);
		output.at(i).push_back(smaller);
		output.at(i).push_back(remainder);
		output.at(i).push_back(RossiZero);



	}

	//If we get here, either bigger OR smaller = RossiZero, GCD is the greater of the two
	//Find the linear combination such that ax + by = GCD via looping waaaaay back through the matrix somehow, gonna be ugly af
	//Push back that linear comb. + GCD

	//long gcd = (*output.end()).at(RossiZero);
	//if (gcd == RossiZero)
	//{
	//	gcd = (*output.end()).at(2);
	//}
	
	SUPERLONG curr[2] = { RossiOne,RossiZero };
	SUPERLONG next[2] = { RossiZero,RossiOne };
	SUPERLONG temp[2] = { RossiZero,RossiZero };
	for (auto i = output.begin(); i!=output.end(); i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];

		next[0] =   curr[0] - (*i).at(1)*next[0];
		next[1] =  curr[1]- (*i).at(1)*next[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}
	
	output.push_back(std::vector<SUPERLONG>());
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


NumTheoryFormulas::SUPERLONG NumTheoryFormulas::ModExponent(SUPERLONG base, SUPERLONG exp, SUPERLONG mod)
{
	SUPERLONG m = RossiOne;
SUPERLONG b = base % mod;
	SUPERLONG e = exp;
	if(mod ==RossiOne)// exp ==RossiZero)
	{
		return RossiZero;
	}

	else if (exp == RossiZero)
	{
		return RossiOne;
	}
	while(e>RossiZero)
	{
		
		if (e % RossiTwo == RossiOne)
		{
			//m *= (b%mod);
			m = m*(b%mod);
			m = m% mod;
		}
		
		e = e / RossiTwo; 
		b =b*b;
		b = b%mod;
		//b = b%mod;
		//b %= mod;
		//b *= (b%mod);
	}
	return m;
}

NumTheoryFormulas::SUPERLONG NumTheoryFormulas::MultInverse(SUPERLONG a, SUPERLONG mod)
{
	SUPERLONG xCoef = a%mod;
	//long myB= b%mod;
	SUPERLONG myMod = mod;

	//Euclidean algorithm, return the coef of b in the final row

	std::vector<std::vector<SUPERLONG>> output = std::vector<std::vector<SUPERLONG>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD

	SUPERLONG bigger = std::max(xCoef, mod);
	SUPERLONG smaller = std::min(xCoef, mod);

	SUPERLONG quotient = bigger / smaller;
	SUPERLONG remainder = bigger % smaller;

	output.push_back(std::vector<SUPERLONG>());
	output.at(0).push_back(bigger);
	output.at(0).push_back(quotient);
	output.at(0).push_back(smaller);
	output.at(0).push_back(remainder);
	output.at(0).push_back(RossiZero);

	if (mod == RossiZero || xCoef == RossiZero)
	{
		//
		//Find the linear combination such that ax + by = GCD
		//Push back that linear comb. + GCD
		return RossiNegOne;
	}
	SUPERLONG gcd = RossiZero;
	for (int i = 1; (bigger != RossiZero && smaller != RossiZero); i++)
	{
		SUPERLONG t = bigger;
		bigger = smaller;
		smaller = t - quotient*smaller;

		if (smaller != RossiZero)
		{
			quotient = bigger / smaller;
			remainder = bigger % smaller;
		}

		else
		{
			remainder = RossiZero;
			gcd = bigger;
		}


		output.push_back(std::vector<SUPERLONG>());
		output.at(i).push_back(bigger);
		output.at(i).push_back(quotient);
		output.at(i).push_back(smaller);
		output.at(i).push_back(remainder);
		output.at(i).push_back(RossiZero);



	}

	//If we get here, either bigger OR smaller = RossiZero, GCD is the greater of the two
	//Find the linear combination such that ax + by = GCD via looping waaaaay back through the matrix somehow, gonna be ugly af
	//Push back that linear comb. + GCD

	//long gcd = (*output.end()).at(RossiZero);
	//if (gcd == RossiZero)
	//{
	//	gcd = (*output.end()).at(2);
	//}

	SUPERLONG curr[2] = { RossiOne,RossiZero };
	SUPERLONG next[2] = { RossiZero,RossiOne };
	SUPERLONG temp[2] = { RossiZero,RossiZero };
	for (auto i = output.begin(); i != output.end(); i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];
		next[0] = curr[0] - (*i).at(1)*next[0];
		next[1] = curr[1] - (*i).at(1)*next[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}

	return next[1] % mod;
	/*if (b % gcd == RossiZero)
	{
		return next[RossiOne];
	}

	else
	{
		//No solutions
		return -RossiOne;
	}
	*/


}

NumTheoryFormulas::SUPERLONG NumTheoryFormulas::CRT( int numEqns, SUPERLONG** eqns)
{
	SUPERLONG bigM = eqns[0][1];
	SUPERLONG gcd = this->GCD(bigM, eqns[1][1]);
	bigM = bigM* eqns[1][1];
	for (int i = 2; i < numEqns; i++)
	{
		if (gcd != RossiOne)
		{
			//No solution, abort
			return RossiNegOne;
		}

		gcd = this->GCD(gcd, eqns[0][i]);
	}



	
	//SUPERLONG* mArray = new SUPERLONG(sizeof(SUPERLONG) * numEqns);
	//mArray[RossiZero] = bigM;
	for (int i = 1; i < numEqns; i++)
	{
		//mArray[i] = eqns[i][RossiOne];
		bigM =  bigM* eqns[i][1];
		
	}

	SUPERLONG out = RossiZero;

	for (int i = 0; i < numEqns; i++)
	{
		
		out += ((this->MultInverse(bigM / eqns[i][0], eqns[i][0])* eqns[i][1]) % bigM);
	}

	return out % bigM;

}

NumTheoryFormulas::SUPERLONG NumTheoryFormulas::GCD(SUPERLONG a, SUPERLONG b)
{
	
		while (b != RossiZero) {
			SUPERLONG r = a % b;
			a = b;
			b = r;
		}
		return a;
	
}


NumTheoryFormulas::NumTheoryFormulas()
{
}


NumTheoryFormulas::~NumTheoryFormulas()
{
}
