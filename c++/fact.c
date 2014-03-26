#include <stdio.h>



int main (int argc, char *argv[]) {
	int i=1;
	if(i==1)
	{
		goto first;
	}
	else if(i==2) goto second;
	else if(i==3) goto third;
    first: printf("%s\n",argv[i++]);
    second: printf("%s\n",argv[i++]);
    third: printf("%s\n",argv[i++]);
	return 0;
}
