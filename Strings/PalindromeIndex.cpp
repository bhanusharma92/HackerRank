# include <iostream>
# include <string>
using namespace std;
bool isPalindrome(string str){
	bool is_palindrome = true;
	for(int i = 0; i < (str.length() - 1) / 2; i++){
		if(str[i] != str[str.length() - 1 - i]){
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
		cin >> str;
		if(isPalindrome(str)){
			cout << "-1" << endl;
		}else{
			int required_index = -1;
			bool is_palindrome_possible = false;
			for(int i = 0 ; i < str.length(); i++){
				if(i != str.length() - 1){
					if(isPalindrome(str.substr(0,i) + str.substr(i+1))){
						required_index = i;
						break;
					}
				}else{
					if(isPalindrome(str.substr(0,str.length() - 1))){
						required_index = i;
						break;	
					}
				}
			}
			cout << required_index << endl;
		}

	}
	return 0;
}