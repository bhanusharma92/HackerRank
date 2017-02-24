# include <iostream>
using namespace std;
int main(){
	int n;
    cin >> n;
    string B;
    cin >> B;
    int i = 0;
    int count = 0;
    while(i < B.length() - 2){
    	if(B[i] == '0' && B[i+1] == '1' && B[i+2] == '0'){
    		count++;
    		i = i + 3;
    	}else{
    		i++;
    	}
    }
    cout << count;
	return 0;
}