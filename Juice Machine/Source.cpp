#include<iostream>
#include"Header.h"

using namespace std;

void showSelection();
void sellProducts(dispinserType &product, casheRegister& pCounter);


int main() {

	casheRegister counter;
	dispinserType orange(100, 50);
	dispinserType apple(100, 65);
	dispinserType mango(75, 80);
	dispinserType strawberryBanana(100, 85);

	int choise = 0; //var to hold selction
	showSelection();
	cin >> choise;

	while (choise!=9){

		switch (choise){
		case 1:
			sellProducts(orange, counter);
			break;
		case 2:
			sellProducts(apple, counter);
			break;
		case 3:
			sellProducts(mango, counter);
			break;
		case 4:
			sellProducts(strawberryBanana, counter);
			break;
		default:
			cout << "Invalid Selection. " << endl;
		}//end switch
		showSelection();
		cin >> choise;
	}//end while
	return 0;
}//end main

void showSelection() {

	cout << "*** Welcome to Suhaib's Juice Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for orange juice(50 cents) \n";
	cout << "2 for apple juice(65 cents) \n";
	cout << "3 for mango juice(80 cents) \n";
	cout << "4 for strawberry banan juice(85 cents) \n";
	cout << "9 to exit\n";

}//end showSelections

void sellProducts(dispinserType& product, casheRegister& pCounter) {

	int amount=0;   //var to hold the amount entered
	int amount2=0;  //var to hold the extra amount needed

	if (product.getNoOfItems() > 0) {

		cout << "Please deposit " << product.getCost()
			<< "cnts\n";
		cin >> amount;
		amount = amount;

		if (amount < product.getCost()) {

			cout << "Please deposit another "
				<< product.getCost() - amount
				<< "cents\n";
			cin >> amount2;

			amount = amount + amount2;
		}

		if (amount >= product.getCost()) {

			pCounter.acceptAmount(amount);
			product.makeSale();
			cout << "Collect your item at the bottom and "
				<< "enjoy.\n";
		}

		else
			cout << "The amount is not enough. "
			<< "Collect what you deposited.\n";

		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";

	}

	else
		cout << "Sorry, this item si sold out." << endl;


}