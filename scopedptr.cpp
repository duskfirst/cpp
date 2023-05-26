#include <iostream>

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
};

class Scopedptr
{
    private:
        Entity *m_ptr;
    public:
        Scopedptr(Entity *ptr): m_ptr(ptr) {}

        ~Scopedptr()
        {
            delete m_ptr;
        }
};

int main()
{
    {
        Scopedptr e = new Entity();
        std::cin.get();
    }
        std::cout<<"OUTSIDE SCOPE\n";
}