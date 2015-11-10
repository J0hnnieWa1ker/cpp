
//
// This is example code from 4.4.2.1 while-statements
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
         int i = 0;           // start from 0
         while(i<200) {
                   cout << i << '\t' << square(i) << '\n';
                   ++i;        // increment i (that is, i becomes i+1)
         }
}


