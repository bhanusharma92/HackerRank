# include <iostream>
# include <string.h>
using namespace std;
int abs(int num){
	if(num < 0){
		return  -1 * num;
	}else{
		return num;
	}
}
int main(){
	int t;
	string s;
	string r;
	cin >> t;
	for(int test_case = 0; test_case < t; test_case++){
		cin >> s;
		string r;
		bool isFunny = true;
		for(int i = s.length() - 1; i >= 0 ; i--){
			r += s[i];
		}		
		for(int i = 1; i < s.length(); i++){
			if(abs(s[i] - s[i - 1]) != abs(r[i] - r[i - 1])){
				isFunny = false;
				break;
			}
		}
		if(isFunny){
			cout << "Funny" << "\n";
		}else{
			cout << "Not Funny" << "\n";
		}
	}
	return 0;
}