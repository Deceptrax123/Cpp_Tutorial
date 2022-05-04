#include <iostream>
#include <string>

class Person
{

private:
    std ::string first_name{"Mysterious"};
    std ::string last_name{"Person"};

public:
    Person() = default;
    Person(std::string first_name_param, std::string last_name_param)
    {
        first_name = first_name_param;
        last_name = last_name_param;
    }

    std::string get_first_name()
    {
        return first_name;
    }
    std ::string get_last_name()
    {
        return last_name;
    }
    void set_first_name(std::string first_name_param)
    {
        first_name = first_name_param;
    }
    void set_last_name(std::string ln)
    {
        last_name = ln;
    }
};

/*
Notes
1.With public inheritance, derived classes can access and use
public members of the base class but the derived class cant
directly access private members of the base class.

2.The friends of the derived class have access to private members of
derived but dont have access to the base class.
*/