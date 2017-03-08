#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	int count_k = 0;
	bool flag = true;
	//assert(n == str.size());
	cout << "str length: " << str.length() << endl;
	int ds_length = (int)(ceil((n*1.0)/2));
	int ds[(int)(ceil((n*1.0)/2))];
	for(int i = 0; i <= (n - 1) / 2; i++){
		if(str[i] != str[n - i - 1]){
			ds[i] = 0;
		}else if(str[i] == str[n - i - 1] && str[i] == '9'){
			ds[i] = 2;
		}else{
			ds[i] = 1;
		}
	}

	// cout << "ds initial\n";
	// for(int i = 0; i < ds_length; i++){
	// 	cout << "ds[" << i << "] = " << ds[i] << endl;
	// }



	for(int i = (n-1) / 2; i >= 0; i--){
		if(count_k < k){
			if(!ds[i]){
				ds[i] = -1;
				count_k++;
			}
		}
	}

	// cout << "ds middle\n";
	// for(int i = 0; i < ds_length; i++){
	// 	cout << "ds[" << i << "] = " << ds[i] << endl;
	// }

	// cout << "count: " << count_k << endl;
	for(int i = 0; i <= (n - 1) / 2; i++){
		// cout << "i:" << i <<  " count: " << count_k << endl;
		if(count_k <= k){
			if(n % 2 == 0){
				if(ds[i] == 1 && (count_k + 2) <= k){
				ds[i] = 2;
				count_k += 2;
				}else if(ds[i] == -1 && (count_k + 1) <= k){
					ds[i] = 2;
					count_k++;
				}
			}else{
				if(ds[i] == 1 && i == (n - 1) / 2 && (count_k + 1) <= k){
					ds[i] = 2;
					count_k += 1;
				}
				if(ds[i] == 1 && (count_k + 2) <= k){
				ds[i] = 2;
				count_k += 2;
				}else if(ds[i] == -1 && (count_k + 1) <= k){
					ds[i] = 2;
					count_k++;
				}
			}
			
		}
	}

	// cout << "ds final\n";
	// for(int i = 0; i < ds_length; i++){
	// 	cout << "ds[" << i << "] = " << ds[i] << endl;
	// }

	for(int i = 0; i <= (n - 1)/ 2; i++){
		if(ds[i] == 0){
			flag = false;
		}else if(ds[i] == 1 or ds[i] == -1){
			// cout << "i: " << i << endl;
			// cout << "ds[" << i <<"] = " << ds[i];
			// cout << "str[" << i << "] = " << str[i] << endl;
			// cout << "str[" << n-1-i << "] = " << str[n-1-i] << endl; 
			if((int)str[i] < (int)str[n - 1 - i]){
				str[i] = str[n - 1 - i];
			}else{
				str[n - 1 - i] = str[i];
			}
		}else if(ds[i] == 2){
			// cout << "i: " << i << endl;
			// cout << "ds[" << i <<"] = " << ds[i];
			// cout << "str[" << i << "] = " << str[i] << endl;
			// cout << "str[" << n-1-i << "] = " << str[n-1-i] << endl;
			str[i] = '9';
			str[n - 1 - i] = '9';
		}else{
			cout << "something is wrong\n";
		}
	}

	if(flag){
		cout << str;
	}else{
		cout << "-1";
	}

	return 0;
}