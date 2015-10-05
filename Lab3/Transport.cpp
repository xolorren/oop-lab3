#include "stdafx.h"

int Transport::id = 0;
Transport* Transport::firstElement = NULL;
Transport* Transport::lastElement = NULL;


Transport::Transport(){
	this->name = "Undefined";
	this->id++;
	if (firstElement == NULL) {
		firstElement = this;
		lastElement = this;
		nextElement = NULL;
		prevElement = NULL;
	}
	else {
		prevElement = lastElement;
		prevElement->nextElement = this;
		nextElement = NULL;
		lastElement = this;
	}
	std::cout << "Transport was created\n";
}

Transport::Transport(char* newName){
	this->name = newName;
	this->id++;
	if (firstElement == NULL) {
		firstElement = this;
		lastElement = this;
		nextElement = NULL;
		prevElement = NULL;
	}
	else {
		prevElement = lastElement;
		prevElement->nextElement = this;
		nextElement = NULL;
		lastElement = this;
	}
	std::cout << "Transport was created\n";
}

Transport::~Transport(){
	if (this == firstElement){
		firstElement = nextElement;
		if (nextElement) nextElement->prevElement = NULL;
	}
	else if (this == lastElement){
		prevElement->nextElement = NULL;
		lastElement = prevElement;
	}
	else{
		prevElement->nextElement = nextElement;
		nextElement->prevElement = prevElement;
	}
	if (!strcmp(this->name,"Undfined")){
		delete this->name;
	}
	std::cout << "Transport was destroyed\n";
}

void Transport::setId(int newId){
	this->id = newId;
}

void Transport::setName(char* newName){
	delete this->name;
	this->name = newName;
}

int Transport::getId(){
	return this->id;
}

char* Transport::getName(){
	return this->name;
}

void Transport::showListOfELements(){
	Transport* t = firstElement;
	std::cout << '\n';
	while (t){
		std::cout << t->name;
		if (t != lastElement) std::cout << " -> ";
		t = t->nextElement;
	}
	std::cout << "\n\n";
}