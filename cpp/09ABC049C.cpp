#include<iostream>
#include<vector>
using namespace std;
main(){
    string s;
    cin >> s;
    int idx = 0, i;
    vector<string> v;
    while(s.length() - idx > 0){ //d, r, e, am, as
        string substr1 = s.substr(idx, 1);
        if (substr1 == "d" || substr1 == "r" || substr1 == "e"){
            v.push_back(substr1);
            idx += 1;
        } else if (s.length() - idx >= 2){
            string substr2 = s.substr(idx, 2);
            if (substr2 == "am" || substr2 == "as"){
                v.push_back(substr2);
                idx += 2;
            }
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    idx = 0;
    string dream[]={"d","r","e","am"}, dreamer[]={"d","r","e","am","e","r"}, erase[]={"e","r","as","e"}, eraser[]={"e","r","as","e","r"};
    while(v.size() >= 4){ //4[d,r,e,am],5[d,r,e,am,e,r],4[e,r,as,e],5[e,r,as,e,r]
        int r[] = {0, -1, 0, -1};
        for (i=0; i<4; i++){
            if (v[idx + i] != dream[i]){
                r[0] = 1;
            }
            if (v[idx + i] != erase[i]){
                r[2] = 1;
            }
        }
        if (v.size() >= 5){
            r[1] = 0; r[3] = 0;
            for (i=0; i<5; i++){
                if (v[idx + i] != dreamer[i]){
                    r[1] = 1;
                }
                if (v[idx + i] != eraser[i]){
                    r[3] = 1;
                }
            }
        }

    }
}