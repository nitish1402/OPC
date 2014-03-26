#include <iostream>

using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
		cin>>x>>y;
		cout<<-(x-y)<<endl;
		cout<<(x ^ y)<<endl;
		cout<<((x ^ y) & -(x < y))<<endl;
		
		int r=y ^ ((x ^ y) & -(x < y));
		cout<<r<<endl;
	}
	return 0;
}
        
