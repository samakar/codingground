#include <iostream>

using namespace std;

class Animal{
    private:
        int age;
    public:
        virtual void talk() {
            cout << "mute" << endl;  
        };
        void setAge(int a){
            age = a;
        }
       void getAge(){
            cout << age << endl;
        }
};

class Dog: public Animal{
    public:
        void talk() {
            cout << "hop" << endl;
         }
};

class Cat: public Animal{
    public:
        void talk() {
            cout << "mew" << endl;  
        }
};

class Farm {
    public:
        void loadAnimal(int index, int species)
        {
            if(species==1 ) { 
                a[index] = new Dog;
            } else {
                a[index] = new Cat;
            }
        }
        void sound()
        {
            loadAnimal(0,0);
            loadAnimal(1,1);
            loadAnimal(2,1);
            a[0]->talk();
            a[1]->talk();            
            a[2]->talk();            
            a[1]->talk();            
            a[1]->talk();            
            a[2]->talk(); 
            a[1]->setAge(100);
            a[2]->setAge(200);
            a[1]->getAge();
            a[2]->getAge();
            a[1]->setAge(300);
            a[1]->getAge();
            a[2]->getAge();
        }
    private:
        Animal  *a[5];
};


int main()
{
    Farm f;
    f.sound();
   return 0;
}


