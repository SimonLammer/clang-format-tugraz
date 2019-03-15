//------------------------------------------------------------------------------
// StyleClass.h
//
// Group: Group 43, study assistant: Max Mustertutor
//
// Authors: Super Student 1 (0800001)
// Super Student 2 (0800002)
// Super Student 3 (0800003)
// Super Student 4 (0800004)
//------------------------------------------------------------------------------
//
 
#ifndef STYLECLASS_H_INCLUDED
#define STYLECLASS_H_INCLUDED
 
namespace Sep
{
 
  //----------------------------------------------------------------------------
  // Style Class
  // class to demonstrate the styleguide
  //
  class StyleClass
  {
    private:
 
      //------------------------------------------------------------------------
      // Offset to add at calculation
      //
      int sum_offset_;

      //------------------------------------------------------------------------
      // Variable for threshold for floating point operations
      //
      double threshold_;

    public:
 
      //------------------------------------------------------------------------
      // Constructor
      //
      StyleClass();
 

      //------------------------------------------------------------------------
      // Copy Constructor
      // Makes a copy of another StyleClass Object.
      // @param original Original to copy.
      //
      StyleClass(const StyleClass& original);

 
      //------------------------------------------------------------------------
      // Assignment Operator
      // Used to assign one StyleClass to another
      // @param original Original with values to copy.
      //
      StyleClass& operator= (StyleClass const& original);

 
      //------------------------------------------------------------------------
      // Sum Calculation Method
      // Calculates a sum with an offset.
      // @param first_number First number to add.
      // @param second_number Second number to add.
      // @return Returns result of the calculation.
      //
      int calculateSum(int first_number, float second_number);
 

      //------------------------------------------------------------------------
      // Getter Methods
      //
      int getSumOffset();

      double getThreshold();

      //------------------------------------------------------------------------
      // Setter Methods
      //
      void setSumOffset(int offset);

      void setThreshold(double threshold);
  

      //------------------------------------------------------------------------
      // Destructor
      //
      virtual ~StyleClass();
  };
}
 
#endif // STYLECLASS_H_INCLUDED