#include<memory>
#include<iostream>
//Create ref function w reference and pointer parameter 
void ref_ptr(int& num);

//Create return pointer function

void use_smart_pointer(std::unique_ptr<int>& num);


std::unique_ptr<int> get_smart_pointer();
