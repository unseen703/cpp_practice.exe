#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(arr, n)           \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// cout << "Case #" << i << ": " <<  << endl;
// never ever use endl until asked
// shortest path -> bfs

/*int bfs(string src, string dst)
{

    int sx = get_x(src),  sy = get_y(src),  fx = get_x(dst),  fy = get_y(dst);
    lev[sx][sy] = 0;
    vis[sx][sy] = 1;

    queue<pii> q;
    q.push({sx, sy});
    while (!q.empty())
    {
        pii v = q.front();
        int x = v.first;
        int y = v.second;
        q.pop();
        for (auto p : moves)
        {
            int ch_x = x + p.first;
            int ch_y = y + p.second;
            // cout << lev[fx][fy];
            if (!IsValid(ch_x, ch_y))
            {
                continue;
            }
            if (!vis[ch_x][ch_y])
            {
                q.push({ch_x, ch_y});
                vis[ch_x][ch_y] = 1;
                lev[ch_x][ch_y] = lev[x][y] + 1;
            }
        }
        if (lev[fx][fy] != INT_MAX)
        {
            break;
        }
    }
    return lev[fx][fy];
}*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(arr, n)           \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// cout << "Case #" << i << ": " <<  << endl;
// never ever use endl until asked

class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        int cnt[26] = {0};
        int vis[26] = {0};
        for (char c : s)
        {
            cnt[c - 'a']++;
        }
        // int vis[26]={0};
        string ans = "";
        for (char c : s)
        {
            if (vis[c - 'a'])
                continue;

            else
            {

                while (ans.size() > 0 && cnt[ans.back() - 'a'] > 0 && ans.back() > c)
                {
                    vis[ans.back() - 'a'] = 0;
                    cnt[ans.back() - 'a']--;
                    ans.pop_back();
                }
                ans.push_back(c);
                vis[c - 'a'] = 1;
            }
        }
        return ans;
    }
};
 string removeDuplicateLetters(string s)
    {
        int cnt[26] = {0};
        int vis[26] = {0};
        for (char c : s)
        {
            cnt[c - 'a']++;
        }
        // int vis[26]={0};
        string ans = "";
        for (char c : s)
        {
            if (vis[c - 'a'] == 1)
               { cnt[c - 'a']--;
                    continue;}

                while (ans.size() > 0 && cnt[ans.back() - 'a'] > 0 && ans.back() > c)
                {
                    char k = ans.back() ;
                    if(cnt[ans.back() - 'a'] >1)
                 {  
                    vis[ans.back() - 'a'] = 0;
                      ans.pop_back();
                    }
                    cnt[k - 'a']--;
                    cout<<ans<<"\n";
                }
                    // cout<<cnt[k-'a']<< k<<"\n";
                ans.push_back(c);
                vis[c - 'a'] = 1;
            
        }
        return ans;
    }

int main()
{

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    { string s = "bbcaac";
        cout<< removeDuplicateLetters(s);
        // cout<< removeDuplicateLetters(s)[1];
    }

    return 0;
}
