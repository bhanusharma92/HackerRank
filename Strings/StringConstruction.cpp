#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	int output[t];
	for(int test_case = 0; test_case < t; test_case++){
		string str;
		int cost = 0;
		cin >> str;
		int ds[26];
		for(int i = 0; i < 26; i++){
			ds[i] = 0;
		}
		for(int i = 0; i < str.length(); i++){
			if(ds[str[i] - 'a'] == 0){
				cost++;
				ds[str[i] - 'a'] = 1;
			}
		}
		output[test_case] = cost;
	}

	for(int i = 0; i < t; i++){
		cout << output[i] << endl;
	}
	return 0;
}