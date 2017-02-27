# include <iostream>
# include <string>
# include <cmath>
using namespace std;
int main(){
	string str1;
	string str2;
	int ds1[26];
	int ds2[26];
	int count = 0;
	cin >> str1;
	cin >> str2;
	for(int i = 0; i < 26; i++){
		ds1[i] = 0;
		ds2[i] = 0;
	}
	for(int i = 0 ; i < str1.size(); i++){
		ds1[str1[i] - 97]++; 
	}
	for(int i = 0 ; i < str2.size(); i++){
		ds2[str2[i] - 97]++; 
	}
	for(int i = 0; i < 26; i++){
		if(ds1[i] != ds2[i]){
			count += abs(ds1[i] - ds2[i]);
		}
	}
	cout << count;
	return 0;
}