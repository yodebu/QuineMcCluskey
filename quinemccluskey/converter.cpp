#include <iostream>
#include <cstdio>
#include <fstream>
#include<cmath>
#include<cstdlib>

using namespace std;

void Convert(int decimalNumber, int n)
{

    long int remainder, quotient;
    int binaryNumber[100],j;
    quotient = decimalNumber;
    for(j = n-1 ;j>= 0;j--)
    {
         binaryNumber[j]= quotient % 2;
	 quotient = quotient/2;
    }

    for(j=0; j<n; j++)
	cout<<binaryNumber[j];
    cout<<" 1"<<endl;
}



int power(int base, int exp) { 

if (exp==1)
	return base * 1;

else if (exp >-1)
	exp--;

return base * (power(base,exp));

}


int main()
{
   int roll, n, t, temp;
   cout<<"\nENTER YOUR ROLL NUMBER - ";
   cin>>roll;
   cout<<"\nENTER THE NUMBER OF VARIABLES -";
   cin>>t;
   srand(roll);
   n=rand()%power(2,t);
   
   freopen("tcase.txt","w",stdout);
   cout<<t<<endl<<n<<endl;
   for(unsigned int i = 0; i < n; i++)
   {
      temp =rand()%power(2,t);
      Convert(temp, t);
   }
}
