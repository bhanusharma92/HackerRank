#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
    for(int i = 1; i < ar_size; i++){
        // cout << "iteration " << i << endl;
        // cout << "\ti = " << i << endl;
        int j = i - 1;
        // cout << "\tj = " << j << endl;
        int key = ar[i];
        while(j >= 0 && ar[j] > key){
            // cout << "\t\tar[j] = ar[" << j << "] = " << ar[j] << endl;
            // cout << "\t\tar[j+1] = ar[" << j+1 << "] = " << ar[j+1] << endl; 
            ar[j + 1] = ar[j];
            j--;
        }
        // cout << "\tar[i] = " << "ar[" << i << "] = " << ar[i] << endl;
        ar[j + 1] = key;
        // cout << "\tafter while loop:" << endl;
        // cout << "\tar[j] = ar[" << j << "] = " << ar[j] << endl;
        // cout << "\tar[j+1] = ar[" << j+1 << "] = " << ar[j+1] << endl;
        for(int k = 0; k < ar_size; k++){
            cout << ar[k] << " ";
        }
        cout << endl;
    }
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}