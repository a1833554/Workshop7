#include <iostream>
using namespace std;

class Printable{
    public:
    virtual void print() = 0;
};

struct Point{
    double x;
    double y; 
};

class Shape: public Printable{
    protected:
        Point _centre;
    public: 
    Shape(double x, double y){
        _centre.x = x;
        _centre.y = y; 
    }
        Shape()/*:Shape(0,0){}*/{}
        virtual double get_area() = 0;
};

class Square: public Shape{
    private:
        double _side;
    public:
    Square(double x, double y, double side):Shape(x,y),_side(side){}
    Square():Shape(), _side(0){} 

    double get_area(){return _side * _side;}
    void print(){
        cout<< "This is a square with side = "<<_side<<endl;

    }
    
};

class Circle: public Shape{
    private:
        double _r;
    public:
    Circle(double x, double y, double r):Shape(x,y),_r(r){}
    Circle():Shape(),_r(0){}
    double get_area(){return 3.14*_r*_r;}
    void print(){
        cout<<"This is circle with r = "<<_r<<endl;
    }
 
};

void test(Shape* s){
    cout<< "The area is:" <<s ->get_area() <<endl;
}

class Person: public Printable{
    private:
    string name;
    public:
    string get_name(){return name;}
    void set_name(string name){this->name=name;}
    void print(){
        cout<< "This is a person named "<< name<< endl;

    }
};


void print_summary(Printable* obj){
 obj->print();

}




int main(){

 Shape* sq = new Square(10,10,5);
 Shape* cr = new Circle(1,10,3.2);


 test(sq);
 test(cr);

    Person* per = new Person; 
    per->set_name("Shea");
    print_summary(per);
    print_summary(sq);

    return 0;
}