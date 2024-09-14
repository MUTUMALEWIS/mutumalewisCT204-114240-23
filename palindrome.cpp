#include<iostream>
using namespace std;
bool istrue(int num)
{	if(num<0)return false;
    int original = num, reversed = 0;
	while(num != 0)
	{
    int number= num % 10;
	reversed = reversed * 10 + number;
	num/=10;	
	}
	return original==reversed;
}
int main()
{
	int num;
	cout << "enter a number:";
	cin >> num;
	if(istrue(num))
	{
		cout<<num<<" is a palindrome."<<endl;
	}
	else{
		cout<<num<<" is  not a palindrome."<<endl;
	}
	return 0;
}
