#include <iostream>
//1 name many definition-but each time diff one gets called
class BaseClass{
    public:
        int var_base;
        void display(){
            std::cout<<"Displaying base class variable var_base"<<var_base<<std::endl;
        }
};

class DerivedClass:public BaseClass{
    public:
        int var_derived;
        void display(){
            std::cout<<"Displaying base class variable var_base"<<var_base<<std::endl;
            std::cout<<"Displaying base class variable var_derived"<<var_derived<<std::endl;
        }
};

int main(){
    BaseClass*base_class_pointer;
    BaseClass ob1;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived;    //pointing base class pointer to derived class

    base_class_pointer->var_base=34;    //throws error for derived(var_derived)
    base_class_pointer->display();

    DerivedClass*derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->display();

    return 0;
}