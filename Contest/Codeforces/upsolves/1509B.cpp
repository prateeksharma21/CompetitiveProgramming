#ifdef Prateek
  #include "Prateek.h"
#else
  #include <bits/stdc++.h>
  using namespace std;
  #define debug(...) 42
#endif
#define int ll
#define all(c) begin(c),end(c)
using ll = long long;
const int MOD = 1e9+7, N = 1e5 + 10;

int v(char c) {
   if (c == 'T') return 0;
   return 1;
}

void test(){
   int n;
   cin >> n;
   string s;
   cin >> s;
   set<int> p[2];
   for (int i = 0; i < n; ++i) {
      p[v(s[i])].insert(i);
   }
   cout << "YES\n";
   return;
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int tt = 1;
   cin >> tt;
   for (int t = 1; t <= tt; ++t) {
      test();
   }
   return 0;
}