// Anh Vo (ahvo@wustl.edu)	
// Lab_1

#pragma once

#ifndef Lab1_H
#define Lab1_H
#include <string>
#include <vector>

using namespace std;
enum Array_Indices { Program, Input_file };
#define EXPECTED_ARG_NUM 2
enum Errors { File_is_empty, File_cannot_open, Success, Wrong };



int parseString(vector<string> &, char *);
int usageMessage(char *);

#endif