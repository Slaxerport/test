#include <iostream>
#include <string>

using namespace std;

void snowflake();

int main() {
	snowflake();
}

void snowflake() {
	int lb = 4, rb = 4, i = 0;
	for (; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (j >= lb && j <= rb) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		lb--;
		rb++;
		cout << endl;
	}
	lb = 1, rb = 8;
	for (; i >= 0; i--) {
		for (int j = 0; j < 10; j++) {
			if (j >= lb && j < rb) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		lb++;
		rb--;
		cout << endl;
	}

}
