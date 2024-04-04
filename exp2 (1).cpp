#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  string name;
  int no_adult,no_child;
  float adult_price,child_price,pert_gross,total_tickets,gross_amt,amt_donate,net_sale;
  cout<<"enter the movie name=";
  cin>>name;
  
  cout<<"enter the adult numbers=";
  cin>>no_adult;
  
  cout<<"enter the child numbers=";
  cin>>no_child;
  
  cout<<"enter the adult ticket price=";
  cin>>adult_price;
  
  cout<<"enter the child ticket price=";
  cin>>child_price;
  
  cout<<"enter the percentage gross amount=";
  cin>>pert_gross;
  
  total_tickets=no_adult+no_child;
  
  cout<<"the total number of tickets="<<total_tickets<<endl;
  
  gross_amt=(adult_price*no_adult)+(child_price*no_child);
  
  cout<<"the gross amount ="<<gross_amt<<endl;
  
  amt_donate=(gross_amt*pert_gross/100);
  cout<<" the amount donated="<<amt_donate<<endl;

  
  net_sale=gross_amt-amt_donate;
  cout<<"the net sale of the ticket="<<net_sale<<endl;
  
  cout<<setfill('.')<<setw(35)<<left<<"name"<<" "<<right<<name<<endl;
  cout<<setfill('.')<<setw(35)<<left<<"number of tickets"<<" "<<right<<total_tickets<<setw(10)<<endl;
  cout<<setfill('.')<<setw(35)<<left<<"gross amount"<<" "<<" $"<<right<<gross_amt<<endl;
  cout<<setfill('.')<<setw(35)<<left<<"percentage of gross amount donated"<<" "<<right<<pert_gross<<" %"<<endl;
  cout<<setfill('.')<<setw(35)<<left<<"amount donated"<<" "<<" $"<<right<<amt_donate<<right<<endl;
  cout<<setfill('.')<<setw(35)<<left<<"net_sale"<<" "<<" $"<<right<<net_sale;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
   	
}
