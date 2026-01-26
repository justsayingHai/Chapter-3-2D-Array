#include <iostream>
using namespace std;

int main()
{
    static const int max_col = 3;
    static const int max_row = 3;
    int arr[max_row][max_col];
    
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}

