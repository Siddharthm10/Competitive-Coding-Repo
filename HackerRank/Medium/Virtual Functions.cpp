#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int counter_s=0,counter_p=0;

class Person{
    protected:
        string name;
        int age;
    public:
        virtual void getdata()=0;
        virtual void putdata()=0;
};

class Professor: public Person {
    protected: 
        int publications, cur_id;
    public: 
        void getdata(){
            cin>>name>>age>>publications;
        }
        void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
        }
        Professor(){cur_id= ++counter_p;}
};

class Student: public Person{
    protected:
        int cur_id, marks[6];
    public:
        void getdata(){
            cin>>name>>age;
            for(int i=0;i<6;i++){
                cin>>marks[i];
            }
        }
        void putdata(){
            int sum=0;
            for(int i=0; i<6;i++){
                sum+=marks[i];
            }
            cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
        }

        Student(){cur_id= ++counter_s;}

};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
