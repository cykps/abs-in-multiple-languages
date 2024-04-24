#include<iostream>
using namespace std;
main(){
    int n, i, j;
    cin >> n;
    int a[n], r=n;
    for (i=0; i<n; i++){
        cin >> a[i];
        for (j=0; j<i; j++){
            if (a[i] == a[j]){
                r--;
                break;
            }
        }
    }
    cout << r << endl;
}