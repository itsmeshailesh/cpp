#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	char A[100][100];
	static int n,r[100],c[100],maxr=0,maxc=0,maxri,maxci;
	cin>>n;
	for(int x=0;x<n;x++)
	{ r[x]=0;c[x]=0;}
	
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	     {
	     	cin>>A[i][j];
	     	if(A[i][j]=='C')
	     	{
	     		r[i]+=1;
	     		c[j]+=1;
	     		if(r[i]>maxr)
	     		{
	     			maxr=r[i];
	     			maxri=i;
	     			}
	     	   if(c[j]>maxc)
	     		{
	     			maxc=c[j];
	     			maxci=j;
	     			}
	     		
	     	}
	     	
         }
         
	     	if(maxc<maxr)
	     	{
	     		if((n-maxci+1)>n/2&&(n-maxci+1)<maxc)
	     		cout<<(n-maxci+1);
	     		else cout<<maxc;
	     	}
	     	else cout<<maxr;

}
