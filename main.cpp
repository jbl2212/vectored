#include<iostream>
#include<vector>
using namespace std;

vector<int> numbers;
vector<string> Names;
vector<int>:: iterator iter1;
vector<string>::iterator iter2;
int main() {
	bool HasCoolFriend = false;
	string f1;
	string f2;
	string f3;
	string f4;
	string f5;
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		int num = rand() % 51 + 50;
		numbers.push_back(num);
	}
	for (iter1 = numbers.begin(); iter1 != numbers.end(); ++iter1) {
		cout << *iter1 << " | ";
	}

	cout << endl << endl;
	cout << "Give us 5 of your friends names." << endl;
	cin >> f1;
	cin >> f2;
	cin >> f3;
	cin >> f4;
	cin >> f5;
	Names.push_back(f1);
	Names.push_back(f2);
	Names.push_back(f3);
	Names.push_back(f4);
	Names.push_back(f5);

	for (iter2 = Names.begin(); iter2 != Names.end(); ++iter2) {
		cout << *iter2 << " | ";
	}
	cout << endl;
	iter2 = find(Names.begin(), Names.end(), "Alejandro");
	if (iter2 != Names.end()) {
		cout << "You have cool friends" << endl;
	}
	else
		cout << "Get cooler friends...like Alejandro" << endl;
}
