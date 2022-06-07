#pragma once
#include <string>
#include <iostream>
#include <random>
using namespace std;
enum Type {
	A,
	B,
	C
};

class Employee
{
	string name;
public:
	string getName();
	void setName(string str);
};

class Head :public Employee {
	int quest;
public:
	void setQuest(int quest);
	int getQuest();
};

class Manager :public Employee {
public:
	int questcount = 0;
};

class Worker :public Employee {
	bool work = false;
	Type type; 
public:
	Worker(string i);
	void setWork();
	void setType(Type t);
	bool getWork();
};