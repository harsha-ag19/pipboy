#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	bool prime[10000000+1];
	memset(prime, true, sizeof(prime));
	for (ll p = 2; p * p <= 10000000; p++)
	{
		if (prime[p] == true)
		{
			for (ll i = p * p; i <= 10000000; i+= p)
				prime[i] = false;
		}
	}
	vector<ll>v;
//	vector<ll>::iterator itr;
	for (ll p = 2; p <= 10000000; p++)
	{
        if (prime[p])
            v.push_back(p*p);
	}
 /*  	for(ll i=0;i<v.size();i++)
	{
	    cout<<v[i]<<" ";
	}*/
	for(ll i=0;i<n;i++)
	{
    if(binary_search(v.begin(),v.end(),a[i]))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
	}*/
}

