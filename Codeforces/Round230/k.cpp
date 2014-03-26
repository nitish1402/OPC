#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	//cout<<s;
	int n,i,t,e;
	n=t=i=e=0;
	for(int j=0;j<s.length();j++)
		{
			if(s[j]=='e')e++;
			else if(s[j]=='i')i++;
			else if(s[j]=='n')n++;
			else if(s[j]=='t')t++;
		}
	int count=0;
	if(n>=3 && i>=1 && e>=3 && t>=1)
	{
		count=1;n-=3;e-=3;i-=1;t-=1;
		if(i>=t)
		{
			if(n/2 >=e/3)
			{
				if(t>e/3)count+=(e/3);
				else count+=t;
			}
			else
			{
				if(t>n/2)count+=(n/2);
				else count+=t;
			}
		}
		else
		{
			if(n/2 >=e/3)
			{
				if(i>e/3)count+=(e/3);
				else count+=i;
			}
			else
			{
				if(i>n/2)count+=(n/2);
				else count+=i;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
