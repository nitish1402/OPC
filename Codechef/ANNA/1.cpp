#include<stdio.h>
 
int arr[10001];
 
int main(){
    int q,n;
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<q;i++){
        bool arr2[101]={0};
        int x,y,c,count=0;
        scanf("%d%d",&x,&y);
        for(int j=x-1;j<y;j++){
            c=arr[j];
            if(arr2[c]==0){
                arr2[c]=1;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
