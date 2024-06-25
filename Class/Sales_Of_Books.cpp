#include <iostream>
#include <string>
using namespace std;
class Publication {
protected:
    string title;
    string writer;
public:
    void display() {
        cout << "Title: " << title << endl << "Writer: " << writer << endl;
    }
};

class Sales : Publication {
private:
    int monthlySales[3];
public:
    Sales(string title, string writer, int* sales)
    {
        this->title = title;
        this->writer = writer;
        for (int i = 0; i < 3; i++) {
            monthlySales[i] = sales[i];
        }
    }
    int calculateTotalSales() {
        int totalSales = 0;
        for (int i = 0; i < 3; ++i) {
            totalSales += monthlySales[i];
        }
        return totalSales;
    }

    void displaySales(){
        display();
        cout << "Monthly Sales: ";
        for (int i = 0; i < 3; ++i) {
            cout << monthlySales[i] << " ";
        }
        cout << endl;
        cout << "Total Sales: " << calculateTotalSales() << endl;
    }
};

int main() {
    int salesData[3] = {2500, 1500, 900};
    Sales s("Programming in C++", "Balaguru Swamy", salesData);
    s.displaySales();
    return 0;
}