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
		string arg3;
		string arg4;
		cout << ">";
		cin >> input;

		if (input == "cls") {
			system("cls");
		}
		if (input == "start") {
			cout << "starting ...";

			




		}
		if (input == "config1") {
			cout << "select a element to place\n";
			cout << "1:button, 2:text, 3:button_port, 4:holodisk\n";
			cout << ">";
			cin >> input;
			if (input == "1") {
				cout << "button text:";
				cin >> arg1;
				cout << "text it links to:";
				cin >> arg2;

			}
			if (input == "2") {
				cout << "text:";
				cin >> arg1;
			}
			if (input == "3") {
				cout << "button text:";
				cin >> arg1;
				cout << "COM:";
				cin >> arg2;
				cout << "BAUD:";
				cin >> arg3;
				cout << "DATA:";
				cin >> arg4;
			}
			if (input == "4") {
				//opens a cpp file that allows loading programs WIP

			}
		}
		if (input == "config2") {

		}
		if (input == "config3") {

		}
		if (input == "config4") {

		}
		if (input == "help") {

		}

		cout << output;
		cout << "\n";
	}
	return 0;
}
