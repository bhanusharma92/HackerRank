# include <iostream>
# include <string.h>
# include <array>
using namespace std;
bool isHaveElement(string s, char c){
	bool is_have_element = false;
	for(int i = 0; i < s.length(); i++){
		if(c == s[i])
			is_have_element = true;
	}
	return is_have_element;
}
int main(){
	int n;
	int gem_elements = 0;
	int count = 0;
	cin >> n;
	string str_arr[n];
	for(int i = 0; i < n; i++){
		cin >> str_arr[i];
	}
	for(int i = 97; i < 123; i++){
		int count_string = 0;
		for(int j = 0; j < n; j++){
			for(int k = 0; k < str_arr[j].size(); k++){
				char c = i;
				if(isHaveElement(str_arr[j], c)){
					count_string++;
					break;
				}	
			}
		}
		if(count_string == n){
			count++;
		}
	}
	cout << count;
	
	return 0;
}