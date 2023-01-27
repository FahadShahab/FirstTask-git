#include<iostream>
using namespace std;

int main()
{
int n,rd,rev=0;
cout << "Enter a number : " << endl;
cin >> n;

while(n!=0)
{
    rd = n%10;
    rev = rev*10 + rd;
    n = n/10;
}

cout << "Reversed number is " << rev << endl;
    return 0;
}