//Currency Conversion
//4/3/2018
//Author: Brandon Seamer

#include<iostream>

int main()
{

	double userBillfold;
	double yen;
	double pounds;
	double pesos;
	std::cout << "How much cash, do you have, in your billfold? (Numeric Characters Only)" << std::endl;
	std::cin >> userBillfold;

	yen = userBillfold * 82.34;
	pounds = userBillfold * .6318;
	pesos = userBillfold * 12.8863;

	std::cout << "You have " << pounds << " pounds, " << pesos << " pesos, and " << yen << " yen." << std::endl;
	system("pause");
	return 0;

}