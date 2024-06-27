#include<iostream>
using namespace std;
struct complexNo{
	int real;
	int img;
};
complexNo read(complexNo no)
{
	cout << "  Real part: ";
	cin >> no.real;
	cout << "  Imaginary part: ";
	cin >> no.img;
	return no;
}
void write(complexNo no)
{
	cout << no.real << " + " << no.img << "i" << endl;
}
void add_sub(complexNo no1, complexNo no2)
{
	cout << "Addition: " << no1.real+no2.real << " + " << no1.img+no2.img << "i" << endl;
	cout << "Difference: " << no1.real-no2.real << " + " << no1.img-no2.img  << "i" << endl;
}
void mul(complexNo no1, complexNo no2)
{
	cout << "Product: " << no1.real*no2.real << " + " << no1.img*no2.img << "i" << endl;
}
int main()
{
	complexNo n;
	cout << "Enter first complex number" << endl;
	complexNo num1 = read(n);
	cout << "Enter second complex number" << endl;
	complexNo num2 = read(n);
	cout <<"First complex no: ";
	write(num1);
	cout <<"Second complex no: ";
	write(num2);
	add_sub(num1,num2);
	mul(num1,num2);
}
