#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
    int shifts = 0;
    for(int i = 1; i < ar_size; i++){       
        int j = i - 1;       
        int key = ar[i];
        while(j >= 0 && ar[j] > key){
            
            ar[j + 1] = ar[j];
            j--;
            shifts++;
        }        
        ar[j + 1] = key;
        // for(int k = 0; k < ar_size; k++){
        //     cout << ar[k] << " ";
        // }
        // cout << endl;

    }
    cout << shifts;
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