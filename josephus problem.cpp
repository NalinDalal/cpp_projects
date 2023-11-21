#include<iostream>
using namespace std;
struct node{ 
    char data;
    node *link;
};
int main(){
    node *temp, *first, *last, *back;
    int n;
    cout<<"enter the number soldiers there surrounded by an enemy"<<endl;
    first=new node;
    cout<<"enter the name of soldier 1 "<<endl;
    cin>>first->data;
    first->link=first;
    temp=first;
    for(int i=1;i<n;i++){
        last=new node;
        cout<<"enter the name of soldier"<<i+1<<endl;
        cin>>last->data;
        last->link=NULL;
        temp->link=last;
        temp=last;

    }
    temp=first;
    do{
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    while(temp!=first){

        cout<<temp->data<<endl;
        temp=temp->link
    }
    
}