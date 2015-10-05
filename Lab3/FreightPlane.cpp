#include "stdafx.h"

FreightPlane::FreightPlane(){
	this->capacity = -1;
	std::cout << "Freight plane was created\n";
}

FreightPlane::FreightPlane(char* newName) : Transport(newName){
	this->capacity = -1;
	std::cout << "Freight plane was created\n";
}

FreightPlane::FreightPlane(int newCapacity){
	this->capacity = newCapacity;
	std::cout << "Freight plane was created\n";
}

FreightPlane::FreightPlane(char* newName, int newCapacity) : Transport(newName){
	this->capacity = -1;
	std::cout << "Freight plane was created\n";
}

FreightPlane::~FreightPlane(){
	std::cout << "Freight plane was destroyed\n";
}

void FreightPlane::setCapacity(int newCapacity){
	this->capacity = newCapacity;
}

int FreightPlane::getCapacity(){
	return this->capacity;
}

void FreightPlane::move(){
	std::cout << "Freight plane was moved\n";
}