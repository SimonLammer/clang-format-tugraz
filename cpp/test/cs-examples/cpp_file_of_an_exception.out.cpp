//------------------------------------------------------------------------------
// InvalidArgumentException.cpp
//
// Group: Group 43, study assistant: Max Mustertutor
//
// Authors: Super Student 1 (0800001)
// Super Student 2 (0800002)
// Super Student 3 (0800003)
// Super Student 4 (0800004)
//------------------------------------------------------------------------------
//

#include "InvalidArgumentException.h"
#include <iostream>

using std::cout;
using std::endl;

using Sep::InvalidArgumentException;

//------------------------------------------------------------------------------
InvalidArgumentException::InvalidArgumentException(const char* message)
{
  cout << message << endl;
}