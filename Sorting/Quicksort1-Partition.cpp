#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int partition(vector <int>  &ar, int l, int r) {
   int i = r+1;
   int j = i - 1;
   while(j > l){
      if(ar[j] > ar[l]){
          i--;
          int temp = ar[i];
          ar[i] = ar[j];
          ar[j] = temp;
      }
      j--;
   }
   i--;
   int index = i;
   int temp = ar[i];
   ar[i] = ar[l];
   ar[l] = temp;
   for(int i = 0; i < ar.size(); i++){
      cout << ar[i] << " ";
   }
   //cout << "index: " << index << endl;
   cout << endl;
   return index;
}
void quicksort(vector<int> &ar, int l, int r){
    if(l < r){
      //cout << "l < r: " << l << " < " << r << endl;
      int i = partition(ar, l , r);
      //cout << "quicksort(ar, " << l << ", " << i - 1 << ") called" << endl;
      quicksort(ar, l, i-1);
      //cout << "quicksort(ar, " << i+1 << ", " << r << ") called" << endl;
      quicksort(ar, i+1, r);  
    }
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    //partition(_ar, 0, _ar_size - 1);
    quicksort(_ar,0, _ar_size - 1);

    //cout << "final output\n";
    //for(int i = 0; i < _ar.size(); i++){
      //cout << _ar[i] << " ";
    //}
   
   return 0;
}
