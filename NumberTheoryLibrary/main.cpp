#include "NumTheoryFormulas.h"
#include <math.h>
#include <InfInt.h>
//#include <gmp.h>

NumTheoryFormulas;




int main(int argc, char *argv[])
{
	//	NumTheoryFormulas::SUPERLONG NegativeOne(-1);
	//	long x = 349993;
	//	long y = 380247;
	//	// Class  #s :  349993, 380247
	//	//NumTheoryFormulas::EuclideanAlgorithm(x, y);
	//
	//	//mpz_class answer = 52;
	//	int answer = 1;
	NumTheoryFormulas solver = NumTheoryFormulas();
	//
	//	solver.EuclideanAlgorithm(NumTheoryFormulas::SUPERLONG(3215), NumTheoryFormulas::SUPERLONG(4761));
	//	NumTheoryFormulas::SUPERLONG modexp = solver.ModExponent(NumTheoryFormulas::SUPERLONG(3546789), NumTheoryFormulas::SUPERLONG(1254865), NumTheoryFormulas::SUPERLONG(13315791));
	//	NumTheoryFormulas::SUPERLONG modinv = solver.MultInverse(NumTheoryFormulas::SUPERLONG(357912486), NumTheoryFormulas::SUPERLONG(147852369)).first % NumTheoryFormulas::SUPERLONG(147852369);
	////	mpz_class base;
	////	mpz_class exp; 
	////	mpz_class mod;
	////	base = 25356575;
	////	exp = "123345678987654321";
	////	mod = "112233445566778899";
	//
	//	//answer = solver.ModExponent(base, exp , mod);
	//	//answer *= 1;
	//	//if (solver.ModExponent(base, exp, mod) != answer)
	//	//{
	//	//	return -1;
	//	//}
	//	//NumTheoryFormulas::SUPERLONG two = NumTheoryFormulas::SUPERLONG(2);
	//	//NumTheoryFormulas::SUPERLONG nOne = NumTheoryFormulas::SUPERLONG(-1);
	//	NumTheoryFormulas::SUPERLONG equations[4][2] = { {NumTheoryFormulas::SUPERLONG(3256),NumTheoryFormulas::SUPERLONG(125)},{ NumTheoryFormulas::SUPERLONG(1234),NumTheoryFormulas::SUPERLONG(137)},{ NumTheoryFormulas::SUPERLONG(4567),NumTheoryFormulas::SUPERLONG(323)},{ NumTheoryFormulas::SUPERLONG(3578),NumTheoryFormulas::SUPERLONG(143)} };
	//	NumTheoryFormulas::SUPERLONG bigM(125 * 137 * 323 * 143);// = 125 * 137 * 323 * 143;
	//	NumTheoryFormulas::SUPERLONG crt = solver.CRT(4, equations).first;
	//	//Decrypt a msg
	//	NumTheoryFormulas::SUPERLONG p(678943);// = 658943;  //prime 1
	//	NumTheoryFormulas::SUPERLONG q(357389);// = 357389;  //prime 2
	//	NumTheoryFormulas::SUPERLONG N = p * q;  //modulus
	//	NumTheoryFormulas::SUPERLONG e(2347);// = 2347;  //exponent
	//	NumTheoryFormulas::SUPERLONG mE(21511484); //= 21511484;  //encrypted msg
	//	NumTheoryFormulas::SUPERLONG d = solver.MultInverse(e, (p-1) * (q-1)).first;  //mult inv. exponent
	//
	//	NumTheoryFormulas::SUPERLONG msg = solver.ModExponent(mE, d, N);  //decrypted msg
	//	
	//	//encrypt msg
	//	//msg is 'HELP' -> 08051216
	//	//p = 658943, q =357389, e = 2347
	//	const std::string input("7782118579470520751712059");
	//	NumTheoryFormulas::SUPERLONG msg2(input);// , BigInt::DEC_DIGIT);
	//	
	//	NumTheoryFormulas::SUPERLONG encrypted = msg2;//solver.ModExponent(msg,).first;
	//	NumTheoryFormulas::SUPERLONG p1(658943);// = 658943;
	//	NumTheoryFormulas::SUPERLONG q1(357839);// = 357389;
	//	NumTheoryFormulas::SUPERLONG N1 = p1*q1;
	//	NumTheoryFormulas::SUPERLONG e1(2347);// = 2347;
	//	NumTheoryFormulas::SUPERLONG d1 = solver.MultInverse(e1, (p1 -1)*(q1-1)).first;
	//	NumTheoryFormulas::SUPERLONG decrypted = solver.ModExponent(encrypted, d1, N1);
	//
	//	NumTheoryFormulas::SUPERLONG test = solver.ModExponent("715150412210311", 5, 21631);
	//int bbb = 	test.toInt();
	//answer = solver.ModExponent(3004, 5, 21631).toInt();
	//long long answerL = solver.MultInverse(5, 40 * 540).first.toInt();
	//	if(solver.MultInverse(5, 40*540))
	//	{
	//		return 1;
	//	}





	//NumTheoryFormulas solver = NumTheoryFormulas();
	//NumTheoryFormulas::SUPERLONG s = solver.encrypt(8051216, 6043, 43753, 87149);
	//long long out = s.toLongLong();

	//long long d = solver.MultInverse(6043, (43752 * 87148)).toLongLong();
	//std::string decrypted = solver.decrypt(out, 6043, 43753, 87149).toString();

	//d = solver.decryptionExponent(5, 1237, 4327).toLongLong();
	////4784648 1933497 4437506
	//long long p1, p2, p3;
	//p1 = solver.decrypt(4784648, 5, 1237, 4327).toLongLong();
	//p2 = solver.decrypt(1933497, 5, 1237, 4327).toLongLong();
	//p3 = solver.decrypt(4437506, 5, 1237, 4327).toLongLong();

	////p3 = solver.decryptionExponent(5, 41, 541).toLongLong();
	//NumTheoryFormulas::SUPERLONG eqns[3][2] = { {257261,303799},{117466,289279},   {260584,410503} };
	//std::string p4 = solver.CRT(3, eqns).toString();
	//long long test = (NumTheoryFormulas::SUPERLONG(303799) * NumTheoryFormulas::SUPERLONG(289279) * NumTheoryFormulas::SUPERLONG(410503)).toLongLong();
	//if (NumTheoryFormulas::SUPERLONG(p1) > (NumTheoryFormulas::SUPERLONG(303799) * NumTheoryFormulas::SUPERLONG(289279) * NumTheoryFormulas::SUPERLONG(410503)))
	//{
	//	return -1123;
	//}

	//NumTheoryFormulas::SUPERLONG eqns2[3][2] = { {2,3}, {3,5}, {2,7} };
	//p2 = solver.CRT(3, eqns2).toLongLong();



	//std::string out1, out2, out3, out4, out5;
	//out1 = solver.encrypt("130120463336", 65537, 15551, "1111211111").toString();
	//out2 = solver.encrypt("314603120119", 65537, 15551, "1111211111").toString();
	//out3 = solver.encrypt("194446181901", 65537, 15551, "1111211111").toString();
	//out4 = solver.encrypt("461815031119", 65537, 15551, "1111211111").toString();
	//out5 = solver.encrypt("42", 65537, 15551, "1111211111").toString();

	//std::string outArray[4] = { "56102338315908135862229256","24520831102597267524421143","28518867752902895899491325","50440480012094746266375351" };

	//for (int i = 0; i <4 ; i++)
	//{
	//	std::cout << solver.decrypt(outArray[i], 65537, "2214623", "32853700532465296561").toString() << std::endl;
	//}

	//std::cout << std::endl;

	//std::cout << solver.decrypt("1739733124238", 65537, 15551, "1111211111").toString();

	//std::cout << out1 << out2 << out3 << out4 << out5 << std::endl;


	//std::string asdf;
	//asdf = solver.ModExponent(23, 19, 100).toString();
/*
NumTheoryFormulas::SUPERLONG out1, out2, out3, p, q, e,d, decryp1, decryp2, decryp3, encryp1, encryp2, encryp3;
out1="03182516201507180116";
out2 = "0825313031441819";
out3 = "01461815031119";
p = "1288791368807707";
q = "1933050447901933";
e = "65537";

encryp1 = solver.encrypt("299342053713601269735424941141", e, p, q);
encryp2 = solver.encrypt("558075711198607380391292750618", e, p, q);
encryp3 = solver.encrypt("594171605836973415544105455241", e, p, q);
//std::cout << solver.encrypt(out1, e, p, q) << std::endl;

//std::cout << solver.encrypt(out2, e, p, q) << std::endl;

//std::cout << solver.encrypt(out3, e, p, q) << std::endl;

d = solver.decryptionExponent(e, p, q);
//std::cout << d << std::endl;

decryp1 = solver.decrypt("299342053713601269735424941141", e, p, q);
decryp2 = solver.decrypt("558075711198607380391292750618", e, p, q);
decryp3 = solver.decrypt("594171605836973415544105455241", e, p, q);

//std::cout << decryp1 << std::endl;
//std::cout << decryp2 << std::endl;
//std::cout << decryp3 << std::endl;

//std::cout << solver.MultInverse(11185, 15329) << std::endl;
//std::cout << solver.MultInverse(18, 79) << std::endl;
//std::cout << solver.MultInverse(79, 97) << std::endl;
//std::cout << solver.MultInverse(111187, 111211) << std::endl;

NumTheoryFormulas::SUPERLONG testMsg = "6112008091919080926";
NumTheoryFormulas::SUPERLONG testEncryptMsg = solver.encrypt(testMsg, e, p, q);
NumTheoryFormulas::SUPERLONG testDecryptMsg = solver.decrypt(testEncryptMsg, e, p, q);

std::cout << "Original msg:  " << testMsg << std::endl;
std::cout << "Encrypted msg:  " << testEncryptMsg<< std::endl;
std::cout << "Decrypted msg:  " << testDecryptMsg << std::endl;



std::cout << "Mod exp(2016, 22545, 7663):  " << solver.ModExponent(2016, 22545, 7663).toString() << std::endl;
*/
//
//NumTheoryFormulas::SUPERLONG in = 2;
//for (int i = 1; i < 100; i++)
//{
//	in *= 2;
//}
//in -= 1;
//
//solver.printFactors(in);
//


//std::cout << "Brute force:  "<< solver.discreteLogBruteForce(5, 489, 1093) << std::endl;
//std::cout << "Testing brute force.  ModExponent(5,100,1093) = " << solver.ModExponent(5, 100, 1093) << std::endl;
//std::cout << "BSGS:  " << solver.discreteLogBabyStepGiantStep(5, 489, 1093) << std::endl;

//std::cout << "I(26), I(43):  " << solver.discreteLogBruteForce(7, 26, 71) << ", " << solver.discreteLogBruteForce(2, 43, 59) << std::endl;
//int test = 'c';
//std::cout << test << std::endl;  //Does automatically convert char -> ASCII code

//	std::string t = solver.readFileEncode("Text7.docx", "Text7encrypted8bytes3");
	//std::string p = solver.readFileEncode("Pdf7.pdf", "PDF7encrypted8bytes3");
	//NumTheoryFormulas::SUPERLONG a,b,c,d,e,f;

	//a = solver.order(2, 5);
	//std::cout << a.toString();

/*
	NumTheoryFormulas::SUPERLONG a[10] = {  3136,1939,2676, 48, 1961, 415, 2783, 3122, 2088, 2477  };
	NumTheoryFormulas::SUPERLONG t;
	for (int i = 0; i < 3; i++)
	{
	//	t = solver.ModExponent(3, a[i], 3137);
		std::cout <<  solver.ModExponentCoef(2016,3,a[i],  3137).toString() << std::endl;
	}
	*/

	//int test341 = solver.strongFermatTest(341, 2);  //2-pseudoprime, but not strong pseudoprime
	//int test121 = solver.strongFermatTest(121, 3);  //Strong 3-pseudoprime, according to book
	//int test561 = solver.strongFermatTest(561, 2);  //Carmichael #, SHOULD be strong pseudoprime?
	//int test4033 = solver.strongFermatTest(4033, 2);  //Book says strong 2-pseudoprime

	int base2Pseudoprimes[7] = { 341,561,645,1105,1387,1729,1905 };
	int primesLess2k[303] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999};
	//length = 303
	/*int tIndex= 0;
	for (int i = 3; i < 2000 && tIndex < 7; i += 2)
	{



		if (solver.weakFermatTest(i, 2) == 1)
		{
			bool add = true;
			for (int k = 0; k < 303; k++)
			{
				if (i == primesLess2k[k])
				{
					add = false;
					k = 303;
				}
			}
			if (add)
			{
				base2Pseudoprimes[tIndex] = i;
				tIndex++;
			}

		}
	}
	*/
	std::vector<int> strongBase2Pseudoprimes = std::vector<int>();
	for (int i = 0; i < 7; i++)
	{
		if (solver.strongFermatTest(base2Pseudoprimes[i], 2) == 1)
		{
			strongBase2Pseudoprimes.push_back(base2Pseudoprimes[i]);
		}
	}

	
	NumTheoryFormulas::SUPERLONG factor = solver.fermatFactorization("4300736399");

	//std::cout << factor.toString() << std::endl;


	NumTheoryFormulas::SUPERLONG hugeExponent = 1;
	for (int i = 2; i <= 20; i++)
	{
		hugeExponent *= i;
	}

	NumTheoryFormulas::SUPERLONG temp = solver.ModExponent(2, hugeExponent, "4300736399");

	NumTheoryFormulas::SUPERLONG factor2 = solver.GCD(temp - 1, "4300736399");
//	std::cout << temp.toString() << std::endl;
//	std::cout << factor2.toString() << std::endl;

	NumTheoryFormulas::SUPERLONG counter = 0;
/*
	for (int i = 1; i <= 1000000; i++)
	{
		if (solver.GCD(i, "9699690") == 1)
		{
			counter++;
		}
	}

	std::cout << counter.toString() << std::endl;
	*/

	float f = 1.f;

	
	return 0;

	NumTheoryFormulas::SUPERLONG hugeNumber = "1000000";
	std::vector<NumTheoryFormulas::FAILPAIR> lotsOfNumbers;  //For Sieve
	std::vector<NumTheoryFormulas::SUPERLONG> primes;  //For Sieve
	primes.push_back(2);
	lotsOfNumbers.push_back(NumTheoryFormulas::FAILPAIR(2,true));  //Push back number, isPrime
	for (NumTheoryFormulas::SUPERLONG i = 2; i < hugeNumber; i++)
	{
		if (lotsOfNumbers.at(i.toLongLong()).second)
		{
			if (i == lotsOfNumbers.at(i.toLongLong()).first)
			{
				primes.push_back(i);
			}

			for (NumTheoryFormulas::SUPERLONG j = i; j < hugeNumber; j += i)
			{
				lotsOfNumbers.at(i.toLongLong()).second = false;
			}

		}
	}


}