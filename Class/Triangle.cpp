#include<iostream>
#include<cmath>
using namespace std;
class Triangle{
    private:
        float base, height;
    public:
        Triangle(float base, float height)
        {
            this->base = base;
            this->height = height;
        }
        float hypo()
        {
            float hyp;
            hyp = sqrt(pow(base,2) + pow(height,2));
            return hyp;
        }
        float area()
        {
            return (0.5*base*height);
        }
};
int main()
{
    float b,h;
    cout << "Enter base of tiangle: ";
    cin >> b;
    cout << "Enter height of tiangle: ";
    cin >> h;
    Triangle t(b,h);
    cout << "Hypotenuse of triangle is: " << t.hypo() << endl;
    cout << "Area of triangle is: " << t.area();
}