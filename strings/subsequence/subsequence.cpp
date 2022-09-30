#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mod 1000000007
#define endl '\n'
unordered_set<string> st;

void subsequence(string str)
{
	for(int i = 0; i < str.length(); i++) 
	{

		for(int j = str.length(); j > i; j--) 
		{
			string sub_str = str.substr(i, j);
			st.insert(sub_str);

			for (int k = 1; k < sub_str.length(); k++) 
			{
				string sb = sub_str;

				sb.erase(sb.begin() + k);
				subsequence(sb);
			}
		} 
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin>>n;//string length
	string str;
	cin>>str;
	subsequence(str);
	for(auto it:st)
		cout<<it<<endl;

	return 0;
}
