#include<iostream>
using namespace std;
class myClass{
	private:
		int no, *ptr = &no;
	public:
		void set_no(int no)
		{
			this->no = no;
		}
		int* func()
		{
			return &(this->no);
		}
};
int main()
{
	myClass mC;
	mC.set_no(10);
	cout << "Pointer reference is : " << mC.func();
}