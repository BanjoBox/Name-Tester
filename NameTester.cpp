
#include <iostream>
#include <string> 
#include <thread>
#include <chrono>
#include <random>

using namespace std;

int main()
{
	random_device rd;
	//conversation possibilities
	string c1 = "How's it going ";
	string c2 = "What chu doing right now ";
	string c3 = "Ya like jazz ";
	string c4 = "Do you like hot weather or cold weather better ";
	string c5 = "Would you rather live in the city or country ";
	string c6 = "Do you want to learn any other languages ";
	string c7 = "Do you like where you live "; 
	string c8 = "What's your favourite animal ";
	string c9 = "Coffee or Tea ";
	string c10 = "What's your favourite hobby ";
	//vars
	string again;
	string name;
	string input;
	//function
	for (int i = 0; i < 1; i) {
		int randc1 = rand() % 10;
		int randc2 = rand() % 10;
		int randc3 = rand() % 10;

		cout << "Hello, please type a name:" << endl;
		cin >> name;

		switch(randc1){
		default:
			cout << c1 << endl;
			break;

		case 1:
			cout << c1 << name << endl;
			break;
			
		case 2:
			cout << c2 << name << endl;
			break;
		case 3:
			cout << c3 << name << endl;
			break;
		case 4:
			cout << c4 << name << endl;
			break;
		case 5:
			cout << c5 << name << endl;
			break;
		case 6:
			cout << c6 << name << endl;
			break;
		case 7:
			cout << c7 << name << endl;
			break;
		case 8:
			cout << c8 << name << endl;
			break;
		case 9:
			cout << c9 << name << endl;
			break;
		case 10:
			cout << c10 << name << endl;
			break;

		}
		cin >> input;
		switch (randc2) {
		default:
			cout << c1 << endl;
			break;

		case 1:
			cout << c1 << name << endl;
			break;

		case 2:
			cout << c2 << name << endl;
			break;
		case 3:
			cout << c3 << name << endl;
			break;
		case 4:
			cout << c4 << name << endl;
			break;
		case 5:
			cout << c5 << name << endl;
			break;
		case 6:
			cout << c6 << name << endl;
			break;
		case 7:
			cout << c7 << name << endl;
			break;
		case 8:
			cout << c8 << name << endl;
			break;
		case 9:
			cout << c9 << name << endl;
			break;
		case 10:
			cout << c10 << name << endl;
			break;

		}
		cin >> input;
		switch (randc3) {
		default:
			cout << c1 << endl;
			break;

		case 1:
			cout << c1 << name << endl;
			break;

		case 2:
			cout << c2 << name << endl;
			break;
		case 3:
			cout << c3 << name << endl;
			break;
		case 4:
			cout << c4 << name << endl;
			break;
		case 5:
			cout << c5 << name << endl;
			break;
		case 6:
			cout << c6 << name << endl;
			break;
		case 7:
			cout << c7 << name << endl;
			break;
		case 8:
			cout << c8 << name << endl;
			break;
		case 9:
			cout << c9 << name << endl;
			break;
		case 10:
			cout << c10 << name << endl;
			break;

		}
		cin >> input;

		cout << "Do you wanna try again?(y/n) " << endl;
			cin >> again;
			if(again == "y") {
				i = 0;
			}
			else if (again == "n") {
				i = 1;
			}
			else {
				cout << "well time to go again!" << endl;
			}
	}


}