#pragma once
#include "stdafx.h"

class PassengerPlane : public Transport{
public:
	PassengerPlane();
	PassengerPlane(char* newName);
	PassengerPlane(int newNumOfSeats);
	PassengerPlane(char* newName, int newNumOfSeats);
	~PassengerPlane();
	void setNumOfSeats(int newNumOfSeats);
	int getNumOfSeats();
	virtual void move();
private:
	int numOfSeats;
};