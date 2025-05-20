//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
#include "Student.h"

Student::Student()
{
    studentId = ""; 
    firstName = ""; 
    lastName = ""; 
    adress = ""; 
    email = ""; 
}

Student::Student(std::string init_studentId,std::string init_firstName,std::string init_lastName,std::string init_adress,std::string init_email)
{
    studentId = init_studentId; 
    firstName = init_firstName; 
    lastName = init_lastName; 
    adress = init_adress;  
    email = init_email;
}


std::string Student::getStudentID()
{
    return studentId; 
}
std::string Student::getFirstName()
{
    return firstName; 
}
std::string Student::getLastName()
{
    return lastName; 
}
std::string Student::getAdress()
{
    return adress; 
}
std::string Student::getEmail()
{
    return email; 
}

void Student::setStudentID(std::string init_studentId) 
{
    studentId = init_studentId; 
}
void Student::setFirstName(std::string init_firstName)
{
    firstName = init_firstName; 
}
void Student::setLastName(std::string init_lastName)
{
    lastName = init_lastName; 
}
void Student::setAdress(std::string init_adress)
{
    adress = init_adress; 
} 
void Student::setEmail(std::string init_email)
{
    email = init_email;
} 

void Student::studentPrint()
{
    std::cout<< "\nStudent ID: "<<getStudentID()<<"\nFirst Name: "<<getFirstName()<<"\nLast Name: "<<getLastName()<<"\nAdress: "<<getAdress()<<"\nEmail: "<<getEmail()<<std::endl; 

}