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
string code = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
//functions
map<char, char> mp;

int main(void)
{
	#ifdef DBG
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
	#endif

	IOS;

	for(int i = 2; i < code.size(); i++){
		mp[code[i]] = code[i-2];
	}
	mp[' '] = ' ';

	string str;

	while(getline(cin, str)){
		for(int i = 0; i < str.size(); i++)
			cout << mp[str[i]];
		cout << '\n';
	}

	return 0;
}