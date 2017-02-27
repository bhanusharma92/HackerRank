#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	string output[t];
	for(int test_case = 0; test_case < t; test_case++){
		string str1;
		string str2;
		bool flag = false;
		cin >> str1 >> str2;
		int ds1[26];
		int ds2[26];
		for(int i = 0; i < 26; i++){
			ds1[i] = 0;
			ds2[i] = 0;
		}
		for(int i = 0; i < str1.length(); i++){
			if(ds1[str1[i] - 97] == 0){
				ds1[str1[i] - 97] = 1;	
			}
		}
		for(int i = 0; i < str2.length(); i++){
			if(ds2[str2[i] - 97] == 0){
				ds2[str2[i] - 97] = 1;	
			}
		}
		for(int i = 0; i < 26; i++){
			if(ds1[i] == 1 && ds2[i] == 1){
				flag = true;
				break;
			}
		}
		if(flag){
			output[test_case] = "YES";
		}else{
			output[test_case] = "NO";
		}
	}
	for(int i = 0; i < 26; i++){
		cout << output[i] << endl;
	}
	return 0;
}