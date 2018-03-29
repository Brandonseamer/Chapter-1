//Delgados Tacos
//03/28/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>

double tacos = .99;
double burritos = 1.99;
double enchiladas = 2.99;
double tostadas = 1.50;
double drink = .99;
double churro = 1.25;
double supremeBurrito = 4.50;
double bakedPotato = 1.99;
double chickenTenders = 4.99;
double tortillaChips = .5;
double orderedItemQuantity;
double total;
double previousTotal;
int totalFormula()
{
	if (total != previousTotal)
	{
		std::cout << "Your new total is: " << total << std::endl;
		previousTotal = total;
	}
	return 0;
}
int main()
{

	



	std::cout << "********Welcome to Delgados Tacos***********\n\n\n\n\n\n\n" << std::endl;
	std::cout << " TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT " << std::endl;
	std::cout << " |         _____________________________         | " << std::endl;
	std::cout << " |        | Save Lives                  |        | " << std::endl;
	std::cout << " |        | Please BUY OUR TACOS        |        | " << std::endl;
	std::cout << " |        | Fund my college             |        | " << std::endl;
	std::cout << " |        |_____________________________|        |____ " << std::endl;
	std::cout << " |                                               |    |" << std::endl;
	std::cout << " |                                               |    |" << std::endl;
	std::cout << " |   ____                           ____         |    ]" << std::endl;
	std::cout << " |  |    |                         |    |        |    ]" << std::endl;
	std::cout << " |_|  O   |_______________________|  O   |_______|____]" << std::endl;
	std::cout << "    |____|                         |____|              " << std::endl;
	

		
	
	std::cout << "How many tacos would you like? >>>" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*tacos;
	totalFormula();
	std::cout << "How many burritos would you like? >>>" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*burritos;
	totalFormula();
	std::cout << "How many enchiladas would you like? >>>" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*enchiladas;
	totalFormula();
	std::cout << "How many tostadas would you like? >>>" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*tostadas;
	totalFormula();
	std::cout << "How many drinks would you like?" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*drink;
	totalFormula();
	std::cout << "How many churros would you like?" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*churro;
	totalFormula();
	std::cout << "How many supreme burritos would you like?" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*supremeBurrito;
	totalFormula();
	std::cout << "How many baked potatos would you like?" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*bakedPotato;
	totalFormula();
	std::cout << "How many chicken tenders would you like?" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*chickenTenders;
	totalFormula();
	std::cout << "How many plates of chips would you like?" << std::endl;
	std::cin >> orderedItemQuantity;
	total = total + orderedItemQuantity*tortillaChips;
	totalFormula();


	system("pause");
	return 0;
}