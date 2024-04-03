#include<iostream>
using namespace std;

class date
{
	int day;
	int month;
	int year;
	
	public:
		int getday();
		int getmonth();
		int getyear();
		void setdate(int , int , int);
		void increment();
		void decrement();
		int isleapyear();
};

void date::setdate(int d,int m,int y)
{
	day = d;
	month = m;
	year = y;
}

void date::getday()
{
	return day;
}

void date::getmonth()
{
	return month;
}

void date::getyear()
{
	return year;
}

int main()
{
	int d,m,y;
	date d1;
	cin>>d>>m>>y;
	
	d1.setdate(d,m,y);
	
	cout<<d1.getday();
	cout<<d1.getmonth();
	cout<<d1.getyear();
}
