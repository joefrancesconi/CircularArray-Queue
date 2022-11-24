/**
Joe Francesconi
CPSC 2120
Queue implementation using a circular array 
**/

#pragma once

#include "IntegerArrayQueue.h"

using namespace std;

//enqueue: if there is space available enqueue value and
//return true, otherwise return false
bool IntegerArrayQueue::enqueue(int value){
    if ((back + 2) % size == front){
        return false;
    }
    
    back = (back + 1) % size;
    array[back] = value;
    return true;
}

//dequeue: if there is a value at the front of the queue
//return the value and remove from the queue,
//otherwise return 0
int IntegerArrayQueue::dequeue(){
    if ((back + 1) % size == front){
        return 0;
    }
    
    //temp value for return
    int temp = array[front];
    front = (front + 1) % size;
    return temp;
}