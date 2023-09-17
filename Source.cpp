#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {

	printf("robco logo does not work rn\n");
	
	while (true) {
		string input;
		string output;
		string arg1;
		string arg2;
		cout << ">";
		cin >> input;

		if (input == "cls") {
			system("cls");
		}
		if (input == "run") {
			cout << "module:";
			cin >> arg1;
			cout << "arg:";
			cin >> arg2;


		}
		if (input == "") {

		}
		if (input == "") {

		}
		if (input == "") {

		}
		if (input == "") {

		}

		cout << output;
		cout << "\n";
	}
	return 0;
}
