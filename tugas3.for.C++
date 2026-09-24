#include <iostream>
using namespace std;
int main() {
    string nama[4]={"miko","mila","niken","anjar"};
    int nilai1[4]={65,87,78,89};
    int nilai2[4]={65,97,88,90};
    int i;
    float r;

     for(i=0;i<4;i++){
    cout<<"masukkan nama ";
    cin>>nama[i];
    cout<<"masukkan nilai pertama ";
    cin>>nilai1[i];
    cout<<"masukkan nilai keda ";
    cin>>nilai2[i];
    }
    
    for(i=0;i<4;i++){
        cout<<"______________________"<<endl;
        cout<<"namanya adalah"<<endl;
        cout<<nama[i]<<endl;
        cout<<"nilai"<<endl;
        cout<<nilai1[i]<<endl;
        cout<<nilai2[i]<<endl;
        cout<<"rata ratanya adalah" <<endl;
        r=(nilai1[i]+nilai2[i])/2.0;
        cout<<r <<endl;
        
    }
    return 0;
}
