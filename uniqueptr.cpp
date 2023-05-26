#include<iostream>
#include<memory>
#include <string>
class Entity
{
    public:
        Entity()
        {
            std::cout<<"Entity Created\n";
        }
        ~Entity()
        {
            std::cout<<"Entity Destroyed\n";
        }

        void Print() {}
};

int main()
{
    {
        std::unique_ptr<Entity> entity(new Entity());

        entity->Print();
        std::cin.get();
    }

    std::cout<<"OUTSIDE SCOPE\n";
}