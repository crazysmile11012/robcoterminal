#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
int main() {
	bool argloop;
	string config1out;
	string config2out;
	string config3out;
	string config4out;

	string config1arg1;
	string config1arg2;
	string config1arg3;
	string config1arg4;

	string config2arg1;
	string config2arg2;
	string config2arg3;
	string config2arg4;

	string config3arg1;
	string config3arg2;
	string config3arg3;
	string config3arg4;

	string config4arg1;
	string config4arg2;
	string config4arg3;
	string config4arg4;


	string config1arg1a;
	string config1arg2a;
	string config1arg3a;
	string config1arg4a;

	string config2arg1a;
	string config2arg2a;
	string config2arg3a;
	string config2arg4a;

	string config3arg1a;
	string config3arg2a;
	string config3arg3a;
	string config3arg4a;

	string config4arg1a;
	string config4arg2a;
	string config4arg3a;
	string config4arg4a;

	argloop = true;
	string configout = "";
	printf("#####    #####   ###     #####  #####\n");
	printf("#   #    #   #   #   #   #      #   #\n");
	printf("# #      #   #   #  #    #      #   #\n");
	printf("#   #    #   #   #   #   #      #   #\n");
	printf("#    #   #####   ###     #####  #####\n");
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
		if (input == "reset"){
			//reset config
		}
		if (input == "load") {
			//load config
		}
		if (input == "save") {
			//save config
		}
		if (input == "start") {
			bool looping = true;
			while(looping==true) {
				system("cls");
				printf("#####    #####   ###     #####  #####\n");
				printf("#   #    #   #   #   #   #      #   #\n");
				printf("# #      #   #   #  #    #      #   #\n");
				printf("#   #    #   #   #   #   #      #   #\n");
				printf("#    #   #####   ###     #####  #####\n");
				int loopcounter = 0;
				//draw the elements specified in config1
				cout << "\n";
				if (config1out == "") {
					cout << "no config made";
				}
				else if (config1out == "1") {
					config1arg2a = config1arg2;
					//cout << config1arg2a;
					while(config1arg1.length() >= loopcounter){
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config1arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config1arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config1out == "2") {
					cout << config1arg1;
				}
				else if (config1out == "3") {
					while (config1arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config1arg1;
					cout << "||\n";
					int loopcounter = 0;
					cout << "===";
					while (config1arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config1out == "4") {
					//to be added
				}
				else {
					cout << "config err";

				}
				//draw the elements specified in config2
				cout << "\n";
				loopcounter = 0;
				if (config2out == "") {
					cout << "no config made";
				}
				else if (config2out == "1") {
					config2arg2a = config2arg2;
					while (config2arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config2arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config2arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config2out == "2") {
					cout << config2arg1;
				}
				else if (config2out == "3") {
					while (config2arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config2arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config2arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config2out == "4") {
					//to be added
				}
				else {
					cout << "config err";

				}
				//draw the elements specified in config3
				cout << "\n";
				loopcounter = 0;
				if (config3out == "") {
					cout << "no config made";
				}
				else if (config3out == "1") {
					config3arg2a = config3arg2;
					while (config3arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config3arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config3arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config3out == "2") {
					cout << config3arg1;
				}
				else if (config3out == "3") {
					while (config3arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config3arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config3arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config3out == "4") {
					//to be added
				}
				else {
					cout << "config err";

				}
				//draw the elements specified in config4
				cout << "\n";
				loopcounter = 0;
				if (config4out == "") {
					cout << "no config made";
				}
				else if (config4out == "1") {
					config4arg2a = config4arg2;
					while (config4arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config4arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config4arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				}
				else if (config4out == "2") {
					cout << config4arg1;
				}
				else if (config4out == "3") {
					while (config4arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
					cout << "===";
					cout << "\n";
					cout << "||";
					cout << config4arg1;
					cout << "||\n";
					loopcounter = 0;
					cout << "===";
					while (config4arg1.length() >= loopcounter) {
						loopcounter++;
						cout << "=";

					}
				


				}
				else if (config4out == "4") {
					//to be added
				}
				else {
					cout << "config err";

				}
				cout << "\n";
				cout << ">";
				cin >> input;
				if (input == "shutdown") {
					looping = false;
				}

				else if (input == "1") {
					if (config1out == "1") {
						system("cls");
						cout << "text:\n";
						cout << config1arg2a;
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << "text:\n";
								cout << config1arg2a;
							}
						}
						
					}else if(config1out == "2"){
						//no interaction with text
					}else if (config1out == "3") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config1arg2;
							}
						}
						
					}else if (config1out == "4") {

					}
				}
				else if (input == "2") {
					if (config2out == "1") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config2arg2a;
							}
						}
						
					}
					else if (config2out == "2") {
						//no interaction with text
					}
					else if (config2out == "3") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config2arg2;
							}
						}
						
					}
					else if (config2out == "4") {

					}
				}
				else if (input == "3") {
					if (config3out == "1") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config3arg2a;
							}
						}
						
					}
					else if (config3out == "2") {
						//no interaction with text
					}
					else if (config3out == "3") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config3arg2;
							}
						}
						
					}
					else if (config3out == "4") {

					}
				}
				else if (input == "4") {
					if (config1out == "1") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config4arg2a;
							}
						}
						
					}
					else if (config4out == "2") {
						//no interaction with text
					}
					else if (config4out == "3") {
						system("cls");
						while (argloop == true) {
							cin >> input;
							if (input == "escape") {
								argloop = false;
							}
							else {
								cout << config4arg2;
							}
						}
						
					}
					else if (config4out == "4") {
						//serial out
					}
				}

			}
		}
			
		//config editor
		if (input == "config1") {
			cout << "select a element to place in slot 1\n";
			cout << "1:button, 2:text, 3:button_port, 4:holodisk\n";
			cout << ">";
			cin >> input;
			config1out = input;
			if (input == "1") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "text it links to:";
				getline(cin, arg2);
				getline(cin, arg2);

			}
			if (input == "2") {
				cout << "text:";
				getline(cin, arg1);
				getline(cin, arg1);
				//cin >> arg1;
			}
			if (input == "3") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "COM:";
				cin >> arg2;
				cout << "BAUD:";
				cin >> arg3;
				cout << "DATA:";
				getline(cin, arg1);
				getline(cin, arg1);

			}
			if (input == "4") {
				//opens a cpp file that allows loading programs WIP

			}
			config1arg1 = arg1;
			config1arg2 = arg2;
			config1arg3 = arg3;
			config1arg4 = arg4;
			config1out = input;

		}
		if (input == "config2") {
			cout << "select a element to place in slot 2\n";
			cout << "1:button, 2:text, 3:button_port, 4:holodisk\n";
			cout << ">";
			cin >> input;
			config2out = input;
			if (input == "1") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "text it links to:";
				getline(cin, arg2);
				getline(cin, arg2);

			}
			if (input == "2") {
				cout << "text:";
				getline(cin, arg1);
				getline(cin, arg1);
				//cin >> arg1;
				
			}
			if (input == "3") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "COM:";
				cin >> arg2;
				cout << "BAUD:";
				cin >> arg3;
				cout << "DATA:";
				getline(cin, arg1);
				getline(cin, arg1);

			}
			if (input == "4") {
				//opens a cpp file that allows loading programs WIP

			}
			config2arg1 = arg1;
			config2arg2 = arg2;
			config2arg3 = arg3;
			config2arg4 = arg4;
			config2out = input;


		}
		if (input == "config3") {
			cout << "select a element to place in slot 3\n";
			cout << "1:button, 2:text, 3:button_port, 4:holodisk\n";
			cout << ">";
			cin >> input;
			config3out = input;
			if (input == "1") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "text it links to:";
				getline(cin, arg2);
				getline(cin, arg2);

			}
			if (input == "2") {
				cout << "text:";
				getline(cin, arg1);
				getline(cin, arg1);
				//cin >> arg1;
				
			}
			if (input == "3") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "COM:";
				cin >> arg2;
				cout << "BAUD:";
				cin >> arg3;
				cout << "DATA:";
				getline(cin, arg1);
				getline(cin, arg1);

			}
			if (input == "4") {
				//opens a cpp file that allows loading programs WIP

			}
			config3arg1 = arg1;
			config3arg2 = arg2;
			config3arg3 = arg3;
			config3arg4 = arg4;
			config3out = input;


		}
		if (input == "config4") {
			cout << "select a element to place in slot 4\n";
			cout << "1:button, 2:text, 3:button_port, 4:holodisk\n";
			cout << ">";
			cin >> input;
			config4out = input;
			if (input == "1") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "text it links to:";
				getline(cin, arg2);
				getline(cin, arg2);

			}
			if (input == "2") {
				cout << "text:";
				getline(cin, arg1);
				getline(cin, arg1);
				//cin >> arg1;
				
			}
			if (input == "3") {
				cout << "button text:";
				getline(cin, arg1);
				getline(cin, arg1);
				cout << "COM:";
				cin >> arg2;
				cout << "BAUD:";
				cin >> arg3;
				cout << "DATA:";
				getline(cin, arg1);
				getline(cin, arg1);

			}
			if (input == "4") {
				//opens a cpp file that allows loading programs WIP

			}
			config4arg1 = arg1;
			config4arg2 = arg2;
			config4arg3 = arg3;
			config4arg4 = arg4;
			config4out = input;


		}
		if (input == "help") {
			cout << "cls: clear screen\n";
			cout << "reset: reset config\n";
			cout << "load: load config\n";
			cout << "save: save config\n";
			cout << "start: start gui\n";
			cout << "config1: config first slot\n";
			cout << "config2: config second slot\n";
			cout << "config3: config third slot\n";
			cout << "config4: config forth slot\n";
			cout << "help: brings up this menu\n";
			cout << "exit: exits terminal\n";
			cout << "=======config options========\n";
			cout << "button: button links to text \n";
			cout << "text: adds text entry\n";
			cout << "button_port: click a button to send data on serialport\n";
			cout << "holodisk: work in progress\n";
		}
		if (input == "exit") {
			return 0;
		}

		cout << output;
		cout << "\n";
	}
	return 0;
}

