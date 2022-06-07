#pragma once
#include "Employee.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
class Team {
public:
	Manager manager;
	vector <Worker> workers;
	
	Team(int i);
	void setWork(int n);
	bool full();

};
class Company
{
	Head head;
	vector <Team> teams;
public:
	void start();

};

