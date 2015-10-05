#include "stdafx.h"

PassengerPlane::PassengerPlane(){
	this->numOfSeats = -1;
	std::cout << "Passenger plane was created\n";
}

PassengerPlane::PassengerPlane(char* newName) : Transport(newName){
	this->numOfSeats = -1;
	std::cout << "Passenger plane was created\n";
}

PassengerPlane::PassengerPlane(int newNumOfSeats){
	this->numOfSeats = newNumOfSeats;
	std::cout << "Passenger plane was created\n";
}

PassengerPlane::PassengerPlane(char* newName, int newNumOfSeats) : Transport(newName){
	this->numOfSeats = -1;
	std::cout << "Passenger plane was created\n";
}

PassengerPlane::~PassengerPlane(){
	std::cout << "Passenger plane was destroyed\n";
}

void PassengerPlane::setNumOfSeats(int newNumOfSeats){
	this->numOfSeats = newNumOfSeats;
}

int PassengerPlane::getNumOfSeats(){
	return this->numOfSeats;
}

void PassengerPlane::move(){
	std::cout << "Passenger plane was moved\n";
}