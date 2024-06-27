#include <iostream>
#include <string>
using namespace std;
class Exception {
private:
    string errorMessage;
public:
    Exception(string message) : errorMessage(message) {}
    string getMessage(){
        return errorMessage;
    }
};

int main() {
    try {
        throw Exception("Try block throws an object of Exception class.");
    } catch (Exception e) {
        cerr << "Caught exception: " << e.getMessage() << endl;
    }
    return 0;
}