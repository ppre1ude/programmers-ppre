#include <iostream>
#include <stack>
using namespace std;

int main() {
	
    int n = 0; // 맨 첨에 받는 숫자
    int input = 0; // 스택에 넣을 숫자
    int sum = 0; // 썸
    stack<int> st; // 스택

    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> input;
        if (input == 0) {
            if ( !st.empty() ) {
                st.pop();
            }
        }
        else { st.push(input); }
        
    }

    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }

    cout << sum;
	return 0;
}