// allocator_address.cpp
// compile with: /EHsc
#include <memory>
#include <algorithm>
#include <iostream>
#include <vector>
#include "Vectors.hpp"


int main( )
{
   ft::vector     <int> ftIntVec;
   ft::vector     <int> ftIntFill(10, 21);
   ft::vector     <int> ftCopy(ftIntFill);
   
   






   return (0);


   /*
   std::allocator <int> myIntAlloc;
   int   *i;
   int   num = 10;

   i = myIntAlloc.allocate(2);
   *i = num;
   // std::cout << "Value of i - " << i << " ." << std::endl;
   std::cout << "Value of *i - " << *i << " ." << std::endl;
   
   i++;
   *i = num + num;
   // std::cout << "Value of i - " << i << " ." << std::endl;
   std::cout << "Value of *i - " << *i << " ." << std::endl;

   i--;
   myIntAlloc.deallocate(i, 2);
   */
   
}