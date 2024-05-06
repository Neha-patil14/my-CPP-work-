#include<iostream>
using namespace std;
class Addition
{
	public:
		void sum(int a,int b)
		{
			cout<<"a+b:"<<a+b;
		}
		void sum(int a,int b,int c)
		{
			cout<<"a+b+c:"<<a+b+c;
		}
};
int main()
{
	Addition obj;
		obj.sum(12,17);
		cout<<endl;
			obj.sum(12,17,14);
}
