/* This is a simple main, which is here for you to mess with, but not as as graded component of the assignment.
 * This should serve as a starting point for your unit testing. 
 *
 * Assignment:
 * The bag is one of the simplest data structures.
 * Read: https://en.wikipedia.org/wiki/Set_(abstract_data_type)#Multiset
 * Edit bag_simple.hpp to make the insert item throw our custom exception if the bag is full.
 * Should functions try and catch too? 
 * Where is the appropriate scope for try and and catch?
 * Read and understand the dynamic bag, and implement the occurrences function in the hpp file.
 * Implement the custom exception in the my_exception.cpp file.
 * Fix the memory leak in bag_dyn.hpp
 * When testing, I will use a polymorphic pointer to the abstract class when calling the functions present in that class (insert, remove, size).
 * Thus, you should also test using a polymorphic pointer to the parent class.
 */

#include "bag_simple.h"
#include "bag_dyn.h"
#include "my_exception.h"

int main()
{

    DynamicBag<int> my_dynamic_bag(10);
    for(int x = 0; x < 9; x++)
    {
      my_dynamic_bag.insert(4);
    }
        
    DynamicBag<int> new_dyn_bag(30);

    my_dynamic_bag = new_dyn_bag;
  
    

    // Polymorphism

    //my_dynamic_bag.print_bag();

    // Do extensive testing of your additions here:

    // This should crash the program:
    

    return 0;
}

