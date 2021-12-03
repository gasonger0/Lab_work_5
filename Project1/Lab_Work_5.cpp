/* fig.:Lab_work_5.cpp **********************************************/
/********************************************************************/
/* Filename:Lab_work_5.cpp ******************************************/
/* Abstract: Sample C++ - program ***********************************/
/* Description: program does string-manipulations********************/
/* Version:1.0 ******************************************************/
/* Creation Date: 29.11.2021 ****************************************/
/* Author: Mikhail Kuznetsov ****************************************/
/********************************************************************/

#include <fcntl.h>
#include <iostream>
#include <fstream>
#include <wchar.h>
#include <windows.h>


int main() {
	char table[] =
		"***********************************************************\n"
		"********* Nizhniy Novgorod Technical University ***********\n"
		"*********Study work number 5. Task number 1. **************\n"
		"********Performed student 21-IVT-3 Kuznetsov M. A.*********\n"
		"***********************************************************\n";
	char x[] = " ";
	char y[] = "\n";
	char str[300000];
	int counter{ 0 };

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	std::cout << table;

	std::ifstream start("in.txt");
	start.getline(str, 300000);
	start.close();

	std::ofstream end("out.txt");
	
	for (int i = 0; i <= strlen(str); i++) {
		counter +=1;
		if (counter % 50 == 0) {
			for (int j = counter; j > (counter - 50); --j) {
				if (str[j] == *x) {
					str[j] = *y;
					break;
				}
			}
		}
	}
	
	end << str;
	end.close();
	return 0;
}


