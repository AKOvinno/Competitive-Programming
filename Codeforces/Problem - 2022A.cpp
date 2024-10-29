#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int n,r;
		cin>>n>>r;
		vector<int>arr(n);
		int leftalone=0;
		int happy=0;
		for(int k=0;k<n;k++)
		{
			cin>>arr[k];
			happy+=(arr[k]/2)*2;
			r-=arr[k]/2;
			leftalone+=arr[k]%2;
		}
		if(leftalone>r)
			happy+=r*2-leftalone;
		else
		 	happy+=leftalone;
		cout<<happy<<endl;
    }
    return 0;
}

