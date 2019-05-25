#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(const string &name, const string &address, int age);
	~Person(void) {};

	string Name();
	string Address();
	int Age();

private:
	int age_;
	string name_;
	string address_;
};