#include <iostream>
using namespace std;

int main()
{
    int n,pos;
    count=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "; //array elements
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter position of element to be deleted: ";
    cin>>pos; //position of element to be deleted
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1]; //shift element from i+1 to i
    }
    n--; //decrease size of array by 1
    cout<<"New Array is: "; //print array after deleting elements
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}