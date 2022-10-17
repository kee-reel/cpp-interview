#include <iostream>
#include <cstring>

class Animal
{
public:
    Animal(int weight, char *name) :
        m_weight(weight),
        m_name(name) {
        std::cout << m_name << " is born!" << std::endl;
    }
    ~Animal() {
        delete m_name;
    }
    bool is_bigger_than(Animal other) {
        return m_weight > other.m_weight;
    }
    void say() { }
private:
    int m_weight;
    char *m_name;
};

class Cat : Animal
{
public:
    Cat(int weight, char *name) :
        Animal(weight, name)
    {}
    void say() {
        std::cout << "Purr" << std::endl;
    }
};

class Dog : Animal
{
public:
    Dog(int weight, char *name) :
        Animal(weight, name)
    {}
    void say() {
        std::cout << "Bark" << std::endl;
    }
};

int main()
{
    char *name_0 = new char[100];
    strcpy(name_0, "Stacy");
    char *name_1 = new char[100];
    strcpy(name_1, "Garret");
    char *name_2 = new char[100];
    strcpy(name_2, "Tom");
    char *name_3 = new char[100];
    strcpy(name_3, "Mary");
    Cat cat0(5, name_0), cat1(3, name_1);
    Dog dog0(17, name_2), dog1(7, name_3);
    // Create array of animals and compare them between each other
    // Also let each of them say something
}
