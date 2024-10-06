#include <iostream>
#include "main.hpp"

Person bro("Cancho", 27, 70);
Person colleague("Viktor", 30, 80);

int main(){
    std::cout << "age is a public   member / colleague age: " << colleague.age << std::endl;
    colleague.setAge(31);
    std::cout << "name is a public member " << bro.name << std::endl;
    std::cout << "weight is private member " << bro.getWeight() << std::endl;
    std::cout << "age is a public   member / new colleague age: " << colleague.age << std::endl;
    
    return 0;
}