#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    bool easy=true;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin>>b;
        if (b==1)
        {
            easy=false;
        }
        
    }
    if (easy==true)
    {
         cout<<"EASY"<<endl;   
    }
    else
    {
        cout<<"HARD"<<endl;
    }
    
    
}