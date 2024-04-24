#include<iostream>
#include<algorithm>
using namespace std;
main(){
    int n, i, r=0;
    cin >> n;
    int a[n];
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for (i=0; i<n; i++){
        if (i%2){
            r -= a[i];
        } else {
            r += a[i];
        }
    }
    cout << r;
}