#pragma once

#include <iostream> 
#include <string> 

class Professor
{
    private: 
    std::string id; 
    std::string firstName;
    std::string lastName; 
    std::string adress; 
    std::string email; 


    public: 
    Professor(); 
    Professor(std::string init_id,std::string init_firstName,std::string init_lastName,std::string init_adress, std::string init_email);
    
    std::string getId(); 
    std::string getFirstName(); 
    std::string getLastName(); 
    std::string getAdress(); 
    std::string getEmail(); 

    void setId(std::string init_id); 
    void setFirstName(std::string init_firstName); 
    void setLastName(std::string init_lastName); 
    void setAdress(std::string init_adress); 
    void setEmail (std::string init_email); 

    void printProfessor(); 



}; 