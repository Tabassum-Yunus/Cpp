 #include <iostream>
 using namespace std;
void transpose(int a[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) 
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}



#include<iostream>
using namespace std;
void transpose(int matrix[][10],int rows, int cols)
{
    for(int i=0; i<cols; i++)
        {
            for(int j=0; j<rows; j++)
            {
                cout << matrix[j][i] << "  ";
            }
            cout << endl;
        }
}
int main()
{
    int rows,cols;
    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of coumns: ";
    cin >> cols;
    int matrix[10][10], temp;
        cout << "Enter " << rows*cols << " elements in matrix: ";
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols; j++)
            {
                cin >> matrix[i][j];
            }
        cout << "Entered matrix: " << endl;
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                cout << matrix[i][j] << "  ";
            }
            cout << endl;
        }
        cout << "Transpose of matrix: " << endl;
        transpose(matrix,rows,cols);
}