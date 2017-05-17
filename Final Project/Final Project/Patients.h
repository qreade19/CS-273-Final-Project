#define PATIENTS_H
#ifdef PATIENTS_H
#include <string>
using namespace std;


class Patient
{
private:
	string name;
	int priority;
public:
	Patient()
	{
		name = "";
		priority = NULL;
	}
	Patient(string NM)
	{
		name = NM;
	}
	void set_name(string namefr);
	string getname();
	void triage();
	int get_priority();
};

#endif
