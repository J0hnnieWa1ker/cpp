
//
// This is example code from 4.4.2.3 for-statements
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"
//------------------------------------------------------------------------------
int square(int x)    // return the square of x
{
          return x*x;
}
int main()
{
          for (int i = 0; i<100; ++i)
                    cout << i << '\t' << square(i) << '\n';
}

