#include "Musician.h"
#include <iostream>
#include <string>
using namespace std;


class Musician;
int main(){

 Musician*  James = new Musician("Voilin", 13);
 
cout<< James -> get_experience()<< endl;
cout<< James -> get_instrument()<<endl;



    return 0;
}