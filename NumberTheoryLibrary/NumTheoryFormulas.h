#pragma once
#include <vector>
#include <list>
#include <algorithm>
#include <InfInt.h>
#include <fstream>
#include <iostream>
//#include <experimental>
//#include <bigInt.h>
class NumTheoryFormulas
{
public:

	typedef InfInt SUPERLONG;   //unsigned long long SUPERLONG;
	//typedef unsigned long long BIG;								   //typedef BigInt::DEC_DIGIT DECIMAL;
	//typedef long long SIGNEDBIG;
	typedef  std::pair<SUPERLONG, bool> FAILPAIR;
	NumTheoryFormulas();
	~NumTheoryFormulas();

	 std::vector<std::vector<SUPERLONG>> EuclideanAlgorithm(SUPERLONG a, SUPERLONG b);
	//static
		SUPERLONG ModExponent(SUPERLONG base, SUPERLONG exp, SUPERLONG mod);
		SUPERLONG ModExponentCoef(SUPERLONG coef, SUPERLONG base, SUPERLONG exp, SUPERLONG mod) { SUPERLONG t = ModExponent(base, exp, mod);  SUPERLONG s = ModExponent(coef, 1, mod);    return ModExponent(t*s, 1, mod); }
		SUPERLONG MultInverse(SUPERLONG a, SUPERLONG mod);
	 SUPERLONG CRT(int numEquations, std::vector<std::vector<SUPERLONG>> eqns);


	 std::pair<SUPERLONG, SUPERLONG> encryptElGamo(SUPERLONG msg, SUPERLONG pRoot, SUPERLONG prime, SUPERLONG b, SUPERLONG ab) { return std::pair<SUPERLONG, SUPERLONG>(ModExponent(pRoot, b, prime), ModExponentCoef(msg, pRoot, ab, prime)); }
	 SUPERLONG decryptElGamo(SUPERLONG gA, SUPERLONG gB, SUPERLONG prime, SUPERLONG encryptedMsg) { return (MultInverse(gA*gB, prime))*encryptedMsg; }



	 SUPERLONG GCD(SUPERLONG a, SUPERLONG b);
	 SUPERLONG decryptionExponent(SUPERLONG exp, SUPERLONG q, SUPERLONG p);
	// SUPERLONG buildFromString(const char* c) { return SUPERLONG(std::string(c), BigInt::DEC_DIGIT); }

	 SUPERLONG encrypt(SUPERLONG msg, SUPERLONG exp, SUPERLONG p, SUPERLONG q) { return ModExponent(msg, exp, p*q); }
	 SUPERLONG encrypt(SUPERLONG msg, SUPERLONG exp, SUPERLONG n) { return ModExponent(msg, exp, n); }
	 SUPERLONG decrypt(SUPERLONG msg, SUPERLONG exp, SUPERLONG p, SUPERLONG q); 
	 SUPERLONG exitOnFailure(FAILPAIR f);
	 SUPERLONG order(SUPERLONG a, SUPERLONG base);
	 std::vector<SUPERLONG> factorize(SUPERLONG a);
	 
	 void printFactors(std::vector<SUPERLONG> a);
	 void printFactors(SUPERLONG a);

	 SUPERLONG discreteLogBruteForce(SUPERLONG pRoot, SUPERLONG val, SUPERLONG mod);

	 SUPERLONG discreteLogBabyStepGiantStep(SUPERLONG pRoot, SUPERLONG val, SUPERLONG mod);
	 int strongFermatTest(SUPERLONG num, SUPERLONG base);
	 int weakFermatTest(SUPERLONG num, SUPERLONG base);
	 int millerRabinTest(SUPERLONG num,  SUPERLONG numTests);

	 SUPERLONG FactExpModExponent(SUPERLONG num, SUPERLONG factorialExp, SUPERLONG mod);

	 std::pair<SUPERLONG,SUPERLONG> fermatFactorization(SUPERLONG num);

	 SUPERLONG strongFermatStyleFactorization(SUPERLONG base, SUPERLONG powerOfTwo, SUPERLONG s, SUPERLONG num);

	 SUPERLONG power(SUPERLONG base, SUPERLONG power) { SUPERLONG out = 1;  for (SUPERLONG i = 0; i < power; i++) { out *= base; }  return out; }

	 SUPERLONG factorial(SUPERLONG f) { SUPERLONG out = 2;  for (SUPERLONG i = 3; i <= f; i++) { out *= i; }  return out; }



	//SUPERLONG encrypt(const char* msg, BIG exp, BIG p, BIG q) { return encrypt(SUPERLONG(msg), SUPERLONG(exp), SUPERLONG(p), SUPERLONG(q)); }
	// FAILPAIR decrypt(const char* msg, BIG exp, BIG p, BIG q) { return decrypt(SUPERLONG(msg), SUPERLONG(exp), SUPERLONG(p), SUPERLONG(q)); }


	 std::string readFileEncode(const char* filename, const char*outfile);
	// SUPERLONG ModExponent(BIG base, BIG exp, BIG mod) { return ModExponent(SUPERLONG(base), SUPERLONG(exp), SUPERLONG(mod)); }
	// FAILPAIR MultInverse(BIG a, BIG b) { return MultInverse(SUPERLONG(a), SUPERLONG(b)); }
	//// SUPERLONG CRT()
	// SUPERLONG GCD(BIG a, BIG b) {return GCD(SUPERLONG(a), SUPERLONG(b)); }
	//  

	//Actually just get the multinv(a,n) -> return x such that ax = 1 mod n

	//Next program:  CRT--assume all coef of x are 1

	//Redo ModExponent--params aren't being passed?


	 std::vector<SUPERLONG> squareRootContinuedFraction(SUPERLONG num);
	 std::vector<std::pair<SUPERLONG,SUPERLONG>> squareRootContinuedFractionConvergences(std::vector<SUPERLONG> cf);
	 std::vector<SUPERLONG> squareRootContinuedFractionsConvergenceSquares(std::vector<std::pair<SUPERLONG, SUPERLONG>> convergences, SUPERLONG num);
	 std::vector<std::pair<SUPERLONG, SUPERLONG>> squreRootContinuedFractionConvergenceSquaresBCheck(SUPERLONG num);
};

