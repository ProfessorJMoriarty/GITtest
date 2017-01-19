//Write a program that asks a user to type in a number 1 - 4. Based on what number they type,
//the program changes the console color screen to blue, green, red, or purple
//(actually, you can use any colors you want, as long as they change).
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
void pause(int dur);

int main() {
	int input = 0;
	int rooms = 0;
	cout << "Choose a number between 1-4" << endl;
	cin >> input;
	if (input == 1) {
		rooms = 1;
	}
	else if (input == 2) {
		rooms = 2;
	}
	else if (input == 3) {
		rooms = 3;
	}
	else if (input == 4) {
		rooms = 4;
	}
	else {
		cout << "Invalid Input" << endl;
		pause(2);
		return 0;

	}

	switch (rooms) {


	case 1:
		cout << "1" << endl;
		system("color 1a");
		break;
	case 2:
		cout << "2" << endl;
		system("color 3b");
		break;
	case 3:
		cout << "3" << endl;
		system("color 5e");
		break;
	case 4:
		cout << "4" << endl;
		system("color 4d");
		break;
	}
	cout << "hehe XD" << endl;
}


void pause(int dur) {
	int temp = time(NULL) + dur;

	while (temp > time(NULL));
}
