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
        p_age = new int; // Dyanmic allocation memory
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

void some_func()
{
    Dog my_dog("Sammy", "Lab", 2); // Creates and destroys the object within the function.
}

int main()
{
    Dog my_dog2("Sammy", "Lab", 2);

    // some_func();

    std::cout << "The end" << std::endl;

    return 0;
}
/*Note
1.Destructors will never have parameters

2.Destructors are called in placed that may not be obvious when ->
.When an object is passed by value to a function
.When a local object is returned from a function

The obvious cases when destructors are called are:
.When a local stack object goes out of scope
.When a heap object is released with delete.*/
