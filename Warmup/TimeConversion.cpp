#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string time, hh_str;
    std::cin >> time;
    int hh, mm, ss;
    hh = std::stoi(time.substr(0,2));
    string am_or_pm = time.substr(8,2);
    
    
    if(am_or_pm == "AM"){
    	if(hh == 12)
    		hh = 00;
    	if(hh < 10)
    		hh_str = "0" + to_string(hh);
    	else
    		hh_str = to_string(hh);

    }else {
    	if(hh != 12)
    		hh += 12;
    	hh_str = to_string(hh);
    }

    string time24 = hh_str + time.substr(2,6);
    cout <<time24;

    return 0;
}
