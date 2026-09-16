#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if (s.find("...") != string::npos) { cout << 2 << "\n"; return; }
    int count = 0;
    for (char c : s) if (c == '.') count++;
    cout << count << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
