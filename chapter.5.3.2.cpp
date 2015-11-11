
// chapter.5.3.2.cpp
// This is example code from Chapter 5.3.2 "Type errors" of
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
    int x0 = arena(7,10);
    int x1 = area(7,20);
    int x2 = area("seven",2);
    cout << "x0 is: " << x0 << endl;
    return area(4,4);
}

