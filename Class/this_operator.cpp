#include<iostream>
using namespace std;
class pntr_obj{
	public:
		string name;
		int roll_no;
		void set_data(string name, int roll_no)
		{
			this->name = name;
			this->roll_no = roll_no;
		}
		void print()
		{
			cout << this->name <<" invoked pirnt function & its roll_no is " << this->roll_no << endl;
			
		}
};

int main()
{
	pntr_obj obj1, obj2, obj3;
	obj1.set_data("TABASSUM YUNUS", 23);
	obj1.print();
	
	obj2.name = "TABASSUM";
	obj2.set_data(obj2.name, 24);
	obj2.print();
	
	obj3.name = "TABBY";
	obj3.roll_no = 25;
	obj3.set_data(obj3.name, obj3.roll_no);
	obj3.print();
	return 0;
}