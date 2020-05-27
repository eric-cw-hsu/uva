#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PB push_back
#define PII pair<int, int>
#define MP make_pair
#define all(x) x.begin(), x.end()
#define REP(x, y, z) for(int x = (y); x <= (z); x++)
#define REPP(x, y, z) for(int x = (y); x >= (z); x--)
#define F first
#define S second
#define MSET(x, y) memset(x, y, sizeof(x)) 
#define EB emplace_back
#define maxn
#define IOS ios::sync_with_stdio(false); cin.tie(0);

//structure

//declaration

//functions
bool check(string str){
    bool flag = true;

    for(int i = 0; i <= str.size()/2; i++){
        if(str[i] != str[str.size()-1-i]){
            flag = false;
            break;
        }
    }

    return flag;
}

int main(void)
{
	#ifdef DBG
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
	#endif

	IOS;

    int cases;
    string str;

    cin >> cases;

    while(cases--){
        cin >> str;
        int cnt = 0;

        do{
            string tmp = str;
            reverse(all(tmp));

            long long a = stoi(str);
            ll b = stoi(tmp);
            a += b;

            str = to_string(a);
            cnt += 1;
        }   while(!check(str));

        cout << cnt << ' ' << str << '\n';
    }

	return 0;
}