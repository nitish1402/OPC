#include <iostream>
#include <cstring>
#include <map>
#include <utility>
#include <vector>

using namespace std;

class MyString
{
	public:
	  
	    string data;
};



int main()
{
	map<string,int> M;
	map<string,int> M1;
    vector<int> A;
    vector<int> B(1000);
    vector<int> C[1000];
	string s1,s2;
	s1="Hello World";
	s2="Hello World";
	M[s1]=10;
	M[s2]=20;
	A.push_back(2);
	A.push_back(3);
	A.push_back(4);
	A.push_back(5);
	A.push_back(6);
	A.push_back(7);
	A.push_back(8);
	A.push_back(9);
	MyString s3;
	MyString s4;
	
	s3.data=s1;
	s4.data=s2;
	
	M1[s3.data]=10;
	M1[s4.data]=20;
	//cout<<M[s1]<<endl;
	//M1.insert(make_pair(s3,10));
	//M1[s4]=20;
	
	//cout<<M1[s3.data]<<endl;
	cout<<sizeof(C)<<endl;
	return 0;
}
	
	
	
		
