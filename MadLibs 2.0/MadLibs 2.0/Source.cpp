//MadLibs
//3/27/18
//Author: Brandon Seamer

#include <iostream>
#include <string>

int main()
{
	std::string food;
	std::string name;
	std::string personIdiot;

	int firstNumber;
	int secondNumber;
	int resultNumber;

	std::cout << "Welcome to my Mad Libs. \n\n" << std::endl;

	std::cout << "Type your name. >>>" << std::endl;
	std::cin >> name;
	std::cout << "Pick your least favorite food. >>> " << std::endl;
	std::cin >> food;
	std::cout << "Name a good friend >>>" << std::endl;
	std::cin >> personIdiot;
	std::cout << "Select a number between 1000 and 1200 >>> " << std::endl;
	std::cin >> firstNumber;
	std::cout << "Pick another number, above 700 and below " << firstNumber << ">>>" << std::endl;
	std::cin >> secondNumber;
	std::cout << "Thank you. >>>" << std::endl;

	resultNumber = firstNumber - secondNumber;

	std::cout << "Once upon a time " << name << " wanted to make a new foodtruck that sells " << food << " with a loan, currently holding a credit score of: " << firstNumber << std::endl;
	std::cout << "However, " << name << " was foolish enough to employ " << personIdiot << ". This person is not necessarily, the best cook, or listener." << std::endl;
	std::cout << "The only food that " << personIdiot << " knows how to make is tacos. Causing " << name << "'s foodtruck to become only a mere tacotruck." << std::endl;
	std::cout << "Additionally, because " << personIdiot << " is a terrible cook, the tacotruck soon became bankrupt, ruining" << name << "'s credit score, now only being " << resultNumber <<". " << std::endl;
	std::cout << "Fortunately, after having their credit score lowered by " << secondNumber << ". " << name << " will not be able to attempt to host a business again, because they can no longer receive a loan." << std::endl;




	system("pause");
	return 0;
}