===========================================================================
    CONSOLE APPLICATION : development_environment_Lab1 Project Overview
===========================================================================

Name : Anh Ha Vo  -  ahvo@wustl.edu	  -  465820
===== File List ===========================================================
development_environment_Lab1.cpp: main application source file
	- int usageMessage(char * c): prints out the "usage message"	
	- int parseString(vector<string> & v, char * c): parses the input file

Lab1.h: header file
===== Errors & Warnings ===================================================
===== Cases & Results =====================================================
(1) Lab1 (only one command line argument)
	=> usage: development_environment_Lab1.exe <input_file_name>
(2) Lab1 empty.txt (empty input file name)
	=> error: file 'empty.txt' is empty
	=> 3
(3) Lab1 input.txt ("success")
	=> string7
		yes
		hello
		asdqwe
		187
	=> 0
(4) Lab1 none.txt (no input file)
	=> error: cannot open file 'none.txt'
	=> 2