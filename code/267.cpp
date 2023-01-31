#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x < y) {
        cout << x << endl;
    }else if(x > y && 0 < z && z < y) {
        cout << x << endl;
    } else if(x > y && 0 > z) {
        cout << abs(z) + x << endl;
    } else {
        cout << -1 << endl;
    }     
    return 0;
}
*/

/*
int main() {
    int a,b;
    cin >> a >> b;
    int c[3] = {1, 2, 4};
    int d[3], e[3];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                int sum = i*1 + j *2 + k*4;
                if(a == sum) {
                    d[0] = i, d[1] = j; d[2] = k;
                }
            }
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                int sum = i*1 + j *2 + k*4;
                if(b == sum) {
                    e[0] = i, e[1] = j, e[2] = k;
                }
            }
        }
    }
    int ans = 0;

    for(int i = 0; i < 3; i++) {
        if(d[i] == 0 && e[i] == 0) {
            continue;
        } else {
            ans += c[i];
        }
    }
    cout << ans << endl;
    return 0;
}
*/
// int main() {
//     int n ; cin >> n;
//     string s;
//     while(n >0) {
//         n %= 16;
//         int a = n / 16;
//         if(a >= 10) {
//             a = a-10 + 'A';
//         }
//         s += char(n);
//     }
//     if(s.size() < 2) {
//         int k = 2 - s.size();
//         for(int i = 1; i <= k; i++) {
//             s += '0';
//         }
//     }
//     reverse(s.begin(), s.end());
//     cout << s << endl;
// }
/*
int n, a[100009], p[100009], q[100009];
int d, l[100009], r[100009];

int main() {
    
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> a[i];
    cin >> d;
    for(int i = 1; i <= d; i++) cin >> l[i] >> r[i];
    p[1] = a[1];
    for(int i = 2; i <= n; i++) {
        p[i] = max(p[i-1], a[i]);
    }
    for(int i = n-1; i >= 1; i++) {
        q[i] = max(q[i+1], a[i]);
    }
    for(int i = 1; i <= d; i++) {
        cout << max(p[l[i]-1], q[r[i]+1]) << endl;
    }
}
*/
// int main() {
//     int n; cin >> n;
//     vector<int> a(n+1), b(n+1);
//     for(int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     a[0] = 0;
//     for(int i = 1; i <= n; i++) {
//         b[i] = a[i] - a[i-1];
//     }
//     int d; cin >> d;
//     vector<int> l(d+1), r(d+1);
//     for(int i = 1; i <= d; i++) {
//         cin >> l[i] >> r[i];
//     }
//     vector<int> dam(d);
//     for(int i = 1; i <= d; i++) {
//         for(int j = l[i]; j <= r[i]; j++) {
//             dam[i] += b[j];
//         }
//     }
//     vector<vector<int>> ans(d+1, vector<int> (n+1));
//     for(int i = 0; i <= d; i++) {
//         for(int j = 0; j <= n; j++) {
//             ans[i][j] = 0;
//         }
//     }
//     for(int i = 1; i <= d; i++) {
//         for(int j = 1; j <= n; j++) {
//             ans[i][j] = 
//         }
//     }

// }
/*
int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<int> a(n+1), b(n+1), c(n+1), d(n+1);
    vector<vector<int>> z(h+1, vector<int> (w+1));
    vector<vector<int>> ans(h+1, vector<int> (w+1));

    for(int i = 0; i <= h; i++) {
        for(int j = 0; j <= w; j++) {
            z[i][j] = 0;
            ans[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for(int i = 1; i <= n; i++) {
        z[a[i]][b[i]] += 1;
        z[c[i]+1][d[i]+1] += 1;
        z[c[i]+1][b[i]] -= 1;
        z[a[i]][d[i]+1] -= 1;
    }
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            ans[i][j] = ans[i][j-1] + z[i][j];
        }
    }
    for(int j = 1; j <= w; j++) {
        for(int i = 1; i <= h; i++) {
            ans[i][j] = ans[i-1][j] + ans[i][j];
        }
    }
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(j >= 2)cout << " ";
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0; 
}
*/
/*
int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<int> a(n+1), b(n+1), c(n+1), d(n+1);
    vector<vector<int>> z(h+1, vector<int> (w+1));

    for(int i = 0; i <= h; i++) {
        for(int j = 0; j <= w; j++) {
            z[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = a[i]; j <= c[i]; j++) {
            for(int k = b[i]; k <= d[i]; k++) {
                z[j][k]++;
            }
        }
    }
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(j == w) {
                cout << z[i][j] << endl;
            } else {
                cout << z[i][j] << " ";
            }
        }
    }
    return 0;
}
*/

/*
int main() {
    int h, w;
    cin >> h >> w;
    int q;
    vector<vector<int>> x(h+1, vector<int> (w+1)), sum(h+1, vector<int> (w+1));
    

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++) {
            cin >> x[i][j];
        }
    }

    cin >> q;
    vector<int> a(q+1), b(q+1), c(q+1), d(q+1);
    for(int i = 1; i <= q; i++) {
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
        cin >> d[i];
    }

    for(int i = 1; i<= h; i++) {
        sum[i][0] = 0;
    }
    for(int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            sum[i][j] = sum[i][j-1] + x[i][j];
        }
    }
    vector<int> ans(q+1);

    for(int i = 1; i <= q; i++) {
        for(int j = a[i]; j <= c[i]; j++) {
            ans[i] += (sum[j][d[i]] - sum[j][b[i]-1]);
        }
    }

    for(int i = 1; i <= q; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
*/