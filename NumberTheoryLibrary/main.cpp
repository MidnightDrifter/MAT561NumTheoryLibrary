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




	return 0;
}