#include<iostream>
#include<string>
using namespace std;
class text{
    string str;
    public:
    
    text(){

        cout<<"enter the string";
        cin>>str;



    }
    int i=0;
    int count=0;

    void length(){
        while (str[i]!='\0')
        {
           count++;
           i++; 
        }
        cout<<"length of string"<<count;
        
    }

};


int main ()
{
    text t1;
    t1.length();

   return 0;
}