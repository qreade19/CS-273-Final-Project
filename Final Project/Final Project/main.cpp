#include <iostream>
#include <string>
#include <list>
#include <queue>
#include <vector>
#include <fstream>
#include <map>

#include "Patients.h"
#include "Hospital.h"

void creation(Patient all_patients[2000])
{
	int n = 0;
	string filename = "C:\\Users\\swescott17\\Documents\\residents_of_273ville.txt";
	string line;
	ifstream myfile(filename);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			all_patients[n].set_name(line);
			n++;
		}
		myfile.close();
	}
	else
		cout << "Unable to open file" << endl;
}


int main()
{
	Patient all_patients[2000];
	creation(all_patients); //creates all the names
							//randomizing function
	Hospital hospital;
	hospital.create_waiting();
	for (int i = 0; i < 6; i++)
	{
		all_patients[i].triage();
		hospital.add_patient(all_patients[i].get_priority(), all_patients[i]);
		hospital.check_list(all_patients[i].get_priority());
	}
	for (int k = 0; k < 6; k++)
	{
		hospital.remove_patient(5);
		hospital.check_list(5);
	}
	hospital.records_now();
}