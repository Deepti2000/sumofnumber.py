#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;

 

void getinfo(string& user_name, int& usr_age)
{
  cout << "Enter the name" << endl;
  cin >> user_name;
  cout << "Enter the age " << endl;
  cin >> usr_age;
}

 

void displ(string user_name, int usr_age)
{
  cout << "The info is displayed user_name == " << user_name << endl;
  cout << "The age == " << usr_age << endl;
}

 

void del(string& user_name, int& usr_age)
{
  //getinfo(user_name, usr_age);
  cout<<"information deleted"<<endl;
}

 

int main()
{
  int choice;
  string user_name;
  int usr_age;
  while(choice!=5)
  {
  cout<<"enter the choice"<<endl;
  cin>>choice;
  switch (choice)
  {
    case 1:
      getinfo(user_name, usr_age);
      break;
    case 2: 
      del(user_name, usr_age);
      break;
    case 3:
      displ(user_name, usr_age);
      break;
    case 4:
      cout << "Turning off the application" << endl;
      break;
    default:
       cout<<"invalid option "<<endl;
       break;
  }
  }
  return 0;
}
