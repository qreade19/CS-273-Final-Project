#ifndef HOSPITAL_H
#define HOSPITAL_H


#include "Patients.h"
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;

class Hospital
{
private:
	int clock;
	vector<list<Patient>> waiting_room;
	list<Patient> priority[20];
	map<string, int> records;
	//how to implement the emergency room?
	//probably do not need list

public:
	Hospital()
	{
		clock = 0;
	}
	void create_waiting(); //creates the waiting room
	void add_patient(int priority, Patient Pat); //adds a patient to the waiting room by priority
	void remove_patient(int priority);//removes a patient based on that priority
	void check_list(int priority);
	void records_now();

};
#endif 

