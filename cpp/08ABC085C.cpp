#include<iostream>
using namespace std;
main(){
    int n, y, i, j;
    cin >> n >> y;
    for (i=0; i<=n; i++){
        for (j=0; j<=n-i; j++){
            int k = n - i - j;
            if (10000*i + 5000*j + 1000*k == y){
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}