#include <iostream>
#include <string>
using namespace std;

int count_Occ(string& input, string& word) {
    int count = 0;
    int pos = 0;
    while ((pos = input.find(word, pos)) != string::npos) {
        if ((pos == 0 || input[pos - 1] == ' ') && 
            (pos + word.length() == input.length() || input[pos + word.length()] == ' ')) {
            count++;
        }
        pos += word.length();
    }
    return count;
}

int main() {
    string input;
    string word;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Enter the word to count: ";
    cin >> word;
    int occ = count_Occ(input, word);
    cout << "Number of occurrences of \"" << word << "\": " << occ << std::endl;
    return 0;
}






// #include <iostream>
// using namespace std;
// void splitWord(string str)
// {
//     int occ=0, str_len = str.length();
//     string word = "";
//     string to_find;
//     cout << "Enter word to find: ";
//     getline(cin,to_find);
//     for (int i = 0; i < str_len; i++) 
// 	{     
//         if (str[i] == ' ' or i == (str_len - 1))
// 		{
//             //cout << word + str[i]<< endl;
//             if(word == to_find)
//                 occ++;
//             word = "";  
//         }
//         else
//             word += str[i];
//     }
//     cout << "Number of occurrences of \"" << to_find << "\": " << occ;
// }

// int main()
// {
//     string str, fin;
//     cout << "Enter any string: ";
//     getline(cin,str);
//     splitWord(str);
//     return 0;
// }









//  #include <iostream>
//  using namespace std;
// void splitWord(string str, string to_find)
// {
// 	string word="";
// 	int occ=0, len=str.length();
// 	for (int i = 0; i < len; i++)
// 	{
// 		if((str[i]==' ') || (i==len-1))
// 		{
// 			if (word == to_find)
// 				occ++;
// 			word="";
// 		}
// 		else
// 			word += str[i];
// 	}
// 	cout << "No. of occurence of \"" << to_find << "\": " << occ;
// }

// int main()
// {
//     string str, fin;
//     cout << "Enter any string: ";
//     getline(cin,str);
// 	cout << "Enter to find: ";
//     cin >> fin;
//     splitWord(str, fin);
//     return 0;
// }