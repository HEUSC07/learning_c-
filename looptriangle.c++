/* Erickson Bequillo
     Loop triangle*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the number of row: ";
    cin >> n;

    system("clear");

    for (i = 1; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}