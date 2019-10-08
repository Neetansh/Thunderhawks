/*
*   Created By Syed Modassir Ali
*   B.Tech CSE, Jalpaiguri Government Engineering College(2023)
*   Note: This program can be used to deal with numbers only.
*/

//Template defiantions
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

template <class T> T pallindrome(T &a)
{
	T r,s;
	s=0;
	r=a;
	while(r>0)
	{
		s=(s*10)+(r%10);
		r=r/10;
	}
	cout<<"Pallindrome is "<<s;
}

int main()
{
fio;
ll n;
cin>>n;
pallindrome(n);
return 0;
}
