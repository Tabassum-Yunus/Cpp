#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
    int i;
    string text, myText, tText;
    cout << "Enter text to write to file: ";
    getline(cin, text);
    ofstream MyFile("aa.txt");
    MyFile << text;
    MyFile.close();
    cout << "Text written to file successfully." << endl;
    ifstream MyReadFile("aa.txt");
    while (getline (MyReadFile, myText)) {
        tText = myText;
    }
    
    cout << "No. of characters in file: " << tText.length();
    MyFile.close();
}