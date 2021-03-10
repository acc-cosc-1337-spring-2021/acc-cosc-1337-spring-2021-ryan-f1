#include "for_ranged.h"
#include<iostream>
#include<vector>

using std::vector; using std::cout;

/*
Function loop_vector_w_for_ranged
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using a for ranged loop with auto as follows: 9 10 99 5  67

@param none
*/
void loop_vector_w_for_ranged(std::vector<int> nums)
{
    for(auto num: nums)
    {
            cout<<num<<"\n";
            num = -1;

    }



}

/*
Function loop_vector_w_for_ranged_val

Displays the numbers to screen using.

@param vector<int>
*/



/*
Function loop_vector_w_for_ranged_ref

Displays the numbers to screen 

@param vector<int>&
*/


/*
Function loop_vector_w_for_ranged_const_ref

Displays the numbers to screen

@param const vector<int>&
*/

