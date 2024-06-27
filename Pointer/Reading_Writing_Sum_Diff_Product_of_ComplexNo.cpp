#include<iostream>
using namespace std;
int* read_complex(int a[])
{
	cout << "Enter real part of complex no.: ";
	cin >> a[0];
	cout << "Enter imaginary part of complex no.: ";
	cin >> a[1];
	return a;
}
void write_complex(int *ptr)
{
	cout << ptr[0] << " + " << ptr[1] << "i" << endl;
}
void add_sub(int *ptr1, int *ptr2)
{
	cout << "Addition: " << ptr1[0]+ptr2[0] << " + " << ptr1[1]+ptr2[1] << "i" << endl;
	cout << "Difference: " << ptr1[0]-ptr2[0] << " + " << ptr1[1]-ptr2[1] << "i" << endl;
}
void mul(int *ptr1, int *ptr2)
{
	cout << "Addition: " << ptr1[0]*ptr2[0] << " + " << ptr1[1]*ptr2[1] << "i";
}
int main()
{
	int c1[2], c2[2], *ptr1, *ptr2;
	cout << "Enter first complex number" << endl;
	ptr1 = read_complex(c1);
	cout << "Enter second complex number" << endl;
	ptr2 = read_complex(c2);
	cout <<" First complex no: ";
	write_complex(ptr1);
	cout <<" Second complex no: ";
	write_complex(ptr2);
	add_sub(ptr1, ptr2);
	mul(ptr1, ptr2);
}