#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int n;
	string command;
	int num;
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		// 1. push
		if (command == "push") {
			cin >> num;
			s.push(num);
		}

		// 2. pop
		else if (command == "pop") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}

		// 3. size
		else if (command == "size") {
			cout << s.size() << endl;
		}

		// 4. empty
		else if (command == "empty") {
			if (s.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		// 5. top
		else if (command == "top") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
			}
		}
	}

	return 0;
}