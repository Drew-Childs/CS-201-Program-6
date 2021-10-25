#include "Header.h"

int main() {
	queue<Queue> New;
	queue<Queue> Old;
	queue<Queue> Luxury;
	int option1, option2;

	cout << "Welcome to Mercedes:" << endl;
	cout << "1.) New Cars" << endl;
	cout << "2.) Old and historical cars" << endl;
	cout << "3.) Luxury cars" << endl;
	cout << "4.) Exit" << endl;
	
	cout << "Please enter your choice" << endl;
	cin >> option1;

	switch (option1)
	{
	case 1:
		option2 = New.front().menu();
		break;
	case 2:
		option2 = Old.front().menu();
		break;
	case 3:
		option2 = Luxury.front().menu();
		break;
	case 4:
		break;
	default:
		break;
	}

	return 0;
}