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
	
	std::cout << "Pick a color";
	std::cin >> color;
	std::cout << "Pick a word that ends in est";
	cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;
	

	std::cout << "The " << color << "Dragon is the " << wordEst << "Dragon of all. It has " << cTheResultOfaMinusB << std::endl;
	std::cout << bodyPartPlural << ". This dragon also has eaten " << aFirstNumberChosenByUser <<" " << animal << "s for breakfast." << std::endl;
	std::cout << "This angered all the villagers of BrosiusHome, causing them to fight back with" << pluralNoun << std::endl;
	std::cout << "After the villagers slain the dragon, the King rewarded Brosius, mayor of BrosiusHome, with " << bSecondNumberChosenByUser << " " << noun << std::endl;
}