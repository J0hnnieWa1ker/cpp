
//
// This is example code from Chapter 3.1 "Input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------
int main()
{
cout << "Please enter your first and second names\n";
          string first;
          string second;
          cin >> first >> second;                         // read two strings
          string name = first + ' ' + second;       // concatenate strings
          cout << "Hello, " << name << '\n';
}
//------------------------------------------------------------------------------

