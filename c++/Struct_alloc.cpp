// This Programm checks the memory alignment of structure
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <complex>
#include <vector>
#include <cmath>
#include <ctime>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <utility>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll unsigned long long
#define number32 4294967296ull
#define MAX 100001

using namespace std;

struct ME
{
	string name;
	string dob;
	string course;
	int age;
	double cpi;
	string fav_color;
	struct ME* next;
}ME;

int main()
{
	ME.name="Nitish";
	ME.dob="14-02-1993";
	ME.course="CSE-B.Tech";
	ME.age=19;
	ME.cpi=8.6;
    ME.fav_color="blue";

    cout<<ME.name<<" "<<&ME.name<<" "<<sizeof(ME.name)<<endl;
    
    cout<<ME.dob<<" "<<&ME.dob<<" "<<sizeof(ME.dob)<<endl;
    
    cout<<ME.course<<" "<<&ME.course<<" "<<sizeof(ME.course)<<endl;
    
    cout<<ME.age<<" "<<&ME.age<<" "<<sizeof(ME.age)<<endl;
    
    cout<<ME.cpi<<" "<<&ME.cpi<<" "<<sizeof(ME.cpi)<<endl;
    
    cout<<ME.fav_color<<" "<<&ME.fav_color<<" "<<sizeof(ME.fav_color)<<endl;
    
    cout<<sizeof(ME.next)<<endl;
    
    cout<<sizeof(ME)<<endl;
    return 0;
}
