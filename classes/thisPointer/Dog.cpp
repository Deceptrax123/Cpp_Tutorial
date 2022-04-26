#include <iostream>
#include <string_view>
#include <string>

class Dog
{
public:
    Dog()
    {
        dog_name = "None";
        dog_breed = "None";
        dog_age = new int;
        *dog_age = 0;

        std::cout << "Dog : " << this->dog_name << " constructed at" << this << std::endl;
    }
    Dog(std::string_view name_param, std::string_view breed_param, int age_param)
    {
        dog_name = name_param;
        dog_breed = breed_param;
        dog_age = new int;
        *dog_age = age_param;

        std::cout << "Dog : " << dog_name << " constructed at" << this << std::endl;
    }
    Dog *set_name(std::string dog_name)
    {
        // dog_name=dog_name does not change the value of the member variable.
        this->dog_name = dog_name; // this pointer resolves name conflicts between parameter and member variables.
        return this;
    }
    Dog *set_breed(std::string breed)
    {
        this->dog_breed = breed;
        return this;
    }
    Dog *set_age(int age)
    {
        *(this->dog_age) = age;
        return this;
    }
    void print()
    {
        std::cout << dog_name << std::endl;
        std::cout << dog_breed << std::endl;
        std::cout << *dog_age << std::endl;
    }

private:
    std::string dog_name;
    std::string dog_breed;
    int *dog_age{nullptr};
};

int main()
{
    Dog *dog1 = new Dog("Sammy", "Lab", 2);

    dog1->print();

    dog1->set_name("Sammy2")->set_breed("Lab2")->set_age(3); // Chained function calls.

    dog1->print();

    delete dog1; // Deletes object from heap.

    return 0;
}

/*Note
Each class member function contains a hidden pointer
called this. It contains the address of the current objet, for
which the method is being executed. This also applies to constructors
and destructors.

The this pointer is also used to resolve name conflicts when the parameter of constructor and member variable
have the same name.

this pointer is used to make chained function calls.*/