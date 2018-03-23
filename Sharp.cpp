#include<iostream> 
using namespace std;

int main () 
{ 
  int n, i, s; 
  float av; 

  cout<<"\nEnter the Value of n : "; 
  cin>>n;
  int a[n];
  int *pointer = a;
  cout<<"\nEnter the Different "<<n<<" Values : "; 
  for (i = 0; i < n; i++) 
  { 
    cin>>*(pointer+i); 
  }
  
  s=0; 
  for(i=0; i<n; i++)
  { 
    s=s+*(pointer+i); 
  } 

  av=(float)s/(n); 
  cout<<"\nAverage of "<<n <<" Values is : "<<av<<"\n"; 

  return 0;
}
