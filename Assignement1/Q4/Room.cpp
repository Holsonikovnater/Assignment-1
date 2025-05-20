//Holsonikov Dorisca , 40316045
//William Huynh , 40319618
#include "Room.hpp"

#include <iostream> 
Room::Room()
{
    id= 0 ; 
    capacity = 0 ; 
}
Room::Room(int init_id,  int init_capacity)
{
    id = init_id; 
    capacity = init_capacity; 
} 

int Room::getID()
{
    return id; 
}
int Room::getCapacity()
{
    return capacity; 
}

void Room::setId(int init_id)
{
    id = init_id; 
}
void Room::setCapacity(int init_capacity)
{
    capacity = init_capacity; 
} 

void Room::printRoom()
{
    std::cout<<"Room id: "<<getID()<<"\nRoom Capacity: "<<getCapacity()<<std::endl; 
}