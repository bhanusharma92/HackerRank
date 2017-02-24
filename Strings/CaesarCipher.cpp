#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i = 0; i < s.length(); i++){
    	int int_s = (int)s[i];
    	if(int_s >= 97 && int_s < 123){
    		if(int_s + k > 122){
    			cout << "diff: " << (int_s + k - 122) % 26 << endl;
    			cout << (char)(96 + (int_s + k - 122) % 26); 
    		}else{
    			cout << (char)(int_s + k);
    		}
    	}else if(int_s >= 65 && int_s < 91){
    		if(int_s + k > 90){
    			cout << (char)(64 + (int_s + k - 90)); 
    		}else{
    			cout << (char)(int_s + k);
    		}
    	}else{
    		cout << s[i];
    	}
    }
    return 0;
}
