//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
#include "CourseSection.hpp"
#include <iostream> 

int main ()
{
    CourseSection coen244; 
    coen244.setId("12345678"); 
    coen244.setTitle("Coen244"); 
    coen244.setDescription("We learn to program"); 
    coen244.setCapacity(240); 
    coen244.printCourseSection(); 
     
    return 0 ; 
}