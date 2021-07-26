


//242b
// #include <bits/stdc++.h>
// #define ll long long
// long long i,j;
// #define IO  ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
// #define en "\n"
// #define array(a,n) for(ll i=0;i<n;i++) cin>>a[i];
// #define f(i,a,b) for (int i = a; i < b; i++)
// #define all(x) (x).begin(), (x).end()
// #define pb push_back
// #define take int t;cin>>t;while(t--)
// using namespace std;
// typedef pair<int, int> pi;
// void solve()
// {
//     ll n, k = -1, ct = 0, sum = 0, ans = 0;
//     string s="";
//     set<ll> st;
//     map<ll, ll> mp;
//     cin>>n;
//     vector<vector<int>> v(n);
//     for (i = 1;i<=n;i++)
//         v[x].pb(y), v[y].pb(x);
// }

//     int main()
//     {
//         IO
// //        take
//         {
//             solve( );
//         }
//         return 0;
//     }

//277a
#include <bits/stdc++.h>
#define ll long long
long long i,j;
#define IO  ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define en "\n"
#define array(a,n) for(ll i=0;i<n;i++) cin>>a[i];
#define f(i,a,b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define take int t;cin>>t;while(t--)
using namespace std;
typedef pair<int, int> pi;
set<int> s;
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            s.insert(p);
}
void solve()
{
    ll  k = -1, ct = 0, sum = 0, ans = 0;
    //string s="";
    ll m, n;
    cin >> m >> n;
    ll a[m][n];
    f(i,0,m)
    {
        f(j, 0, n)
            cin >>a[i][j];
    }
    ll b[m][n];
    f(i,0,m)
    {
        f(j,0,n)
        {
            ll u = *s.lower_bound(a[i][j]);
            ct = u - a[i][j];
            b[i][j] = ct;
        }
    }
    ll mini = INT_MAX;
    sum = 0;
    f(i,0,m)
    {
        sum = 0;
        f(j,0,n)
        {
            sum += b[i][j];
        }
        mini = min(mini, sum);
    }

    f(i, 0, n)
    {
        sum = 0;
        f(j, 0, m)
        {
            sum += b[j][i];
        }
        mini = min(mini, sum);
    }
    cout << mini;
}
    int main()
    {
        SieveOfEratosthenes(100010);
        IO
//        take
        {
            solve( );
        }
        return 0;
    }




// #include <bits/stdc++.h>
// #define ll long long
// long long i,j;
// #define IO  ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
// #define en "\n"
// #define array(a,n) for(ll i=0;i<n;i++) cin>>a[i];
// #define f(i,a,b) for (int i = a; i < b; i++)
// #define all(x) (x).begin(), (x).end()
// #define pb push_back
// #define take int t;cin>>t;while(t--)
// using namespace std;
// typedef pair<int, int> pi;
// void dfs(vector<vector<ll>> v,vector<int>& vis,int s)
// {
//     vis[s] = 1;
//     for(auto child:v[s])
//     {
//         if(!vis[child])
//             dfs(v, vis, child);
//     }
// }
// void solve()
// {
//     ll  k = -1, ct = 0, sum = 0, ans = 0;
//     string s="";
//     set<ll> st;
//     ll m, n,x,y,z;
//     cin >> n >> m;
//     vector<vector<ll>>v(1000000);
//     f(i,0,n)
//     {
//         cin>>x;
//         if(x==0)
//             ct++;
//         else
//         {
//             cin >> y;
//             st.insert(y);
//             ll champ = x;
//             champ--;
            
//             while(champ>0)
//             {
//                 champ--;
//                 cin >> z;
//                 v[y].pb(z);
//                 v[z].pb(y);
//                 st.insert(z);
//             }
//         }
//     }
//     // for(auto x:st)
//     //     cout << x << " ";
//     vector<int> vis(m+1, 0);
//     for(auto x:st)
//     {
//         if(!vis[x])
//         {
//             vis[x] = 1;
//             //cout << x << " ";
//             ct++;
//             dfs(v, vis,x);
//         }
//     }
//     cout << en;
//     cout << ct-1;
// }
//     int main()
//     {
//         IO
// //        take
//         {
//             solve( );
//         }
//         return 0;
//     }