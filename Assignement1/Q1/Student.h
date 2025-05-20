// Name : Holsonikov Dorisca Student Id: 40316045
#pragma once
#include <iostream> 
#include <string> 

class Student 
{
    private: 
    std::string studentId; 
    std::string firstName; 
    std::string lastName;
    std::string adress;
    std::string email;

    public: 
    Student();
    Student(std::string init_studentId,std::string init_firstName,std::string init_lastName,std::string init_adress,std::string init_email);
    
    std::string getStudentID(); 
    std::string getFirstName(); 
    std::string getLastName(); 
    std::string getAdress(); 
    std::string getEmail();

    void setStudentID(std::string init_studentId); 
    void setFirstName(std::string init_firstName); 
    void setLastName(std::string init_lastName); 
    void setAdress(std::string init_adress); 
    void setEmail(std::string init_email); 

    void studentPrint();
};