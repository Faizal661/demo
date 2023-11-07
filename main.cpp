#include<iostream>

int Sum(int x,int y)
{
	return x+y;
}

int main()
{
	std::cout<<"In main" <<std::endl;
	std::cout<<Sum(5,6);
	
}