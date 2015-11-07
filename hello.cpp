
//
// This is example code from Chapter 3.1 "Input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------
int main()
{
          cout << "Please enter two names\n";
          string first;
          string second;
          cin >> first >> second;           // read two strings
          if (first == second) cout << "that's the same name twice\n";
          if (first < second)
                    cout << first << " is alphabetically before " << second <<'\n';
          if (first > second)
                    cout << first << " is alphabetically after " << second <<'\n';
}

//------------------------------------------------------------------------------

