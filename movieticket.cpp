#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string mname;
	int nad,nch,nt;
	float pad,pch,perdonation,gamount,damount,amount;
	
	cout<<"Enter movie name: ";
	getline(cin,mname);
	cout<<"Adult ticket price: ";
	cin>>pad;
	cout<<"Child ticket price: ";
	cin>>pch;
	cout<<"Number of adult tickets Sold: ";
	cin>>nad;
	cout<<"Number of child tickets Sold: ";
	cin>>nch;
	cout<<"Percentage of gross for donation to charity: ";
	cin>>perdonation;
	
	gamount=(nad*pad)+(nch*pch);
	damount=(gamount*perdonation)/100;
	nt=nch+nad;
	amount=gamount-damount;
	
//	cout<<setfill('*')<<setw(40)<<endl;
	cout<<endl;
	cout<<fixed<<setprecision(2);
	//cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	cout<<left<<setw(40)<<setfill('.')<<"Movie name : "<<right<<mname<<endl;
	cout<<left<<setw(40)<<setfill('.')<<"Number of tickets Sold : "<<right<<nt<<endl;
	cout<<left<<setw(40)<<setfill('.')<<"Gross Amount : "<<right<<gamount<<endl;
	cout<<left<<setw(40)<<setfill('.')<<"Percentage of Gross Amount Donateed : "<<right<<perdonation<<endl;
	cout<<left<<setw(40)<<setfill('.')<<"Amount Donated : "<<right<<damount<<endl;
	cout<<left<<setw(40)<<setfill('.')<<"Net Sale : "<<right<<amount<<endl;
}
