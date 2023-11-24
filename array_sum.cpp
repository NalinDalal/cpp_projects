#include <iostream>
using std::cin;
using std::cout;

int main(){
    int i=1,n;
    cout<<"Enter no of element is array:";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        int sum=a[0];   //Initialize sum for each array
        for(int j=1;j<=i;++j){
            sum+=a[j];
        }
        cout<<"Sum for subarray 0 thr "<<i<<" is "<<sum<<std::endl;
    }
    cin.get();
}