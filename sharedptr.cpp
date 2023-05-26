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
    std::shared_ptr<Entity> e0;
    {
        std::shared_ptr<Entity> entity = std::make_shared<Entity>( );
        
        //weakptr does not increase the rev count for the pointer
        std::weak_ptr<Entity> weakEntity = entity;
        e0 = entity;
        entity->Print();

        std::cin.get();
    }
    std::cin.get();
}