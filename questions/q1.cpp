#include<iostream>
using namespace std;

int PrimeCheck(int n)
{
    int flag = 1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        flag=0;
    }
    if(flag==1)
    return 1;
    else
    return 0;
}

int CoprimeCkeck(int num1, int num2)
{
    int hcf;
    for(int i=1; i<num1; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    if(hcf==1)
    return 1;

}

int main()
{
int num1, num2;
cout << "Enter two numbers : ";
cin >> num1 >> num2;

//Checking for prime
if(PrimeCheck(num1)==1)
cout << num1 << " is a prime number" << endl;
else
cout << num1 << " is not a prime number" << endl;

if(PrimeCheck(num2)==1)
cout << num2 << " is a prime number" << endl;
else
cout << num2 << " is not a prime number" << endl;

//Checking for co-prime
if(CoprimeCkeck(num1,num2)==1)
cout << num1 << " and " << num2 << " are co-primes" << endl;
else
cout << num1 << " and " << num2 << " are not co-primes" << endl;

    return 0;
}