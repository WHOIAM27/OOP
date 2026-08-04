#include<iostream>
using namespace std;

int main()
{
  int choice;
  float a ,b;
  
    
  cout<<"\n 1.Addition (+) \n 2.Subtraction (-) \n 3. Multiplication (*) \n 4.Division  (/) \n 5. EXIT"<<endl;
  
  do{
      cout<<"\nEnter 1st number \t";
      cin>>a;
  
      cout<<"Enter 2nd number \t";
      cin>> b;
  
      cout<<"\nchoose option : \t";
      cin>> choice;
  
      switch(choice)
      {
        case 1:
          cout<<"Result = "<< a + b<<endl;
          break;
   
        case 2:
          cout<<"Result = "<<  a - b<<endl;
          break;
   
        case 3:
          cout<<"Result = "<<  a * b<<endl;
          break;
   
        case 4:
          if(b!=0)
            cout<<"Result = "<<  a / b <<endl;
          else 
          cout<<"we can not divide by 0 "<<endl;
        break;
   
        case 5:
          cout<< "Exit"<<endl;
          break;
   
        default:
          cout<<"Select proper option"<<endl;
           cout<<"==========================================================================="<<endl;
          break;
      }
    } while(choice != 5);

  return 0;
}

