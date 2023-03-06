#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for(int i = 0; i < (n); i++)
// for(auto &ia : a)

// int main() {
//     string s;
//     cin >> s;
//     int l = s.size();
//     ll sum = 0;
//     for(int i = 1; i < l; i++) {
//         sum += pow(26, i);
//     }
//     for(int i = 0; i < l-1; i++) {
//         sum += (s[i]-'A')*pow(26, (l-i-1));
//     }
//     sum += (s[l-1]-'A'+1);
//     cout << sum << endl;
//     return 0;
// }
// 
// int main() {
//     int n,p,q,r,s;
//     int a[101];
//     cin >> n >> p >> q >> r >> s;
//     for(int i = 1; i<= n; i++) {
//         cin >> a[i];
//     }
//     for(int i = 1; i<= n; i++) {
//         if(p<=i&& i<=q) {
//             cout << a[i+r-p];
//         } else if(r <= i && i <= s) {
//             cout << a[i+p-r];
//         }else {
//             cout << a[i];
//         }
//         if(i < n)cout << " ";
//         else cout << endl;
//     }
//     return 0;
// }
// int main() {
//     int n,p,q,r,s;
//     cin >> n >> p >> q >> r >> s;
//     p--;
//     q--;
//     r--;
//     s--;
//     vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//         cin >>a[i];
//     }
//     vector<int> ans(n);
//     for(int i = 0; i<n; i++) {
//         if(p <= i && i <= q) {
//             ans[i+r] = a[i];
//         } else if(r <= i && i <= s) {
//             ans[i-q] = a[i]; 
//         }else{
//             ans[i] = a[i];
//         }
//     }
//     for(int i = 0; i<n-1; i++) {
//         cout << ans[i] << " ";
//     }
//     cout << ans[-1] << endl;
//     return 0;
// }
// int main() {
//     int n; cin >> n;
//     vector<string> a(n);
//     int fo= 0, against=0;
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for(int i = 0; i < n; i++) {
//         if(a[i] == "For") {
//             fo++;
//         } else {
//             against++;
//         }
//     }
//     if(fo > against) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }
// int main() {
//     int n; cin >> n;
//     ll ans = 0;
//     for(int i = 1; i <n; i++) {
//         int X,Y;
//         X = i;
//         Y = n-i;
//         ll x = 0, y = 0;
//         for(int j = 1; j*j <=X; j++) {
//             if(X%j == 0) {
//                 x++;
//                 if(X != j*j)x++;
//             }
//         }
//         for(int j = 1; j*j <= Y; j++) {
//             if(Y%j == 0) {
//                 y++;
//                 if(Y != j*j)y++;
//             }
//         }
//         ans += x*y;
//     }
//     cout << ans << endl;
//     return 0;
// }
// int main() {
//     int n, q;
//     cin >> n >> q;
//     vector<vector<bool>> card(n, vector<bool> (2));
//     for(int i = 0; i< q; i++){
//         int c,x;
//         cin >> c >> x;
//         if(c == 1) {
//             x--;
//             c--;
//             if(card[x][c])card[x][c+1] = true;
//             else card[x][c] = true;
//         } else if(c == 2) {
//             x--;
//             c--;
//             card[x][c] = true;
//         } else if (c == 3) {
//             x--;
//             if(card[x][1]) {
//                 cout << "Yes" << endl;
//             } else {
//                 cout << "No" << endl;
//             }
//         }
//     }
// }
// int main() {
//     string s;
//     cin >> s;
//     for(int i = 0; i< s.size(); i++) {
//         s[i] = s[i]+('A'-'a');
//     }
//     cout << s << endl;
//     return 0;
// }
// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<ll, ll>> drink(n);
//     for(int i = 0; i < n; i++) {
//         cin >> drink[i].first >> drink[i].second;
//     }
//     sort(drink.begin(), drink.end());
//     long long ans = 0;
//     for(int i = 0; i < n; i++) {
//         if(m-drink[i].second < 0) {
//             ans += drink[i].first*m;
            
//             break; 
//         } else {
//             ans += drink[i].first*drink[i].second;
//             m -= drink[i].second;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }
// int main() {
//     int n;
//     string s;
//     cin >> n >> s;

//     for(int i = 1; i < n; i++) {
//         int m = n-i;
//         int cnt = 0;
//         for(int l = 1; l <= m; l++) {
//             if(s[l-1] != s[l+i-1]) {
//                 cnt++;
//             } else {
//                 break;
//             }
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }
// int main() {
//     int n;
//     string s;
//     cin >> n >> s;
//     set<pair<int, int>> key;
//     key.insert({0,0});
//     int x = 0;
//     int y = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == 'R')x++;
//         else if(s[i] == 'L')x--;
//         else if(s[i] == 'U')y++;
//         else if(s[i] == 'D')y--;
//         if(key.find({x,y}) != key.end()) {
//             cout << "Yes" << endl;
//             return 0;
//         } else {
//             key.insert({x,y});
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }
// int main() {
//     int n;
//     string s;
//     cin >> s;
//     vector<vector<bool>> key(n);
//     int x = 0;
//     int y = 0;
//     key[x][y] = true;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == 'R') {
//             x++;
//             if(!key[x][y]) {
//                 key[x][y] = true;
//             } else {
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         } else if (s[i] == '')
//     } 
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> x(5*n);
//     for(int i = 0; i < 5*n; i++) {
//         cin >> x[i];
//     }
//     sort(x.rbegin(), x.rend());
//     float sum = 0;
//     for(int i = n; i < 4*n; i++) {
//         sum += x[i];
//     }
//     sum /= 3*n;
//     cout << sum << endl;
//     return 0;
// }

// int main() {
//     string s;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++) {
//         if(0 <= s[i]-'a' && s[i]-'a' <= 26) {
//             continue;
//         } else {
//             cout << i+1 << endl;
//             return 0;
//         }
//     }
// }

// int main() {
//     string s, ans;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == '0') {
//             ans += '1';
//         } else {
//             ans += '0';
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main() {
//     int n, k;
//     string s;
//     cin >> n >> k;
//     cin >> s;
//     string ans;
//     bool key = true;
//     int t = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == 'o' && key) {
//             ans += 'o';
//             t++;
//         } else {
//             ans += 'x';
//         }
//         if(t == k) {
//             key = false;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main() {
//     int a, b;
//     cin >> a >> b;
//     if(a*2 == b || a*2+1 == b) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n+1), b(n+1), c(n+1);
//     for(int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     for(int i = 1; i <= n; i++) {
//         cin >> b[i];
//     }
//     for(int i = 1; i <= n; i++) {
//         cin >> c[i];
//     }
//     vector<int> count(n+1);
//     for(int i = 1; i <= n; i++) {
//         count[b[c[i]]] += 1;
//     }
//     ll ans = 0;
//     for(int i = 1; i <= n; i++) {
//         ans += count[a[i]];
//     }
//     cout << ans << endl;
//     return 0;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i,n)cin >> a[i];
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i,n)cin >> a[i];
//     int ans = 0;
//     for(int i = 0; i < n-1; i++) {
//         for(int j = i+1; j < n; j++) {
//             if(a[i] != a[j]) {
//                 ans++;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }
// int main() {
//     string s;
//     cin >> s;
//     reverse(s.begin(), s.end());
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == '6') {
//             s[i] = '9';
//         } else if (s[i] == '9') {
//             s[i] = '6';
//         }
//     }
//     cout << s << endl;
//     return 0;
// }
// bool solov_eight(int n) {
//     while(n != 0) {
//         if(n%8 == 7) {
//             return false;
//         } else {
//             n /= 8;
//         }
//     }
//     return true;

// }
// bool solov_ten(int n) {
//     string s = to_string(n);
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == '7') {
//             return false;
//         } else {
//             continue;
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;
//     int ans = 0;
//     for(int i = 1; i <= n; i++) {
//         if(solov_eight(i) && solov_ten(i)) {
//             ans++;
//         } else {
//             continue;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main() {
//     string s;
//     cin >> s;
//     int sum = 0;
//     int len = s.size();
//     for(int i = 0; i < len; i++) {
//         sum += (s[i]-'0');
//     }
//     if(sum % 9 == 0) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> a(n);
//     for(int i = 0; i < n; i++) {
//         int v;
//         cin >> v;
//         a.push_back(make_pair(v, i+1));
//     }
//     sort(a.rbegin(), a.rend());
//     cout << a[1].second << endl;
//     return 0;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     rep(i,n){
//         int k;
//         cin >> k;
//         a.push_back(k);
//         b.push_back(k);
//     }
//     sort(a.rbegin(), a.rend());
//     int key = a[1];
//     for(int i = 0; i < n; i++) {
//         if(key == b[i]) {
//             cout << i+1 << endl;
//             return 0;
//         }
//     }
// }

// int main() {
//     string s;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++) {
//         if(i%2 == 0) {
//             if('a' <= s[i] && s[i] <= 'z') {
//                 continue;
//             } else {
//                 cout << "No" << endl;
//                 return 0;
//             }
//         } else {
//             if('A' <= s[i] && s[i] <= 'Z') {
//                 continue;
//             } else {
//                 cout << "No" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "Yes" << endl;
//     return 0;
// }

// int main() {
//     int h,w;
//     cin >> h >> w;
//     vector<vector<int>> a(h, vector<int> (w));
//     for(int i = 0; i < h; i++) {
//         for(int j = 0; j < w; j++) {
//             cin >> a[i][j];
//         }
//     }
//     int m = 1000;
//     for(int i = 0; i < h; i++) {
//         for(int j = 0; j < w; j++) {
//             m = min(m, a[i][j]);
//         }
//     }
//     int ans = 0;
//     for(int i = 0; i < h; i++) {
//         for(int j = 0; j < w; j++) {
//             if(a[i][j] > m) {
//                 ans += (a[i][j]-m);
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main() {
    
//     vector<string> contest = {"ABC", "ARC", "AGC", "AHC"};
//     vector<bool> flag(4, false);
//     string str;
//     for(int i = 0; i < 3; i++) {
//         cin >> str;
//         for(int j = 0; j < 4; j++) {
//             if(contest[j] == str) {
//                 flag[j] = true;
//             }
//         }
//     }
//     for(int i = 0; i < 4; i++) {
//         if(!flag[i])cout << contest[i] << endl;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<string> s(n), t(n);
//     for(int i = 0; i < n; i++) {
//         cin >> s[i] >> t[i];
//     }
//     for(int i = 0; i < n-1; i++) {
//         for(int j = i+1; j < n; j++) {
//             if(s[i] == s[j] && t[i] == t[j]) {
//                 cout << "Yes" << endl;
//                 return 0;
//             } 
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }

// int main() {
//     int n,x;
//     cin >> n >> x;
//     string s;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == 'o') {
//             x++;
//         } else if(s[i] == 'x' && x == 0) {
//             continue;
//         } else if (s[i] == 'x') {
//             x--;
//         }
//     }
//     cout << x << endl;
//     return 0;
// }


// int main() {
//     ll n,t;
//     cin >> n >> t;
//     vector<ll> a(n);
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int g = a.size();
//     ll sum = 0;
//     bool key = false;
//     int point= 0;
//     while(!key) {
        

//         if(sum < t) {
//             ;
//         } else {
//             sum -= t;
//             int ans = a[point] - sum;
//             cout << point+1 << " " << ans << endl;
//             key = true;
//          }
//         if(point == g-1) {
//             point = 0;
//         } else {
//             point++;
//         }
//     }
//     return 0;
// }

// int main() {
//     ll n,t;
//     cin >> n >> t;
//     vector<ll> a(n);
//     ll total_music = 0;
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//         total_music += a[i];
//     }
//     ll sur = t % total_music;
//     ll sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += a[i];
//         if(sum < sur) {
//             ;
//         }else {
//             ll ans = sum - sur;
//             ans = a[i] -ans;
//             cout << i+1 << " " << ans << endl;
//             return 0;
//         }
//     }

// }

// int main() {
//     string s;
//     cin >> s;
//     if(s.size() != 8) {
//         cout << "No" << endl;
//         return 0;
//     }
//     int cnt = 0;
//     if(60 <= s[0] && s[0] <= 90) {
//         if(60 <= s[7] && s[7] <= 90) {
//             if(s[1] != '0') {
//                 for(int i = 1; i <= 6; i++) {
//                     if(48 <= s[i] && s[i] <= 57) {
//                         cnt++;
//                     } else {
//                         cout << "No" << endl;
//                         break;
//                     }
//                 }
//                 if(cnt == 6) {
//                     cout << "Yes" << endl;
//                 }
//             }else {
//                 cout << "No" << endl;
//             }
//         } else {
//             cout << "No" << endl;
//         }
//     }else {
//         cout << "No" << endl;
//     }
    
//     return 0;
// }

// int main() {
//     string s;
//     cin >> s;
//     int size = s.size();
//     for(int i = 0; i < size-1; i++) {
//         for(int j = i+1; j < size; j++) {
//             if(s[i] == 'C' && s[j] == 'F') {
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }


// int main() {
//     int n, m, t;
//     cin >> n >> m >> t;
//     vector<int> a(m), b(m);
//     for(int i = 0; i < m; i++) {
//         cin >> a[i] >> b[i];
//     }
//     vector<int> key(t);
//     for(int i = 0; i < t; i++) {
//         key[i] = -1;
//     }
//     for(int i = 0; i < m; i++) {
//         for(int j = a[i]; j < b[i]; j++) {
//             key[j] = 1;
//         } 
//     }
//     int tmp = n;
//     for(int i = 0; i < t; i++) {
//         if(tmp == n && key[i] == 1) {
//             continue;
//         } else {
//             tmp += key[i];
//             if(tmp <= 0) {
//                 cout << "No" << endl;
//                 return 0;
//             }
//         }
        
//     }
//     cout << "Yes" << endl;
//     return 0;
// }

// int main() {
//     double n, x;
//     cin >> n >> x;
//     vector<double> alc(n);
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         double v, p;
//         cin >> v >> p;
//         double holic = v*p;
//         sum += holic;
//         if(x*100 < sum) {
//             cout << i+1 << endl;
//             return 0;
//         }
//     }
//     cout << -1 << endl;
//     return 0;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//         sum += a[i];
//     }
//     double tmp = 1/(4*double(m));
//     double key = sum*tmp;

//     sort(a.rbegin(), a.rend());
//     for(int i = 0; i < m; i++) {
//         if(a[i] < key) {
//             cout << "No" << endl;
//             return 0;
//         }
//     }
//     cout << "Yes" << endl;
//     return 0;
// }
// int main() {
//     string s;
//     cin >> s;
//     int ans = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == 'w' ) {
//             ans += 2;
//         } else if (s[i] == 'v') {
//             ans += 1;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n+1);
//     vector<bool> b(n+1);
//     for(int i = 1; i <= n; i++) {
//         b[i] = false;
//     }
//     for(int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     bool key = true;
//     int ans = 0;
//     b[x] = true;
//     while(key) {
//         if(!b[a[x]]) {
//             b[a[x]] = true;
//             x = a[x];
//         } else if (b[a[x]]) {
//             key = false;
//         }
//     }
//    for(int i = 0; i <= n; i++) {
//         if(b[i]) {
//             ans++;
//         }
//    }
//    cout << ans << endl;
//    return 0;
// }


