#include<iostream>
#include<string>
using namespace std;

main(){
	string s;
  cin >> s;
	int i, last = 0;
	s = "X" + s + "Y";
	for (i=0; i<=s.size(); i++) {
		if (s[i] == 'a') {
			string b = s.substr(last, i-last);
			if (!(b=="amdre" || b=="amer" || b=="amerdre" || b=="amerer" || b=="asedre" || b=="aseer" || b=="aserdre" || b=="aserer" || b=="Xdre" || b=="Xer")) {
				cout << "NO";
				return 0;
			}
			last = i;
		}
	}
	string b = s.substr(last);
	if (!(b=="amY" || b=="amerY" || b=="aseY" || b=="aserY")) {
		cout << "NO";
		return 0;
	}
	cout << "YES";
}