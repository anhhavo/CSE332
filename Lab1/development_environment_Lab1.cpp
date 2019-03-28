// development_environment_Lab1.cpp : Defines the entry point for the console application.
// Anh Vo (ahvo@wustl.edu)	
// Lab_1

#include "stdafx.h"
#include "Lab1.h"
#include <iostream>
#include <fstream>	
#include <sstream>	
#include <string>
#include <vector>



int usageMessage(char * c)
{
	cout << "usage: " << c << " <input_file_name>" << endl;
	return Wrong;
}


int parseString(vector<string> & v, char * c)
{
	ifstream ifstr(c);
	if (ifstr.is_open())
	{
		while (ifstr)
		{
			string s;
			ifstr >> s;
			if (s != "")
			{
				v.push_back(s);
			}
		}
		ifstr.close();

		if (v.size() == 0)
		{
			cout << "Error: file '" << c << "' is empty" << endl;
			return File_is_empty;
		}
		else
		{
			return Success;
		}
	}
	else
	{
		cout << "Error: file cannot open '" << c << "'" << endl;
		return File_cannot_open;
	}
}


using namespace std;
	int main(int argc, char * argv[])
	{
		if (argc == EXPECTED_ARG_NUM)
		{
			vector<string> strVtr;
			int returnValue = parseString(strVtr, argv[Input_file]);
			if (returnValue != Success)
			{
				return returnValue;
			}
			vector<int> intVtr;
			for (size_t s = 0; s < strVtr.size(); ++s)
			{
				string str = strVtr[s];
				size_t count = 0;

				for (size_t c = 0; c < str.length(); ++c)
				{
					if (isdigit(str[c]))
					{
						++count;
					}
				}

				if (count == str.length())
				{
					int intString;
					istringstream iss(str);
					iss >> intString;
					intVtr.push_back(intString);
				}
				else
				{
					cout << str << endl;
				}
			}
			for (size_t i = 0; i < intVtr.size(); ++i)
			{
				cout << intVtr[i] << endl;
			}

			return Success;
		}
		else 
		{
			return usageMessage(argv[Program]);
		}
	}

