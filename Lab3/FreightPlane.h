#pragma once
#include "stdafx.h"

class FreightPlane : public Transport{
	public:
		FreightPlane();
		FreightPlane(char* newName);
		FreightPlane(int newCapacity);
		FreightPlane(char* newName, int newCapacity);
		~FreightPlane();
		void setCapacity(int newCapacity);
		int getCapacity();
		virtual void move();
	private:
		int capacity;
};