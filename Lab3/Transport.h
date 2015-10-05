#pragma once
#include "stdafx.h"

class Transport{
	public:
		Transport();
		Transport(char* newName);
		~Transport();
		virtual void move() = 0;
		void setName(char* newName);
		void setId(int newId);
		virtual char* getName();
		int getId();
		static void showListOfELements();
	private:
		static Transport* firstElement;
		static Transport* lastElement;
		static int id;
		char* name;
		Transport* prevElement;
		Transport* nextElement;
};