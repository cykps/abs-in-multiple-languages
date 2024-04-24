#include<iostream>
using namespace std;
main(){
    int a, b, c, x, i, j, k, r = 0;
    cin >> a >> b >> c >> x;
    for (i=0; i<=a; i++){
        for (j=0; j<=b; j++){
            for (k=0; k<=c; k++){
                if (500*i + 100*j + 50*k == x){
                    r++;
                }
            }
        }
    }
    cout << r << endl;
}