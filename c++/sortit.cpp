#include<stdio.h>
#include <stdlib.h>

int cmp()
int main()
{
    int A[]={3,5,-9,2,6};
    int n=5;
    int i;
    qsort(A,5,sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
     printf("\n");
   return 0;
}
