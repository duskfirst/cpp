//contructors
#include <iostream>

class Entity
{
    public:
        float x ,y;

        //constructor
        Entity()
        {
            x = 0;
            y = 0;
            std::cout << "Entity created\n";
        }

        //destructor
        ~Entity()
        {
            std::cout<< "Entity destroyed\n";
        }

        void print()
        {
            std::cout << x << "," << y << std::endl;
        }

};

void Function()
{
    Entity e;
    e.print();
} 
class Log
{
    Log() = delete;

    public:
        static void print(int x)
        {
            std::cout << x << std::endl;
        }
};

int main()
{
    Function();
    Log::print(3);
}