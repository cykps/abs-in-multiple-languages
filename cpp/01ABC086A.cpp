#include<iostream>
using namespace std;
main(){
    int a, b;
    cin >> a >> b;
    if ((a*b)%2){
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
}