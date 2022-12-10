#include<iostream>

using namespace std;

int main() 
{
   int C,F;
   cout << " Enter the value of temperature in Fahrenheit: ";
   cin >> F;
   
   system ("clear");
   
   C = (F-32)*5/9;
   
   cout << F << " ⁰F equal to " << C << "⁰C";
   
   return 0;
}