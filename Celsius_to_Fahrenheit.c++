/* Erickson L. Bequillo
     Celsius to Fahrenheit */
     
#include<iostream>

using namespace std;

int main() 
{
   int C,F;
   cout << " Enter the value of temperature in Celsius: ";  
   cin >> C;
   
   system ("clear");
   
   F = (C*9/5)+32;
   
   cout << C << "⁰C is equal to " << F << "⁰F ";
   
   return 0;
}
     