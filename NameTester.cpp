#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <random>

using namespace std;

int main()
{
	//conversation possibilities
	string c[] = {
		"How's it going ",
		"What chu doing right now ",
		"Ya like jazz ",
		"Do you like hot weather or cold weather better ",
		"Would you rather live in the city or country ",
		"Do you want to learn any other languages ",
		"Do you like where you live ",
		"What's your favourite animal ",
		"Coffee or Tea ",
		"What's your favourite hobby ",
		"What was the last funny video you saw ",
		"What’s your favorite number ",
		"What’s your favorite way to waste time ",
		"Cats or Dogs ",
		"Are you more of an outdoors or indoors person ",
		"Do you like swimming ",
		"What's your favourite colour ",
		"What was the last TV show you watched ",
		"What was the last movie you watched ",
		"Do you like horror movies ",
		"What's your favourite season ",
		"Are you okay ",
		"What's your favourite colour sticky note ",
		"What's your favourite colour pen ",
		"Who's your favourite Youtuber/Actor ",
	};
	//vars
	string again;
	string name;
	string input;
	//function
	for (;;) {
		cout << "Hello, please type a name:" << endl;
		cin >> name;

		cout << c[rand() % 25] << name << endl;
		cin >> input;
		cout << c[rand() % 25] << name << endl;
		cin >> input;
		cout << c[rand() % 25] << name << endl;
		cin >> input;

		cout << "Do you wanna try again?(y/n) " << endl;
		cin >> again;
		if (again == "y");
		else if (again == "n" || cin.eof()) break;
		else cout << "well time to go again!" << endl;
	}
}
