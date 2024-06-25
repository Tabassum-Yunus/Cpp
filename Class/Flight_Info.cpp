#include<iostream>
using namespace std;
class flight{
	private:
		string flight_no;
		string source;
		string destination;
		int fare;
	public:
		void set_flight_info(string flight_no, string source, string destination, int fare)
		{
			this->flight_no = flight_no;
			this->source = source;
			this->destination = destination;
			this->fare = fare;
		}
		void flight_info()
		{
			cout << "     FLIGHT INFORMATION" << endl;
			cout << "Flight no.:  " << this->flight_no << endl;
			cout << "Source:  " << this->source << endl;
			cout << "Destination:  " << this->destination << endl;
			cout << "Fare:  " << this->fare << endl;
		}
};

int main()
{
	flight flight1;
	flight1.set_flight_info("ABC1", "Delhi", "Mumbai", 18000);
	flight1.flight_info();
	return 0;
}
