#include<iostream>
using namespace std;
class A{
public:
int f=0, p=0,x=0,l=0,r=0,m=0;
	int a[100];
	int n;
	void input()
	{
		cout<<"enter the size";
		cin>>n;
		r=n-1;
		for(int i=0;i<n;i++)
		{
			cout<<"enter the value";
			cin>>a[i];
		}
		cout<<"enter the number to be searched for";
		cin>>x;
		for(int i=0;i<n;i++)
		cout<<a[i];
	}
	void search()
	{ 
		while(l<=r)
		{ 
			m=(l+r)/2;
			if(x==a[m])
			{
				p=m;
				f=1;
				break;
			}
			else if(x<a[m])
			{
				r=m-1;
 			}
			else
			l=m+1;
		}
		if(f==1)
		cout<<"element found at position"<<p;
		else
		cout<<"element not found";
	}
}ob;
int main()
{
	ob.input();
	ob.search();
	return 0;
}
