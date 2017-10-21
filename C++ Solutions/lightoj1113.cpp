#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;

	for(int i = 1; i <= t; i++){
		cout << "Case " << i << ":" << endl;

		string a, b, current = "http://www.lightoj.com/";
		stack<string> backward, forward;

		while(cin >> a){
			if(a == "QUIT")
				break;
			else if(a == "VISIT"){
				cin >> b;
				cout << b << endl;
				backward.push(current);
				current = b;

				while(!forward.empty())
					forward.pop();
			}
			else if(a == "BACK"){
				if(!backward.empty()){
					forward.push(current);
					current = backward.top();
					cout << current << endl;
					backward.pop();
				}
				else
					cout << "Ignored" << endl;
			}
			else if(a == "FORWARD"){
				if(!forward.empty()){
					backward.push(current);
					current = forward.top();
					cout << current << endl;
					forward.pop();
				}
				else
					cout << "Ignored" << endl;
			}
		}
	}

	return 0;
}
