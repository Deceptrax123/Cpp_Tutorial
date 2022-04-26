#include <iostream>
#include <string_view>
#include <string>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param)
    {
        name = name_param;
        breed = breed_param;
        p_age = new int; // Dynamic allocation of  memory
        *p_age = age_param;

        std::cout << "Dog consructor called for " << name << std::endl;
    }
    ~Dog() // Creates a destructor
    {
        delete p_age; // destroys the memory dynamically allocated to the variable.
        std::cout << "Dog destructor called for " << name << std::endl;
    }

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

int main()
{
    Dog my_dog1("Sammy1", "Lab", 2);
    Dog my_dog2("Sammy2", "Lab", 2);
    Dog my_dog3("Sammy3", "Lab", 2);
    Dog my_dog4("Sammy4", "Lab", 2);
    std::cout << "The end" << std::endl;

    return 0;
}
/*Notes
1.The object that was constructed first will be destroyed last and vice-versa
as there are chances that other objects created later depend on the first object.*/