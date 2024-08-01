#include <bits/stdc++.h>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    if (grade < 25)
    {
        cout << "F";
    }
    else if (grade < 45 && grade >= 25)
    {
        cout << "E";
    }
    else if (grade < 50 && grade >= 49)
    {
        cout << "D";
    }
    else if (grade < 60 && grade >= 59)
    {
        cout << "C";
    }
    else if (grade < 80 && grade >= 60)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }
    return 0;
}