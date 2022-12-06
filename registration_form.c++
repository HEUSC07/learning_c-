/*Erickson L. Bequillo
    Registration form*/
    
#include<iostream>
#include<string>

using namespace std;

int main() {
    string name,address,email,citizenship,fatherName,motherName,contactNo;
    int age;
    
    cout << "ENTER YOUR NAME:    ";
    getline (cin , name);
    
    cout << "HOW OLD ARE YOU?    ";
    cin >> age;
    
    cout << "WHERE DO YOU LIVE?    ";
    cin >> address;
    
    cout << "ENTER YOUR CONTACT NO:  ";
    cin >> contactNo;
    
    cout << "WHAT IS YOUR CITIZENSHIP: ";
    cin >> citizenship;
    
    cin.ignore();
    
    cout << "WHAT IS YOUR FATHER'S NAME:    ";
    getline ( cin , fatherName);
    
    cout << "WHAT IS YOUR MOTHER'S NAME:    ";
    getline ( cin , motherName);
    
    system("clear");
    
    cout<<"************************************************************\n";
    cout<<"                       Information form     \n";
    cout<<"************************************************************\n\n";
    
    cout << "NAME:  "<< name << endl;
    cout << "AGE:  " << age << endl;
    cout << "ADDRESS:  " << address << endl;
    cout << "CONTACT NO:  " << contactNo << endl;
    cout << "CITIZENSHIP:  " << citizenship << endl;
    cout << "FATHER'S NAME:  " << fatherName << endl;
    cout << "MOTHER'S NAME:  " << motherName << endl;
    
    return 0;
}
    