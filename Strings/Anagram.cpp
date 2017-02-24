# include <iostream>
# include <string>
# include <cmath>
using namespace std;
void printSubstring(string str_l, string str_r){
	cout << "substring1: " << str_l << endl;
	cout << "substring2: " << str_r << endl;
}
void printOurDS(int str_l_ds[][2], int str_r_ds[][2]){
	cout << "Data structure for left substring\n";
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 2; j++){
			cout << str_l_ds[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Data structure for right substring\n";
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 2; j++){
			cout << str_r_ds[i][j] << "\t";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	int result[t];
	int result_index = 0;
	for(int test_case = 0; test_case < t; test_case++){
		string str;
		cin >> str;
		int str_len = str.length();
		if(str_len % 2 != 0){
			result[result_index++] = -1;
		}else{
			string str_l = str.substr(0,str_len / 2);
			string str_r = str.substr((str_len / 2));
			// test code 
			//printSubstring(str_l, str_r);

			int str_l_ds[26][2];
			int str_r_ds[26][2];
			int count = 0;
			// set the value of our data structure
			for(int i = 0; i < 26; i++){
				for(int j = 0; j < 2; j++){
					if(j == 0){
						str_l_ds[i][j] = 97 + i;
						str_r_ds[i][j] = 97 + i; 	
					}else if(j == 1){
						str_l_ds[i][j] = 0;
						str_r_ds[i][j] = 0;
					}else{
						cout << "setting our data structure: value of j is neither 0 nor 1";
					}
				}
			}

			//test code
			//printOurDS(str_l_ds, str_r_ds);

			for(int i = 0; i < str_l.length(); i++){
				int ch = str_l[i];
				str_l_ds[ch-97][1] = str_l_ds[ch-97][1] + 1;
				ch = str_r[i];
				str_r_ds[ch-97][1] = str_r_ds[ch-97][1] + 1;
			}

			//test code
			//printOurDS(str_l_ds, str_r_ds);

			for(int i = 0; i < 26; i++){				
				if(str_l_ds[i][1] != str_r_ds[i][1]){
					count += abs(str_l_ds[i][1] - str_r_ds[i][1]);
				}
			}
			result[result_index++] = count / 2;
		}
	}
	for(int i = 0; i < t; i++){
		cout << result[i] << endl;
	}
	return 0;
}