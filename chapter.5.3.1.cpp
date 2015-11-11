
//
// This is example code from Chapter 5.3.1 "Syntax errors" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//------------------------------------------------------------------------------
#include "std_lib_facilities.h"
int area(int length, int width)
{
    return length*width;
}
//------------------------------------------------------------------------------

int main()
{
    int s1 = area(7,2);        // fixed error: ) missing
    //int s1 = area(7);        // fixed error: ; missing
    //int s3 = area(7);        // fixed error: Int is not a type
    //int s4 = area(7);        // fixed error: non-terminated character (' missing)
    cout << "s1 is: " << s1 << endl;
    return area(4,4);
}

