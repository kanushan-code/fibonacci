//kanushan
#include <iostream>
using namespace std;



int main()
{
int i,n,number1=0,number2=1,nextTerm;
cout<<"Fibino serize size:"	;
cin>>n;
   for(i=1;i<=n;i++)
   {
    	cout<<i<<"  "<<number2<<" "<<endl;
    	nextTerm= number1 + number2;
    	number1=number2;
    	number2=nextTerm;
	
   }
	
	
return 0;
}


