//MadLibs
//3/27/18
//Author: Brandon Seamer

#include <iostream>
#include <string>

int main()
{
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;

	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cTheResultOfaMinusB;
	
	std::cout << "Welcome to my Mad Libs. \n\n" << std::endl;
	std::cout << "Pick your least favorite color. >>> " << std::endl;
	std::cin >> color;
	std::cout << "Pick a word that ends in est. >>>" << std::endl;
	std::cin >> wordEst;
	std::cout << "Pick a body part. >>>" << std::endl;
	std::cin >> bodyPartPlural;
	std::cout << "Pick an animal. >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Pick a noun. >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Pick a plural noun. >>>" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Select a number greater than 1. >>> " << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Pick another number, lower than your first one. >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;
	std::cout << "Thank you." << std::endl;

	cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;
	

	std::cout << "The " << color << " dragon is the " << wordEst << " dragon of all. It has " << cTheResultOfaMinusB <<std::endl;
	std::cout << bodyPartPlural << "s. This dragon also has eaten " << aFirstNumberChosenByUser <<" " << animal << "s for breakfast." << std::endl;
	std::cout << "This angered all the villagers of BroBroTown, causing them to fight back with " << pluralNoun << "." << std::endl;
	std::cout << "After the villagers slain the dragon, the King rewarded Brosius, mayor of BroBroTown, with " << bSecondNumberChosenByUser << " " << noun << "." << std::endl;
	
	
	
	
	
	system("pause");
	return 0;
}