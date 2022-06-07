#include "Employee.h"

string Employee::getName() {
	return name;
}
void Employee::setName(string str) {
	name = str;
}

void Head::setQuest(int quest)
{
	this->quest = quest;
}
int Head::getQuest()
{
	return quest;
}

Worker::Worker(string i) {
	setName(i);
}
void Worker::setWork() {
	work = true;
}
void Worker::setType(Type t) {
	type = t;
}
bool Worker::getWork() {
	return work;
}