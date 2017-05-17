#include "Patients.h"
#include <iostream>

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
		priority = 5;
		//random
	}
	int Patient::get_priority()
	{
		return priority;
	}

