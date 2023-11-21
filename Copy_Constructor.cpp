#include <iostream>
#include <string>

class String
{
    private:
        char* m_Buffer;
        unsigned int m_Size;
    public:
        String(const char* string)
        {
            m_Size=strlen(string);
            m_Buffer=new char[m_Size];
            memcpy(m_Buffer, string, m_Size);
            m_Buffer[m_Size]=0;
        }

        /*String(const String& other);    //just copy the shallow memory of other constructor
        {
            memcpy(this, &other, sizeof(String));
        }*/

        String(const String& other)
            :m_Size(other.m_Size)
        {
            m_Buffer=new char[m_Size+1];
            memcpy(m_Buffer, other.m_Buffer, m_Size+1);
        }

        ~String()
        {
            delete[] m_Buffer;
        }

        char& operator[](unsigned int index)
        {
            return m_Buffer[index];
        }

        friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream<<string.m_Buffer;
    return stream;
}

void PrintString(String string)
{
    std::cout<<string<<std::endl;
}

int main()
{
    String string="Cherno";
    String second=string;

    second[2]='a';

    //std::cout<<string<<std::endl;
    //std::cout<<second<<std::endl;

//instead we are going to make a new fucntion PrintString to print both of them,the above line was 1st written in hand
//function PrintString() is written afterwards

    PrintString(string);//the functions which are called
    PrintString(second);
    std::cin.get();
}
//output::Cherno
// first output is correct then we just copied it
//replaced the e with a
// in the line 59 by updating the desired index position with new value
//the first string too didn't changed
//new output:Cherno
//Charno