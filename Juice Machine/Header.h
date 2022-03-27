//*************************************************************
//Programmer : Suhaib Saifan 
//*************************************************************



//class cashRegister
//This class specifies the members to implement a cash register.

class casheRegister {

private:

	int cashOnHand;  //variable to store the cash in the register.

public:
	int getCurrentBalnce() const;
	//Function to show the current amount in the cash register.

	void acceptAmount(int amountIn);
	//Function to recive amount deposited by the customer
	//and update the amount in the register.

	casheRegister(int cashIn = 500);
	//Constructor
	//Sets the cash in the registers to a specific amount.

};


//class dispinserType
//This class specifies the members to implement a dispinser

class dispinserType {
private:

	int numberOfItems;  //variable to store the number of items in dispinser

	int cost;          //variable to store the cost of an item

public:

	int getNoOfItems() const;
	//Function to show the nymber of items in the machine

	int getCost() const;
	//Function to show the cost of an item

	void makeSale();
	//Function to reduce the number of items by one

	dispinserType(int setNoOfItems = 50, int setCost = 50);
	//sets the cost and number of items in the dispinser
	//to the value specified by the user
};

