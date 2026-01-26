#include <iostream>
using namespace std;

int main()
{
    const int cashiers = 3;
    const int days = 4;
    int sales[cashiers][days];

    for (int row = 0; row < cashiers; row++)
    {
        cout << "Cashier " << row + 1 << " sales: " << endl;
        for (int col = 0; col < days; col++)
        {
            cout << "Day " << col + 1 << ": ";
            cin >> sales[row][col];
        }
    }

    cout << endl << endl;

    for (int row = 0; row < cashiers; row++)
    {
        int total = 0;
        int max_sale = sales[row][0];
        int best_day = 0;

        for (int col = 0; col < days; col++)
        {
            total += sales[row][col];

            if (sales[row][col] > max_sale)
            {
                max_sale = sales[row][col];
                best_day = col + 1;
            }
        }
        
        cout << "Cashier " << row + 1 << " total: " << total << endl;
        cout << "Cashier " << row + 1 << " best day: " << best_day << " (" << max_sale << ")" << endl;
    }
}
