#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
    string text, myText, tText;
    cout << "Enter text to write to file: ";
    getline(cin, text);
    
  // Create and open a text file
  ofstream MyFile("aa.txt");

  // Write to the file
  MyFile << text;
  MyFile.close();
    cout << "Text written to file successfully." << endl;
    ifstream MyReadFile("aa.txt");
    while (getline (MyReadFile, myText)) {
        tText = myText;
    }
    cout << "Content of file: " << tText << endl;
    cout << "Content of file in reverse order: ";
    for(int i=tText.length(); i>=0; i--)
        cout << tText[i];
  MyFile.close();
}