#include <iostream>
#include <string>

using namespace std;

class Bus
{
protected:
	string BusModel;
public:
	Bus() { BusModel = "Audi"; }
};

class Automobile
{
protected:
	string AutomobileModel;
public:
	Automobile() { AutomobileModel = "Hyundai"; }
};

class Bike
{
protected:
	string BikeModel;
public:
	Bike() { BikeModel = "Honda"; }
};

struct Vehicle : public Bus, public Automobile, public Bike
{
	void printModels()
	{
		cout << "Model of the bus - " << BusModel << endl;
		cout << "Model of the automobile - " << AutomobileModel << endl;
		cout << "Model of the bike - " << BikeModel << endl;
	}
	~Vehicle() {}
};

int main()
{
	Vehicle vehicles;
	vehicles.printModels();
	system ("pause");
	return 0;
}
