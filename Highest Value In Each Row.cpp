#include <iostream>
using namespace std;

static const int students = 3;
static const int subjects = 4;

int main()
{
    int marks[students][subjects];

    cout << "Enter the marks for 3 students: " << endl;
    for (int student = 0; student < students; student++)
    {
        cout << "Student " << student + 1 << ": " << endl;
        for (int subject = 0; subject < subjects; subject++)
        {
            cout << "\tSubject " << subject + 1 << ": ";
            cin >> marks[student][subject];
        }
    }

    cout << endl << endl;

    cout << "Highest mark for each student: " << endl;
    for (int student = 0; student < students; student++)
    {
        int max_val = marks[student][0];

        for (int subject = 0; subject < subjects; subject++)
        {
            if (marks[student][subject] > max_val)
            {
                max_val = marks[student][subject];
            }
        }
        cout << "Student " << student + 1 << " highest mark: " << max_val;
        cout << endl;
    }

    return 0;
}

