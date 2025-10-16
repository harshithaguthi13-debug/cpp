#include<iostream> 
#include<string> 
using namespace std; 
class Bank 
{ 
 private: 
 int accNumber; 
 string name; 
 double balance; 
  
 public: 
 Bank(int accno,string accname,double bal) 
 { 
  accNumber=accno; 
  name=accname; 
  balance=bal; 
 } 
void withdraw(double amount) 
 { 
  if(amount < 0) 
  { 
   cout<<"Withdrraw Not Allowed"; 
  } 
  else if(balance < amount) 
  { 
   cout<<"Insufficient Balance"; 
  } 
  else 
  { 
   balance -=amount; 
   cout<<"Amount withdraw:"<<balance; 
  } 
 } 
 void deposit(double amount) 
 { 
  if(amount > 0) 
  { 
   balance += amount; 
   cout<< "Amount is Deposited:"<<balance<<endl; 
  } 
  else 
  { 
   cout<<"Not allowed to deposite"<<balance<<endl; 
  } 
 } 
 void displayBalance() 
 { 
  cout<<"Acc num:"<<accNumber<<endl; 
  cout<<"Acc Name:"<<name<<endl; 
  cout<<"Balance:"<<balance<<endl; 
 } 
}; 
int main() 
{ 
 Bank bank(1324,"Harshitha",5000.00); 
 bank.displayBalance(); 
 bank.deposit(50000.00); 
 bank.withdraw(14500.00); 
 return 0; 
}
