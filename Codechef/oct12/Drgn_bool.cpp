#include<stdio.h>
typedef struct SoType{
      int power;
      int level;
}s;
int main(){
      s SoInt[101];
      s SoFloat[101];
      s ref[101]={0};
      s ref1[101]={0};
      int level;
      int n,m,t,i,j,req;
      scanf("%d",&t);
      while(t--){
         req=0;
	 for(i=1;i<101;i++){
		SoInt[i].power=0;
		SoInt[i].level=0;
                SoFloat[i].power=0;
                SoFloat[i].level=0;
                ref[i].power=0;
                ref[i].level=0;
                ref1[i].power=0;
                ref1[i].level=0;
         }
         scanf("%d %d",&n,&m);
         for(i=1;i<=n;i++){
            scanf("%d %d",&SoInt[i].power,&SoInt[i].level);
         }
         for(j=1;j<=m;j++){
            scanf("%d %d",&SoFloat[j].power,&SoFloat[j].level);
         }
         for(level=1;level<=100;level++){
           for(i=1;i<=n;i++){
            if(level==SoInt[i].level){
               ref[level].power+=SoInt[i].power;
             }
           }
         }
        for(level=1;level<=100;level++){
           for(j=1;j<=m;j++){
            if(level==SoFloat[j].level){
               ref1[level].power+=SoFloat[j].power;
            }
          }
        }
       for(level=1;level<=100;level++){
         if(ref[level].power>=ref1[level].power){
             ref[level].power=ref[level].power-ref1[level].power;
         }
         else{
            ref1[level].power=ref1[level].power-ref[level].power;
            req+=ref1[level].power;
         }
        }
        printf("%d\n",req);
   }
         
     return 0;
     
}

