#include<iostream>
using std::cout;

int main() 
{
	auto num = 5;
	cout<<"size of num in bytes: "<<sizeof(num)<<"\n";
	cout<<"the memory address of num is: "<<&num<<"\n";

	int& num_ref = num;//a clone of num
	cout<<"Value of num_ref is: "<<num_ref;
	return 0;
}