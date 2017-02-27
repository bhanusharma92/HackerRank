#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
# include <array>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    int f = 0;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    int ds[26];
    for (int i = 0; i < 26; i++){
    	ds[i] = 0;
    }
    for(int i = 0; i < s.length(); i++){
    	ds[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
    	if(ds[i] % 2 == 1){
    		f++;
    	}
    }
    if(f > 1){
    	flag = 1;
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
