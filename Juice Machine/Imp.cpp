//**********************************************
//Implemintation file Header.h
//This file contains the definitions of the functions to 
//implement the operations of the classes cashRegister and
//dispinserType
//**********************************************

#include<iostream>
#include"Header.h"
using namespace std;

int casheRegister::getCurrentBalnce()const {

	return cashOnHand;
}

void casheRegister::acceptAmount(int amaountIn) {

	cashOnHand += amaountIn;
}

casheRegister::casheRegister(int cashIn) {

	if (cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}

//dispinserType Imp
int dispinserType::getNoOfItems()const {

	return numberOfItems;
}

int dispinserType::getCost()const {

	return cost;
}

void dispinserType::makeSale() {
	
	numberOfItems--;
}

dispinserType::dispinserType(int NoOfItems, int setCosts) {

	if (NoOfItems >= 0)
		numberOfItems = NoOfItems;
	else
		numberOfItems = 50;

	if (setCosts >= 0)
		cost = setCosts;
	else
	   cost = 50;
}