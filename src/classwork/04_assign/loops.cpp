//cpp
#include "loops.h"

int factorial(int num)
{
    int product = 1;
    while(num > 0)
    {
        product *= num;
        num -= 1;
    }

    return product;
}