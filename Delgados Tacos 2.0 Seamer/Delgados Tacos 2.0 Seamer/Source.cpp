//Delgados Tacos
//03/28/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>
#include <iomanip>
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
double taxes;
double finalTotal;
std::string userChoice;
std::string customerWantsMore = "yes";

int taxFormula()
{
	taxes = total * .07;
	finalTotal = total + taxes;
	return 0;
}

int purchaseFormulas()
{
	if (userChoice == "tacos")
	{
		std::cout << "How many tacos would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*tacos;
	}
	if (userChoice == "burritos")
	{
		std::cout << "How many burritos would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*burritos;
	}
	if (userChoice == "enchiladas")
	{
		std::cout << "How many enchiladas would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*enchiladas;
	}
	if (userChoice == "tostadas")
	{
		std::cout << "How many tostadas would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*tostadas;
	}
	if (userChoice == "drinks")
	{
		std::cout << "How many drinks would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*drink;
	}
	if (userChoice == "churros")
	{
		std::cout << "How many churros would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*churro;
	}
	if (userChoice == "supremeburritos")
	{
		std::cout << "How many supreme burritos would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*supremeBurrito;
	}
	if (userChoice == "bakedpotatos")
	{
		std::cout << "How many baked potatos would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*bakedPotato;
	}
	if (userChoice == "chickentenders")
	{
		std::cout << "How many chicken tenders would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*chickenTenders;
	}
	if (userChoice == "tortillachips")
	{
		std::cout << "How many tortilla chips would you like?" << std::endl;
		std::cin >> orderedItemQuantity;
		total = total + orderedItemQuantity*tortillaChips;
	}
	else
	{
		std::cout << "Please type the menu item, exactly as it is on the menu." << std::endl;
	}
	return 0;
}
int menuList()
{
	std::cout << "We serve tacos, burritos, enchiladas, tostadas, drinks, churros, >>>" << std::endl;
	std::cout << "supremeburritos, bakedpotatos, chickentenders, and tortillachips." << std::endl;
	return 0;
}

int totalFormula()
{
	if (total != previousTotal)
	{
		if (0 < finalTotal && finalTotal < 10){
			std::cout << "Your new total is: " << std::setprecision(3) << finalTotal << std::endl;
			previousTotal = total;
		}
		if (10 < finalTotal && finalTotal < 100){
			std::cout << "Your new total is: " << std::setprecision(4) << finalTotal << std::endl;
			previousTotal = total;
		}
		if (100 < finalTotal && finalTotal < 1000){
			std::cout << "Your new total is: " << std::setprecision(5) << finalTotal << std::endl;
			previousTotal = total;
		}
		if (1000 < finalTotal && finalTotal < 10000){
			std::cout << "Your new total is: " << std::setprecision(6) << finalTotal << std::endl;
			previousTotal = total;
		}
		else
		{

		}
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

	std::cout << "Welcome to Delgados Tacos!" << std::endl;
	do
	{
		std::cout << "What would you like to order? (please type exactly as stated in the menu)" << std::endl;
		menuList();
		std::cin >> userChoice;
		purchaseFormulas();
		taxFormula();
		totalFormula();
		std::cout <<"Would you like to order more? (yes or no)" << std::endl;
		std::cin >> customerWantsMore;
	} while (customerWantsMore == "yes");
	system("pause");
	return 0;
}