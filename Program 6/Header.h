#pragma once
#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Car {
	string name, model, plate;
};

class Queue {

public:
	Queue();
	int menu();

private:
	Car id;
};