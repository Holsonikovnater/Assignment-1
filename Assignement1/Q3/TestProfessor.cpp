//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
#include "Professor.hpp"

#include <iostream> 

int main ()
{
    Professor prof1;
    prof1.setId("12345678"); 
    prof1.setFirstName("John"); 
    prof1.setLastName("Stewart"); 
    prof1.setAdress("1234 blvrd"); 
    prof1.setEmail("Teacher@gmail.com"); 

    prof1.printProfessor();
    return 0;
}