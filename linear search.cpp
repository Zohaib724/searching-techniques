#include<iostream>
using namespace std;
class A{
	public:
		int x,f=0,p=0;
		int a[100];
		int n;
		void input()
		{
			cout<<"enter the size of array";
        	cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"enter the elements";
				cin>>a[i];
			}
			cout<<"enter the number to be searched for";
			cin>>x;
		}
		void search()
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]==x)
				{
					f=1;
					p=i;
					break;
				}
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
