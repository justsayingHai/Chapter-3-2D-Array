#include <iostream>
using namespace std;

static const int cities = 3;
static const int days = 4;

int main()
{
    int temperature[cities][days];

    cout << "Enter temperatures for 3 cities over 4 days: " << endl;

    for (int row = 0; row < cities; row++)
    {
        cout << "City " << row + 1 << ": " << endl;
        for (int col = 0; col < days; col++)
        {
            cout << "\tDay " << col + 1 << ": ";
            cin >> temperature[row][col];
        }
    }

    cout << endl << endl;

    cout << "Temperature Table: " << endl;
    for (int row = 0; row < cities; row++)
    {
        for (int col = 0; col < days; col++)
        {
            cout << temperature[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
