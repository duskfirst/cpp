#include <iostream>


//pure virtual funciton also called interface exists with only methods inside it eg--

class Printable
{
    public:
        virtual std::string getClassName() = 0;
};

class Entity : public Printable
{
    public:
       virtual std::string GetName() { return "Entity"; }
       std::string getClassName() {return "Entity";}
};

class Player : public Entity
{
    private:
        std::string m_Name;

    public:
        Player(const std::string &name)
            : m_Name(name) {}
        //this overrrides the GetName function in the entity class as if we simply 
        //put call GetName without using a virtual function with entity classs as  parameter it will print the getname for the entity class
        std::string GetName() override {return m_Name; }

        //virtual override
        std::string getClassName() override {return "Player";}
};

void printClass(Printable* obj)
{
    std::cout << obj->getClassName() << std::endl;
}

void Print(Entity* e)
{
    std::cout<< e->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    //Print(e);

    Player *p = new Player("Lupam");
    //Print(p);
   printClass(e);
   printClass(p);
    // it uses dynamic dispatch to do this wwith the help of vtable
}