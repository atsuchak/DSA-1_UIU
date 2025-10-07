#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("D:/Sublime file/input.txt", "r", stdin);
  freopen("D:/Sublime file/output.txt", "w", stdout);

  string st; cin >> st;
  stack<char> s;
  bool check = 0;

  for(int i = 0; i < st.size(); i++) {
  	if(st[i] == '(') s.push(st[i]);
  	else {
  		if(s.empty()) {
  			check = 1;
  			break;
  		}
  		else s.pop();
  	}
  } 

  if(check) cout << "No" << endl;
  else if(s.empty()) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}