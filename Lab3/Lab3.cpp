// Lab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{	
	
	char* name = new char[20];
	std::cout << "Vvedite imia\n";
	std::cin >> name;
	FreightPlane* fp = new FreightPlane(name);
	MilitaryPlane* mp = new MilitaryPlane(11);
	name = new char[20];
	std::cout << "Vvedite imia\n";
	std::cin >> name;
	PassengerPlane* pp = new PassengerPlane(name,12);
	
	std::cout << '\n';
	std::cout << fp->getName() << ' ' << fp->getCapacity() << '\n';
	std::cout << mp->getName() << ' ' << mp->getNumOfMissles() << '\n';
	std::cout << pp->getName() << ' ' << pp->getNumOfSeats() << '\n';
	std::cout << '\n';

	Transport::showListOfELements();

	delete fp;
	delete mp;
	delete pp;

	return 0;
}

