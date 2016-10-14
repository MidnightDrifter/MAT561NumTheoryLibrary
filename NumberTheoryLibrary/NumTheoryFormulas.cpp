#include "NumTheoryFormulas.h"




std::vector<std::vector<NumTheoryFormulas::SUPERLONG>> NumTheoryFormulas::EuclideanAlgorithm(NumTheoryFormulas::SUPERLONG a, NumTheoryFormulas::SUPERLONG b)
{/*
	if (GCD(a, mod) > 1)
	{
		return FAILPAIR(-1, false);
	}*/


	std::vector<std::vector<NumTheoryFormulas::SUPERLONG>> output = std::vector<std::vector<NumTheoryFormulas::SUPERLONG>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD
	
	NumTheoryFormulas::SUPERLONG bigger = std::max(a, b);
	NumTheoryFormulas::SUPERLONG smaller = std::min(a, b);

	NumTheoryFormulas::SUPERLONG quotient = bigger / smaller;
	NumTheoryFormulas::SUPERLONG remainder = bigger % smaller;
	
	output.push_back(std::vector<NumTheoryFormulas::SUPERLONG>());
	output.at(0).push_back(bigger);
	output.at(0).push_back(quotient);
	output.at(0).push_back(smaller);
	output.at(0).push_back(remainder);
	output.at(0).push_back(0);

	if (a == 0 || b == 0)
	{
		//
		//Find the linear combination such that ax + by = GCD
		//Push back that linear comb. + GCD
		return output;
	}
	NumTheoryFormulas::SUPERLONG gcd = 0;
	for (int i = 1; (bigger != 0 && smaller != 0); i++)
	{
		NumTheoryFormulas::SUPERLONG t = bigger;
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
		

		output.push_back(std::vector<NumTheoryFormulas::SUPERLONG>());
		output.at(i).push_back(bigger);
		output.at(i).push_back(quotient);
		output.at(i).push_back(smaller);
		output.at(i).push_back(remainder);
		output.at(i).push_back(0);



	}

	//If we get here, either bigger OR smaller = 0, GCD is the greater of the two
	//Find the linear combination such that ax + by = GCD via looping waaaaay back through the matrix somehow, gonna be ugly af
	//Push back that linear comb. + GCD

	//long gcd = (*output.end()).at(0);
	//if (gcd == 0)
	//{
	//	gcd = (*output.end()).at(2);
	//}
	
	NumTheoryFormulas::SUPERLONG curr[2] = { 1,0 };
	NumTheoryFormulas::SUPERLONG next[2] = { 0,1 };
	NumTheoryFormulas::SUPERLONG temp[2] = { 0,0 };
	for (auto i = output.begin(); i!=output.end(); i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];

		next[0] =   curr[0] - (*i).at(1)*next[0];
		next[1] =  curr[1]- (*i).at(1)*next[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}
	
	output.push_back(std::vector<NumTheoryFormulas::SUPERLONG>());
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


NumTheoryFormulas::SUPERLONG NumTheoryFormulas::ModExponent(NumTheoryFormulas::SUPERLONG base, NumTheoryFormulas::SUPERLONG exp, NumTheoryFormulas::SUPERLONG mod)
{
	NumTheoryFormulas::SUPERLONG m = 1;
NumTheoryFormulas::SUPERLONG b = base % mod;
	NumTheoryFormulas::SUPERLONG e = exp;
	if(mod ==1)// exp ==0)
	{
		return 0;
	}

	else if (exp == 0)
	{
		return 1;
	}
	while(e>0)
	{
		
		if (e % 2 == 1)
		{
			//m *= (b%mod);
			m = m*(b%mod);
			m = m% mod;
		}
		
		e = e / 2; 
		b =b*b;
		b = b%mod;
		//b = b%mod;
		//b %= mod;
		//b *= (b%mod);
	}
	return m;
}

NumTheoryFormulas::SUPERLONG NumTheoryFormulas::MultInverse(NumTheoryFormulas::SUPERLONG a, NumTheoryFormulas::SUPERLONG mod)
{
	if (GCD(a, mod) > 1)
	{
		return exitOnFailure(FAILPAIR(-1, false));
	}


	NumTheoryFormulas::SUPERLONG xCoef = a%mod;
	//long myB= b%mod;
	NumTheoryFormulas::SUPERLONG myMod = mod;

	//Euclidean algorithm, return the coef of b in the final row

	std::vector<std::vector<NumTheoryFormulas::SUPERLONG>> output = std::vector<std::vector<NumTheoryFormulas::SUPERLONG>>();
	//matrix format:  bigger, quotient, smaller, remainder, GCD

	NumTheoryFormulas::SUPERLONG bigger = std::max(xCoef, mod);
	NumTheoryFormulas::SUPERLONG smaller = std::min(xCoef, mod);

	NumTheoryFormulas::SUPERLONG quotient = bigger / smaller;
	NumTheoryFormulas::SUPERLONG remainder = bigger % smaller;

	output.push_back(std::vector<NumTheoryFormulas::SUPERLONG>());
	output.at(0).push_back(bigger);
	output.at(0).push_back(quotient);
	output.at(0).push_back(smaller);
	output.at(0).push_back(remainder);
	output.at(0).push_back(0);

	if (mod == 0 || xCoef == 0)
	{
		//
		//Find the linear combination such that ax + by = GCD
		//Push back that linear comb. + GCD
		return exitOnFailure(std::pair<NumTheoryFormulas::SUPERLONG, bool>(-1, false));
	}
	NumTheoryFormulas::SUPERLONG gcd = 0;
	for (int i = 1; (bigger != 0 && smaller != 0); i++)
	{
		NumTheoryFormulas::SUPERLONG t = bigger;
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


		output.push_back(std::vector<NumTheoryFormulas::SUPERLONG>());
		output.at(i).push_back(bigger);
		output.at(i).push_back(quotient);
		output.at(i).push_back(smaller);
		output.at(i).push_back(remainder);
		output.at(i).push_back(0);



	}

	//If we get here, either bigger OR smaller = 0, GCD is the greater of the two
	//Find the linear combination such that ax + by = GCD via looping waaaaay back through the matrix somehow, gonna be ugly af
	//Push back that linear comb. + GCD

	//long gcd = (*output.end()).at(0);
	//if (gcd == 0)
	//{
	//	gcd = (*output.end()).at(2);
	//}

	NumTheoryFormulas::SUPERLONG curr[2] = { 1,0 };
	NumTheoryFormulas::SUPERLONG next[2] = { 0,1 };
	NumTheoryFormulas::SUPERLONG temp[2] = { 0,0 };
	for (auto i = output.begin(); i != output.end(); i++)
	{
		temp[0] = next[0];
		temp[1] = next[1];
		next[0] = curr[0] - (*i).at(1)*next[0];
		next[1] = curr[1] - (*i).at(1)*next[1];

		curr[0] = temp[0];
		curr[1] = temp[1];



	}
	
	if (next[1] >= mod)
	{
		next[1] %= mod;
	}

	long l = next[1].toLong();
	return exitOnFailure(std::pair<NumTheoryFormulas::SUPERLONG,bool>(next[1],true));
	/*if (b % gcd == 0)
	{
		return next[1];
	}

	else
	{
		//No solutions
		return -1;
	}
	*/


}

NumTheoryFormulas::SUPERLONG NumTheoryFormulas::CRT( int numEqns, NumTheoryFormulas::SUPERLONG eqns[][2])
{
	NumTheoryFormulas::SUPERLONG bigM = eqns[0][1];
	NumTheoryFormulas::SUPERLONG gcd = this->GCD(bigM, eqns[1][1]);
	bigM = bigM* eqns[1][1];
	for (int i = 2; i < numEqns; i++)
	{
		if (gcd != 1)
		{
			//No solution, abort)
			return exitOnFailure(std::pair<NumTheoryFormulas::SUPERLONG, bool>(-1,false));
		}

		gcd = this->GCD(gcd, eqns[0][i]);
	}



	
	//NumTheoryFormulas::SUPERLONG* mArray = new NumTheoryFormulas::SUPERLONG(sizeof(NumTheoryFormulas::SUPERLONG) * numEqns);
	//mArray[0] = bigM;
	for (int i = 1; i < numEqns; i++)
	{
		//mArray[i] = eqns[i][1];
		bigM =  bigM* eqns[i][1];
		
	}

	NumTheoryFormulas::SUPERLONG out = 0;

	for (int i = 0; i < numEqns; i++)
	{
		
		out += ((this->MultInverse(bigM / eqns[i][0], eqns[i][0])* eqns[i][1]) % bigM);
	}

	return exitOnFailure(std::pair<NumTheoryFormulas::SUPERLONG,bool>(out % bigM,true));

}

NumTheoryFormulas::SUPERLONG NumTheoryFormulas::GCD(NumTheoryFormulas::SUPERLONG a, NumTheoryFormulas::SUPERLONG b)
{
	
		while (b != 0) {
			NumTheoryFormulas::SUPERLONG r = a % b;
			a = b;
			b = r;
		}
		return a;
	
}


NumTheoryFormulas::SUPERLONG NumTheoryFormulas::decrypt(NumTheoryFormulas::SUPERLONG msg, NumTheoryFormulas::SUPERLONG exp, NumTheoryFormulas::SUPERLONG p, NumTheoryFormulas::SUPERLONG q)
{
	NumTheoryFormulas::SUPERLONG One(1);// = NumTheoryFormulas::SUPERLONG(-1);
	
	if(GCD((p-One)*(q-One),exp) != One)
	{
		return exitOnFailure(FAILPAIR(-1, false));
	}

	else
	{
		return exitOnFailure(FAILPAIR(ModExponent(msg, exp*(MultInverse(exp, (p - One)*(q - One))), NumTheoryFormulas::SUPERLONG(p*q)), true));
	}

}


NumTheoryFormulas::SUPERLONG NumTheoryFormulas::exitOnFailure(NumTheoryFormulas::FAILPAIR f)
{
	if (f.second)
	{
		return f.first;
	}

	else
	{

		exit(-1);
	}
}


NumTheoryFormulas::NumTheoryFormulas()
{
}


NumTheoryFormulas::~NumTheoryFormulas()
{
}
