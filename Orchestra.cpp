#include <string>
#include <iostream>
#include "Orchestra.h"
#include "Musician.h"
using namespace std;


Orchestra::Orchestra():max_size(0), current_size(0), members(NULL){};           // default constructor

  // constructor for an orchestra of given size
 Orchestra:: Orchestra(int size): max_size(size),current_size(0){
    members = new Musician[size];
 };



// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return current_size;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra:: has_instrument(std::string instrument){
for (int i = 0; i < max_size;i++){
    if (members[i].get_instrument() == instrument){
        return true;
    }
}
return false;
}

Musician* Orchestra::get_members(){
    return members;
}        // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra:: add_musician(Musician new_musician){
    if (current_size<max_size){
        members[current_size]= new_musician;
        current_size++;
        return true;
    }
    return false;
}

Orchestra::~Orchestra(){
    if (members!= NULL)
    delete [] members;
}

