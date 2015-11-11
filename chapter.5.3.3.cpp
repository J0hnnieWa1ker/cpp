
// chapter.5.3.3.cpp
// This is example code from Chapter 5.3.3 "Non-errors" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//
#include "std_lib_facilities.h"
//------------------------------------------------------------------------------

int area(int length, int width)
{
    return length*width;
}

//------------------------------------------------------------------------------

int main()
{
    int x4 = area(10,-7);           // ok: but what is a rectangle with a width of -7?
    int x5 = area(10.7,9.3);        // ok: but calls area(10,9)
    char x6 = area(100, 9999);      // ok, but truncates the result
    cout << "x4 (10,-7)    is: " << x4 << endl;
    cout << "x5 (10.7,9.3) is: " << x5 << endl;
    cout << "x6 (100, 9999)is: " << x6 << endl;
    return area(4,4);
}
