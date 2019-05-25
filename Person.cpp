#include "Person.h"
using namespace std;

Person::Person()
{
	 age_ = 20;
	 name_ = "Anun";
	 address_ = "Yerevan";
}

Person::Person(const string &name, const string &address, int age)
{
	age_ = 20;
	name_ = "Anun";
	address_ = "Yerevan";
}

string Person::Name()
{
	return name_;
}

string Person::Address()
{
	return address_;
}

int Person::Age()
{
	return age_;
}
