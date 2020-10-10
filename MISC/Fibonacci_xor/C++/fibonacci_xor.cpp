//Fibonacci XOR
/*You are given three integers firstNumber, secondNumber, and n, calculate f(n), where f(n) is the xor of last two numbers
i.e, f(n) = f(n-1)?f(n-2), where ? is xor operation.
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int firstNumber,secondNumber,n;
    
    cin>>firstNumber>>secondNumber>>n;
    int rem=n%3;
    if(rem==0) cout<<firstNumber<<endl;
    else if(rem==1) cout<<secondNumber<<endl;
    else cout<<(firstNumber^secondNumber)<<endl;
  
  return 0;
}
 