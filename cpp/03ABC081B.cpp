#include<iostream>
using namespace std;
main(){
    int n=0, i, a=0;
    cin >> n;
    for (i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        a |= tmp;
    }
    i=0;
    while(1){
        if ((a) % 2){
            cout << i;
            break;
        }
        i++;
        a >>= 1;
    }
}