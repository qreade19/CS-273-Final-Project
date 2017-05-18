#include "Patients.h"
#include "Random.h"
#include <iostream>

Random my_random;

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
		int prob = my_random.zero_to_n(10);
		if (prob <= 6)
		{
			priority = my_random.zero_to_n(10) + 1;
		}
		else if (6 < prob && prob <= 8)
		{
			priority = my_random.zero_to_n(5) + 11;
		}
		else
		{
			priority = my_random.zero_to_n(5) + 16;
		}
	}
	int Patient::get_priority()
	{
		return priority;
	}

