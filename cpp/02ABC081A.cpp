#include<iostream>
using namespace std;
main(){
    int s, r=0;
    cin >> s;
    if (s%10 == 1){
        r++;
    }
    if (s%100 >= 10){
        r++;
    }
    if (s >= 100){
        r++;
    }
    cout << r << endl;
}