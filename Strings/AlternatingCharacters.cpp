# include <iostream>
# include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int test_case = 0; test_case < t; test_case++){
		int count = 0;
		string s;
		cin >> s;
		int i = 1;
		while(i < s.length()){
			if(s[i] == s[i - 1]){
				count++;
				i++;
				continue;
			}else{
				i++;
			}
		}
		cout << count << endl;
	}
	return 0;
}