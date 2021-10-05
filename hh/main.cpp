#include <iostream>

using namespace std;

int main()
{
    bool good_student;
    int age;
    char gender;
    string name;

    cout << "Hello !" << endl;
    cout << "What is your name  ?" << endl;
    cin>>name;
    cout<<"Nice to meet you "<<name<<endl;
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<"Wow !"<<endl;
    cout<<"Type M if you are a male, or f if you are a female"<<endl;
    cin>>gender;
    if(gender=='m'){
        cout<<"So you are a man"<<endl;
    }else if(gender=='f'){
        cout<<"So you are a woman"<<endl;
    }else{
        cout<<"Gender is unknown"<<endl;
    }



    return 0;
}
