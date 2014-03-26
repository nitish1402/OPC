#include <cstdio>
#include<iostream>
using namespace std;

void square(int & num) {
	num = num * num;
}

int main() {
	int x = 4;
	square(x);
	printf("%d\n", x);
	return 0;
}
