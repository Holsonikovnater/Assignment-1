//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
#include "Professor.hpp"

#include <iostream> 

Professor::Professor()
{
    id = ""; 
    firstName = ""; 
    lastName = ""; 
    adress = ""; 
    email = ""; 
} 

Professor::Professor(std::string init_id,std::string init_firstName,std::string init_lastName,std::string init_adress, std::string init_email)
{
    id = init_id; 
    firstName = init_firstName; 
    lastName = init_lastName; 
    adress = init_adress; 
    email = init_email; 
}

std::string Professor::getId()
{
    return id; 
} 
std::string Professor::getFirstName()
{
    return firstName; 
} 
std::string Professor::getLastName()
{
    return lastName; 
} 
std::string Professor::getAdress()
{
    return adress; 
} 
std::string Professor::getEmail()
{
    return email; 
}

void Professor::setId(std::string init_id)
{
    id = init_id; 
}
void Professor::setFirstName(std::string init_firstName)
{
    firstName = init_firstName; 
}
void Professor::setLastName(std::string init_lastName)
{
    lastName = init_lastName; 
} 
void Professor::setAdress(std::string init_adress)
{
    adress = init_adress; 
}
void Professor::setEmail (std::string init_email)
{
    email = init_email; 
} 

void Professor::printProfessor()
{
    std::cout<<"\nProfessor Id: "<<getId()<<"\nFirst Name: "<<getFirstName()<<"\nLast Name: "<<getLastName()<<"\nAdress: "<<getAdress()<<"\nEmail: "<<getEmail()<<std::endl; 
}