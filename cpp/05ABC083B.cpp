#include<iostream>
using namespace std;
int sum(int n){
    int r = 0;
    while(n){
        r += n % 10;
        n /= 10;
    }
    return r;
}
main(){
    int n, a, b, i, r=0;
    cin >> n >> a >> b;
    for (i=0; i<=n; i++){
        int s = sum(i);
        if (a <= s && s <= b){
            r += i;
        }
    }
    cout << r << endl;
}