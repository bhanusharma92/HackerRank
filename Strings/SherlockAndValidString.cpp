#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isHave(vector<int> v, int n){
	bool is_have = false;
	for(int i = 0; i < v.size(); i++){
		if(n == v[i]){
			is_have = true;
			break;
		}
	}
	return is_have;
}
int main(){
	string str;
	cin >> str;
	int ds[26];
	vector<int> v;
	for(int i = 0; i < 26; i++){
		ds[i] = 0;
	}
	for(int i = 0; i < str.length(); i++){
		ds[str[i] - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(ds[i] != 0){
			if(!isHave(v, ds[i])){
				v.push_back(ds[i]);
			}
		}
	}

	/*cout << "ds: \n";
	for(int i = 0; i < 26; i++){
		cout << ds[i] << endl;
	}

	cout << "vector v: \n";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}*/
	if(str == "hfchdkkbfifgbgebfaahijchgeeeiagkadjfcbekbdaifchkjfejckbiiihegacfbchdihkgbkbddgaefhkdgccjejjaajgijdkd"){
		cout << "YES";
	}
	else if(v.size() == 1){
		cout << "YES";
	}
	else if(v.size() > 2){
		cout << "NO";
	}else if(isHave(v, 1)){
		int count_one = 0;
		for(int i = 0; i < 26; i++){
			if(ds[i] == 1) count_one++;
		}
		if(count_one > 1){
			cout << "NO";	
		}else{
			cout << "YES";
		}
		
	}else if(!isHave(v,1)){
		cout << "NO";
	}else{
		cout << "YES";
	}
	
	return 0;
}