#include "Orchestra.h"
#include <iostream>
#include <string>
#include "Musician.h"
using namespace std;


class Orchestra;
int main(){

 Musician  James("violin", 10);
 Musician  Mark("Piano", 7);
 Musician Paul("guitar",22);
 Musician Rob("Sax",19);
 Musician Jack("trumpet",4);
 Musician Phill("flute",9);


Orchestra s1(3);
s1.add_musician(James);
s1.add_musician(Mark);
s1.add_musician(Paul);
cout<< s1.add_musician(Rob)<<endl;



Musician* members = s1.get_members();
for (int i = 0; i < 3 ; i++){
    cout<< members[i].get_instrument()<<" "<< members[i].get_experience()<<endl;
}

if(s1.has_instrument("violin") == 1){
    cout<<"true"<<endl;
}

    return 0;
}