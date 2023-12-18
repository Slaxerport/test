#include <iostream>
#include <string>

using namespace std;

void snowflake(int height, int width);

int main() {
	snowflake();
}

void snowflake(int height, int width) {
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
	lb++, rb--;
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
