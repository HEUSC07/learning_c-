/* Erickson Bequillo
     Grading system*/

#include <iostream>

using namespace std;

int main()
{
    float math, science, filipino, english, average;

    cout << "\tEnter your grade in Math: ";
    cin >> math;

    cout << "\tEnter your grade in Science: ";
    cin >> science;

    cout << "\tEnter your grade in Filipino: ";
    cin >> filipino;

    cout << "\tEnter your grade in English: ";
    cin >> english;

    system("clear");

    average = (math + science + filipino + english) / 4;

    cout << "\t" << average;

    if (average >= 98 && average <= 100)
    {
        cout << " Highest Honor";
    }
    else if (average >= 95 && average < 98)
    {
        cout << " Higher Honor";
    }
    else if (average >= 90 && average < 95)
    {
        cout << " High Honor";
    }
    else if (average >= 75 && average < 90)
    {
        cout << " Passed";
    }
    else if (average >= 0 && average < 75)
    {
        cout << " Failed";
    }
    else
    {
        cout << " out of range";
    }

    return 0;
}