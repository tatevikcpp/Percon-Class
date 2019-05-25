#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Person usanox;

	cout << "Name usanox is " << usanox.Name() << endl;
	cout << "Address is  " << usanox.Address() << endl;
	cout << "Age is " << usanox.Age() << endl;

	system("pause");
}