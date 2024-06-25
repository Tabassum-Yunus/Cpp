#include<iostream>
using namespace std;
int main()
{
    int matrix1[2][2], matrix2[2][2], matrix[2][2]; 
    cout << "Enter elements of first 2x2 matrix: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of 2x2 second matrix: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "Addition of above matrices: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << matrix[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
}
