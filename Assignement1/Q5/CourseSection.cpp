//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
#include "CourseSection.hpp"

#include <iostream> 

CourseSection::CourseSection()
{
    id= ""; 
    title = ""; 
    description = ""; 
    capacity = 0 ; 
}

CourseSection::CourseSection(std::string init_id, std::string init_title, std::string init_description, int init_capacity)
{
    id = init_id; 
    title = init_title; 
    description = init_description; 
    capacity = init_capacity; 
}



std::string CourseSection::getId()
{
    return id; 
}
std::string CourseSection::getTitle()
{
    return title; 
} 
std::string CourseSection::getDescription()
{
    return description; 
} 
int CourseSection::getCapacity()
{
    return capacity; 
}

void CourseSection::setId(std::string init_id)
{
    id = init_id; 
}
void CourseSection::setTitle (std::string init_title)
{
    title = init_title; 
}
void CourseSection::setDescription(std::string init_description)
{
    description = init_description; 
} 
void CourseSection::setCapacity(int init_capacity)
{
    capacity = init_capacity; 
}

void CourseSection::printCourseSection()
{
    std::cout<<"Course Section Id: "<<getId()<<"\nCourse Title: "<<getTitle()<<"\nCourse Description: "<<getDescription()<<"\nCapacity: "<<getCapacity()<<std::endl; 
}