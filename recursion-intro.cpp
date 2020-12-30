// Recursion basic cheet sheet
#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if (n == 0)
        return 0;

    int prev = Sum(n - 1);
    return n + prev;
}
int power(int n, int p)
{
    if (p == 0)
        return 1;

    int prevPower = power(n, p - 1);
    return n * prevPower;
}

int fact (int n)
{
    // if (n == 1)
    // {
    //     return 1;
    // }

     if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int fibo(int n)
{
    if(n==0 || n==1)   // base case
      return n;

      return fibo(n-1)+fibo(n-2);
}


int main()
{

    cout << Sum(4) << "\n";
    cout << power(2, 3) << "\n";
    cout << fact(5) << "\n";
    cout<<fibo(6)<<"\n";

}