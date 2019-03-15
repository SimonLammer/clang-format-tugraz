//------------------------------------------------------------------------------
// InvalidArgumentException.h
//
// Group: Group 43, study assistant: Max Mustertutor
//
// Authors: Super Student 1 (0800001)
// Super Student 2 (0800002)
// Super Student 3 (0800003)
// Super Student 4 (0800004)
//------------------------------------------------------------------------------
//

#ifndef INVALIDARGUMENTEXCEPTION_H_INCLUDED
#define INVALIDARGUMENTEXCEPTION_H_INCLUDED

#include "OwnBaseException.h"


namespace Sep
{
  //----------------------------------------------------------------------------
  // Custom Made Invalid Argument Exception
  // class to demonstrate the styleguide
  //
  class InvalidArgumentException : OwnBaseException
  {

    public:
 
      //--------------------------------------------------------------------------
      // Constructor
      // Constructs the excpeption and outputs the error message.
      //
      InvalidArgumentException(const char* message);
  };

} // namespace Sep

#endif // _INVALIDARGUMENTEXCEPTION_H_INCLUDED