
//
// This is example code from Chapter 3.1 "Input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------
int main()
{
          string previous = " ";       // previous word; initialized to “not a word”
          string current;                             // current word
          while (cin>>current) {                // read a stream of words
                    if (previous == current)    // check if the word is the same as last
                              cout << "repeated word: " << current << '\n';
          previous = current;
          }
}


//------------------------------------------------------------------------------

