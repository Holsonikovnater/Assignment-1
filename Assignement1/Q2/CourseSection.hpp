#pragma once 

#include <iostream> 
#include <string> 

class CourseSection
{
    private: 
    std::string id; 
    std::string title; 
    std::string description; 
    int capacity; 

    public: 
    CourseSection(); 
    CourseSection(std::string init_id, std::string init_title, std::string init_description, int init_capacity); 

    std::string getId(); 
    std::string getTitle(); 
    std::string getDescription(); 
    int getCapacity(); 

    void setId(std::string init_id); 
    void setTitle (std::string init_title); 
    void setDescription(std::string init_description); 
    void setCapacity(int init_capacity); 

    void printCourseSection(); 
    
    
}; 
