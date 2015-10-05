#pragma once
#include "stdafx.h"

class MilitaryPlane : public Transport{
public:
	MilitaryPlane();
	MilitaryPlane(char* newName);
	MilitaryPlane(int newNumOfMissles);
	MilitaryPlane(char* newName, int newNumOfMissles);
	~MilitaryPlane();
	void setNumOfMissles(int newNumOfMissles);
	int getNumOfMissles();
	virtual void move();
	private:
		int numOfMissles;
};