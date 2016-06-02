#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int diag1,diag2,diff;
    diag1 = diag2 = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

    for(int i = 0, j = n - 1; i < n; i++, j--){
    	diag1 += a[i][i];
    	diag2 += a[i][j];
    }
    diff = diag1 - diag2;
    cout << abs(diff);
    
    return 0;
}