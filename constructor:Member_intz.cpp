#include <iostream>

class Entity
{
    private:
        std::string m_Name;
        //int m_Score;
        int x,y,z;
    public:
    Entity()
        //: m_Name("Unknown"), m_Score(0) //var to initialize
        : m_Name("Unknown"), x(0), y(0), z(0)
    {
        m_Name="Unknown";
        Init();
    }

    Entity(const std::string& name)
        :m_Name(name)
    {
        //m_Name=name;
    }
    void Init()
    {
        // Additional initialization code can go here if needed
    }

    const std::string& GetName() const { return m_Name; }
};

int main()
{
    Entity e0;
    std::cout<<e0.GetName()<<std::endl;

    Entity e1("Cherno");
    std::cout<<e1.GetName()<<std::endl;
    std::cin.get();
}