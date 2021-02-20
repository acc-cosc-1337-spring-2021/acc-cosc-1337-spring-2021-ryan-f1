//cpp
#include "decision.h"


std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;

    if(grade >= 90 && grade <= 100)
    {
        letter_grade = "A";
    }
     else if(grade >= 80 && grade < 90)
    {
        letter_grade = "B";
    }
     else if(grade >= 70 && grade < 80)
    {
        letter_grade = "C";
    }
     else if(grade >= 60 && grade < 70)
    {
        letter_grade = "D";
    }
    else 
    {
        letter_grade = "F";
    }

    return letter_grade;
}


std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;
    grade = grade - (grade % 10);

    switch(grade)
    {
        case 90: case 100:
            letter_grade = "A";
            break;
        case 80:
            letter_grade = "B";
            break;
        case 70:
            letter_grade = "C";
            break;
        case 60:
            letter_grade = "D";
            break;
        case 0: case 10: case 20: case 30: case 40: case 50:
            letter_grade = "F";
            break;
    }
    
    return letter_grade;
}