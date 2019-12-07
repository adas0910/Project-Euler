//problem #2: Even fibonacci numbers
#include <iostream>
using namespace::std;


int fun(int n)
{
   int sum=0, a=0, b=1;
   int fib=a+b;
   while(fib<=n)
   {
       fib=a+b;
       a=b;
       b=fib;
       if(fib%2==0)
       {
           sum+=fib;
       }

   }
   return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}