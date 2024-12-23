#include <iostream>
#include <memory>
 
struct pointer
{
    pointer(int _val) : val(_val) { std::cout << "Constructor...\n"; }
    ~pointer() { std::cout << "Destructor...\n"; }
    int val;
};
 
void unique_pointer_example() {
    std::unique_ptr<pointer> up1(new pointer(1));
    std::unique_ptr<pointer> up2(new pointer(2));
 
    std::cout << "First pointer ->value: " << up1->val << '\n';
    std::cout << "Second pointer ->value: " << up2->val << '\n';
    up1.swap(up2);
 
    std::cout << "First pointer after swap ->value: " << up1->val << '\n';
    std::cout << "Second pointer after swap ->value: " << up2->val << '\n';
}