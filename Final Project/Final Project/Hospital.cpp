#include "Hospital.h"
#include <iostream>
using namespace std;

	void Hospital::create_waiting() //creates the waiting room
	{
		//let all patients with a priority of n go into priority[20-n]
		for (int i = 0; i < 20; i++)
		{
			waiting_room.push_back(priority[i]);
		}
	}

	void Hospital::add_patient(int priority, Patient Pat) //adds a patient to the waiting room by priority
	{
		//search the priority in vector
		//access that list
		//add to list
		waiting_room[20 - priority].push_back(Pat);
	}
	void Hospital::remove_patient(int priority) //removes a patient based on that priority
	{
		Patient Pat = waiting_room[20 - priority].front();
		//add to records
		records.insert(make_pair(Pat.getname(), priority)); //will it be able to keep the priority if it is done this way?
		waiting_room[20 - priority].pop_front();
	}
	void Hospital::check_list(int priority)
	{
		if (waiting_room[20 - priority].empty())
		{
			cout << "Empty." << endl;
		}
		else
		{
			cout << "Not empty" << endl;
		}
	}

	void Hospital::records_now()
	{
		for (map<string, int>::const_iterator it = records.begin(); it != records.end(); ++it)
		{
			cout << it->first << ": " << it->second << endl;
		}
	}
