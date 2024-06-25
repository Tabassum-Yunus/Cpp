#include<iostream>
using namespace std;
class pntr_obj{
	private:
		int no1;
		int no2;
	public:
	    void set(int no1,int no2)
	    {
	        this->no1 = no1;
	        this->no2 = no2;
	    }
		int greatest()
		{
			if(this->no1 > this->no2)
				return no1;
			else
				return no2;
		}	
};

int main()
{
	pntr_obj obj;
	// cout << "Enter first number: ";
	// cin >> obj.no1;
	// cout << "Enter second number: ";
	// cin >> obj.no2;
	//int no = obj.greatest(obj.no1, obj.no2);
	//cout << "Greatest number among " << obj.no1 << " & " << obj.no2 << " is: " << no;
	
	obj.set(2,9);
	int no = obj.greatest();
	cout << no;
	return 0;
}