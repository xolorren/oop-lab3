#include "stdafx.h"

MilitaryPlane::MilitaryPlane(){
	this->numOfMissles = -1;
	std::cout << "Military plane was created\n";
}

MilitaryPlane::MilitaryPlane(char* newName) : Transport(newName){
	this->numOfMissles = -1;
	std::cout << "Military plane was created\n";
}

MilitaryPlane::MilitaryPlane(int newNumOfMissles){
	this->numOfMissles = newNumOfMissles;
	std::cout << "Military plane was created\n";
}

MilitaryPlane::MilitaryPlane(char* newName, int newNumOfMissles) : Transport(newName){
	this->numOfMissles = -1;
	std::cout << "Military plane was created\n";
}

MilitaryPlane::~MilitaryPlane(){
	std::cout << "Freight plane was destroyed\n";
}

void MilitaryPlane::setNumOfMissles(int newNumOfMissles){
	this->numOfMissles = newNumOfMissles;
}

int MilitaryPlane::getNumOfMissles(){
	return this->numOfMissles;
}

void MilitaryPlane::move(){
	std::cout << "Military plane was moved\n";
}