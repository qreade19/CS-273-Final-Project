#define PATIENTS_H
#ifdef PATIENTS_H
#include "Patients.h"

	void Patient::set_name(string namefr)
	{
		name = namefr;
	}
	string Patient::getname()
	{
		return name;
	}
	void Patient::triage()
	{
		//random
	}
	int Patient::get_priority()
	{
		return priority;
	}

#endif