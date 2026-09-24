
#include <iostream>
using namespace std;
int main() {
    string nama[4]={"miko","mila","niken","anjar"};
    int nilai[4]={65,87,78,89};
    int i;
    
    for(i=0;i<4;i++){
        cout<<"______________________"<<endl;
        cout<<"namanya adalah"<<endl;
        cout<<nama[i]<<endl;
        cout<<"nilai"<<endl;
        cout<<nilai[i]<<endl;
    }
    return 0;
}
