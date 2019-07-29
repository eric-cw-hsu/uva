#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define ll long long
#define PB push_back
#define PP pair<int, int>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0)
#define maxn

//structure

//declaration
bool flag;
string in;
//functions

int main(void)
{
	IOS;
	
	#ifndef file
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
	#endif

    flag = 0;
    while(getline(cin, in))
    {
        for(int i = 0; i < in.size(); i++)
        {
            if(in[i] == '"')
            {
                if(!flag)
                {
                    cout << "``";
                    flag = 1;
                }

                else
                {
                    cout << "''";
                    flag = 0;
                }
                
            }
            
            else
            {
                cout << in[i];
            }
        }
        cout << '\n';
    }

	return 0;
}