// task-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f1;
	string name;
	int age;
	f1.open("details.txt", ios::out);   // opening file in write mode
	cout << "\n Writing to the file" << endl;
	cout << "\n Enter your name: ";
	getline(cin,name);    // writing name to the file
	cout << "\n Enter age: ";     
	cin >> age;
	f1 >> age;     // writing age to the file
	f1.close();    // closing the file
	cout << "\n Reading from the file: ";
	f1.open("details.txt", ios::in);    // opening file in read mode
		getline(f1, name);
		f1 << age;
	f1.close();   // closing the file
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
