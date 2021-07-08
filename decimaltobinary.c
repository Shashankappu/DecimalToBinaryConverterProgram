#include<stdio.h>
	int main()
{
	 int Dnum[32],i,Bd,Adnum[32],j;
	 double a,n;
	 printf("Enter a decimal number: ");
	 scanf("%lf",&a);
	 Bd = a ;
	 float Ad = a - Bd;
	 for(i=0;Bd>0;i++)
	 {
		 Dnum[i] = Bd%2;
		 Bd = Bd/2;
	 }
	 for(i=i-1;i>=0;i--)
	 {
		 printf("%d",Dnum[i]);
	 }
	 printf(".");
	 if(Ad>0)
	 {
		 for(j=0;j<32;j++)
		 {
			 Adnum[j] = Ad*2;
			 n =  Ad*2;
			 Ad = n - Adnum[j];
		 }
	     for(j=0;j<32;j++)
	     {
			 printf("%d",Adnum[j]);
	     }
	 }
	 return 0;	 
}
