#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float pos, neg, zeros;
    pos = neg = zeros = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    for(int i = 0; i < n; i++){
    	if(arr[i] < 0){
    		neg++;
    	}
    	else if(arr[i] > 0){
    		pos++;
    	}
    	else
    		zeros++;

    }
    cout << (pos/n) << endl << (neg/n) << endl << (zeros/n);

    return 0;
}