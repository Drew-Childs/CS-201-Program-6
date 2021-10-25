#include "Header.h"

Queue::Queue() {
	id.name = "";
	id.model = "";
	id.plate = "";
}

int Queue::menu() {
	int option;
	cout << "Please enter your choice:" << endl;
	cout << "1.) Add Car" << endl;
	cout << "2.) Add VIP Car" << endl;
	cout << "3.) Take Car to Auction" << endl;
	cout << "4.) Cancel Car" << endl;
	cout << "5.) List all currently queued Cars" << endl;
	cout << "6.) Exit back to main menu" << endl;
	
	cout << "Please enter your choice:" << endl;
	cin >> option;

	return option;
}