//Expensive Calculator
//3/27/18
//Author: Brandon Seamer


#include <iostream>
#include <string>

int userInput1;
int userInput2;
std::string userInput3;
std::string	userInputOperator;

int main()
{
	
	do
	{
		std::cout << "Would you like to add, subtract, multiply, or divide? " << std::endl;
		std::cin >> userInputOperator;
		std::cout << "What would you like to be your first input? " << std::endl;
		std::cin >> userInput1;
		std::cout << "What would you like to be your second input? " << std::endl;
		std::cin >> userInput2;
		if (userInputOperator == "add")
		{
			std::cout << userInput1 + userInput2 << std::endl;
		}
		else if (userInputOperator == "subtract")
		{
			std::cout << userInput1 - userInput2 << std::endl;
		}
		else if (userInputOperator == "multiply")
		{
			std::cout << userInput1 * userInput2 << std::endl;
		}
		else if (userInputOperator == "add")
		{
			std::cout << userInput1 / userInput2 << std::endl;
		}
		else{

		}
		std::cout << "Would you like to continue?" << std::endl;
		std::cin >> userInput3;
	} while (userInput3 == "yes");
	
	
	
	system("pause");
	return 0;


}