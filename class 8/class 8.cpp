
#include <iostream>
using namespace std;
struct student 
{
	string  name;
	int age;
	int id;

};
class first_phase
{
	student ss1;

public:

	first_phase()
	{

		ss1.name = "souifer";
		ss1.age = 19;
		ss1.id = 23;



	}

	void SHOW();



};

void first_phase::SHOW()
{

	cout << " the name is  : " << ss1.name << endl;
	cout << " the age is :  " << ss1.age << endl;
	cout << "the id is  : " << ss1.id << endl;

}
int main()
{
	first_phase ff;
	ff.SHOW();
	return 0;
}

