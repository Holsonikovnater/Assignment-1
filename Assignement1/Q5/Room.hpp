#pragma once

#include<iostream> 

class Room
{
    private: 
    int id; 
    int capacity; 


    public: 
    Room(); 
    Room(int init_id,  int init_capacity); 

    int getID(); 
    int getCapacity(); 

    void setId(int init_id); 
    void setCapacity(int init_capacity); 

    void printRoom(); 

}; 