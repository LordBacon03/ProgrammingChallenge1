#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
	string name;
	ifstream in;
	in.open("Example.csv");
	getline(in, name); //getline takes the entire row of the .csv file
	cout << name;
	in >> name; //cin or in, gets the first part of the cell
	cout << name;
	//Problem: How do we read only one cell from the file

	return 0;
}
