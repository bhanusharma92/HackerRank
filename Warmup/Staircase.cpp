#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0, nspace = n - 1, nhash = 1; i < n ; i++, nspace--, nhash++){
    	for(int j = 0; j < nspace; j ++)
    		cout << " ";
    	for(int k = 0; k < nhash; k++)
    		cout << "#";

    	
    	cout << endl;
    }
    return 0;
}