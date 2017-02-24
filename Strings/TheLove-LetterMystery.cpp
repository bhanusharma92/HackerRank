# include <iostream>
# include <string>
# include <cmath>
using namespace std;
bool isPalindrome(string str){
	int str_len = str.length();
	bool is_palindrome = true;
	for(int i = 0; i < str_len / 2; i++){
		if(str[i] != str[str_len - i]){
			is_palindrome = false;
			break;
		}
	}
	return is_palindrome;
}
int main(){
	int t;
	cin >> t;
	for(int test_case = 0; test_case < t; test_case++){
		string str;
		int count = 0;
		cin >> str;
		for(int i = 0; i <= (str.length() - 1) / 2; i++){
			//cout << "str[" << i << "]: " << str[i] << endl;
			//cout << "str[" << (str.length() - i - 1) << "]: " << str[str.length() - i -1] << endl;
			if(str[i] != str[str.length() - i - 1]){
				count += abs((int)str[i] - (int)str[str.length() - i -1]); 
				//cout << count << endl;
			}
		}
		cout << count << endl;
	}
}