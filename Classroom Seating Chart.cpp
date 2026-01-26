#include <iostream>
using namespace std;

static const int max_row = 3;
static const int max_col = 4;

void read_arr(int seat[][max_col], int max_row);
void display_arr(int seat[][max_col], int max_row);

int main()
{
    int seat[max_row][max_col];
    read_arr(seat, max_row);
    cout << endl << endl;
    display_arr(seat, max_row);

    return 0;
}

void read_arr(int seat[][max_col], int max_row)
{
    cout << "Enter roll numbers for a 3x4 seating chart: " << endl;
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << "Seat [" << row << "][" << col << "]: ";
            cin >> seat[row][col];
        }
    }
}

void display_arr(int seat[][max_col], int max_row)
{
    cout << "Seating chart: " << endl;
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << seat[row][col] << "\t";
        }
        cout << endl;
    }
}