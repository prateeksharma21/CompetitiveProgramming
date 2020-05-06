#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define int ll
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10; 

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<string> s(n);
   f(i,0,n){
      cin >> s[i];
   }
   sort(s.begin(),s.end(),[&](string a,string b){
      return a+b<b+a;
   });
   for(auto &e : s){
      cout << e;
   }
   return 0;
}