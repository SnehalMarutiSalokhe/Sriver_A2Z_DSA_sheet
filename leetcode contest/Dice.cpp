#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;

    while (T--) {
        int alice[3], bob[3];
        for (int i = 0; i < 3; i++) {
            cin >> alice[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> bob[i];
        }

        sort(alice, alice + 3, greater<int>());
        sort(bob, bob + 3, greater<int>());

        // Compare the maximum values for Alice and Bob
        if (alice[0] > bob[0]) {
            cout << "Alice" << endl;
        } else if (alice[0] < bob[0]) {
            cout << "Bob" << endl;
        } else {
           if (alice[1] > bob[1]) {
            cout << "Alice" << endl;
        } else if (alice[1] < bob[1]) {
            cout << "Bob" << endl;
        } else {
           if (alice[2] > bob[2]) {
            cout << "Alice" << endl;
        } else if (alice[2] < bob[2]) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
        }
        }
    }
	return 0;
}
