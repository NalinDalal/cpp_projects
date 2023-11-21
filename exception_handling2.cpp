#include<iostream>
#include<string>

using namespace std;

class Printer {
    string _name;
    int _availablePaper;
public:
    Printer(string name, int paper) {
        _name=name;
        _availablePaper=paper;
    }
    void Print(string txtDoc) {
        int requiredPaper=txtDoc.length()/10;

        if (requiredPaper > _availablePaper)
            throw "No Paper";

        cout<<"Printing..."<<txtDoc<<endl;
        _availablePaper -= requiredPaper;
    }
};

int main()
{
    Printer myPrinter("Macbook air",10);
    try{
    myPrinter.Print("Hello,My name is nalin,aspiring to be a software developer");
    //output:Printing...Hello,My name is nalin,aspiring to be a software developer
    myPrinter.Print("Hello,My name is nalin,aspiring to be a software developer");
    myPrinter.Print("Hello,My name is nalin,aspiring to be a software developer");
    }
    catch (const char*txtException){
        cout<<"Exception: "<<txtException<<endl;
        //output:Exception: No Paper
    }

    catch (int exCode){
        cout<<"Exception: "<<exCode<<endl;
    }
    system("pause>nul");

    /*Output:
    Printing...Hello,My name is nalin,aspiring to be a software developer
sh: pause: command not found

    */
    return 0;
}