#include<iostream>
#include<string>
int main()
{
    char s1[50],s2[50];
    int temp;
    std::cout<<"Enter first string:";
    std::cin>>s1;
    std::cout<<"Enter secong string:";
    std::cin>>s2;
    strcat (s1,s2);
    std::cout<<"The concatenation of two strings is:"<<s1<<std::endl;
    temp = strcmp (s1,s2);
    if (temp==0)
        {
            std::cout<<"Two strings are equal"<<std::endl;
        }
    else
    {
        std::cout<<"Two strings are not equal"<<std::endl;
    }
    return 0;
}