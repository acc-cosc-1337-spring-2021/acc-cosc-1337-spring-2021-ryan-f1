#include "ref_pointers.h"
#include<iostream>
#include<vector>
#include<memory>
using std::cout; using std::unique_ptr; using std::vector;



int main() 
{
	int num = 20, num1 = 25;
	int& num_ref = num;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num vian num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num vian num_ref: "<<num_ref<<"\n";


	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";

	num_ref = num1; //references cannot be reassigned. changes initial value 

	cout<<"Address of num vian num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num vian num_ref: "<<num_ref<<"\n";

	int num2 = 10, num3 = 15;
	int* num_ptr = &num2;

	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num2: "<<&num2<<"\n";
	cout<<"Address of num2 vian num_ptr: "<<num_ptr<<"\n";
	cout<<"value of num2 via num_ptr: "<<*num_ptr<<"\n";
	cout<<"Address of num_ptr: "<<&num_ptr<<"\n";

	/*
	int up_num;
	vector<unique_ptr<int>> numbers;
	numbers.push_back(std::move(up_num));
	*/

	unique_ptr<int> up_num2 = get_smart_pointer();
	cout<<"Value: "<<*up_num2;

	return 0;
}