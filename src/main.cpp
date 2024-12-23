#include <iostream>
#include "main.hpp"
#include "pointers.hpp"


Person pana("Elias", 27, 70);
Person colleague("Tommy", 30, 80);

int main(){
    std::cout << "age is a public   member / colleague age: " << colleague.age << std::endl;
    colleague.setAge(31);
    std::cout << "name is a public member " << pana.name << std::endl;
    std::cout << "weight is private member " << pana.getWeight() << std::endl;
    std::cout << "age is a public   member / new colleague age: " << colleague.age << std::endl;
    unique_pointer_example();

    return 0;
}