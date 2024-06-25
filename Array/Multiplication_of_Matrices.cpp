#include<iostream>
using namespace std;
int main()
{
    int row1,col1,row2,col2,sum,matrix1[2][2],matrix2[2][2],matrix[2][2]; 
    cout << "\nNOTE: For matrix multiplication, no of columns in the first matrix must be equal to the number of rows in the second matrix \n";
    cout << "\nEnter the number of rows in first matrix: ";
    cin >> row1;
    cout << "Enter the number of columns in first matrix: ";
    cin >> col1;
    cout << "Enter the number of rows in second matrix: ";
    cin >> row2;
    cout << "Enter the number of columns in second matrix: ";
    cin >> col2;
    if ( col1 != row2 )
        cout << "\nSORRY! Matrix multiplication is not possible.";
    else
    {
        cout << "Enter elements of first matrix: \n";
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col1; j++)
            {
                cin >> matrix1[i][j];
            }
        }
        cout << "Enter elements of second matrix: \n";
        for(int i=0; i<row2; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        cout << "Multiplication of above matrices: \n";
        for ( int i=0 ; i<row1 ; i++ )
        {
            for ( int j=0 ; j<col2 ; j++ )
            {
                for ( int k=0 ; k<row1  ; k++ )
                {
                    sum = sum + matrix1[i][k]*matrix2[k][j];
                }   
                matrix[i][j] = sum;
                sum = 0;
            }
        }
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout << matrix[i][j] << "  ";
            }
            cout << "\n";
        }
    }
    return 0;
}
