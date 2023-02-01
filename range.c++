#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numbers[] = {16, 18, 9, 21, 32, 5, 56, 34, 7, 10};
    int max = numbers[0];
    int min = numbers[0];
    int diff;

    int numbersLength = sizeof(numbers) / sizeof(int);
    

    for (int i = 0; i < numbersLength; i++)
    {
        if (numbers[i] >= max)
        {
            max = numbers[i];
        }

        if (numbers[i] <= min)
        {
            min = numbers[i];
        }
        diff = max - min;
        
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
    cout << "Range : " << diff;
}