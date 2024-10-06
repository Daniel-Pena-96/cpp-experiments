#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

class Person {
private:

    int weight;

public:

    std::string name;
    int age;

    Person();
    Person(const std::string& name, int age, int weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    int getWeight() const{
        return weight;
    }
    void setAge(int newAge){
        this->age = newAge;
    }
};

#endif