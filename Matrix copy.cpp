#include <iostream>
using namespace std;

static const int rows = 2;
static const int cols = 3;

int main()
{
    int table_A[rows][cols];
    int table_B[rows][cols];


    cout << "Enter values for matrix A (2x3): " << endl;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> table_A[row][col];
        }
    }

    cout << endl << endl;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            table_B[row][col] = table_A[row][col];
        }
    }

    cout << "Matrix B (copy of A): " << endl;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << table_B[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
