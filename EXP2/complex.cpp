#include<iostream>
using namespace std;

class complex
{
  private:
    int real , imag;
}

public
  complex()
    {
      real = 0;
      imag = 0;
    }
    
    complex(int r , int i )
    {
      real = r ;
      imag = i ;
    }
    
    complex operator + (complex c)
    {
      complex temp;
      
    }
