#include<list>
#include<iostream>

using namespace std;

class Distance{
    int feet, inches;
    public:
    Distance(int ft, int in): feet(ft), inches(in){}
    void show(){
        cout<<feet<<"'"<<inches<<'"'<<endl;
    }
};

int main(){
    list<Distance*> l1; // Create a list that can store Distance pointers
    l1.push_back(new Distance(5, 2)); // create an object dynamically, and store pointer to l1
    l1.push_back(new Distance(2, 2));
    l1.push_back(new Distance(1, 3));
    l1.push_back(new Distance(8, 5));
    l1.push_back(new Distance(3, 1));
    
    // Since it's a linked list, it doesn't have indexing
    // We can use iterators to access every element in the list

    for(list<Distance*>::iterator it=l1.begin(); it!=l1.end(); it++)
        (*it)->show(); //*it returns you the pointers stored earlier

    // Let's delete the memory allocated dynamically    
    for(list<Distance*>::iterator it=l1.begin(); it!=l1.end(); it++)
        delete *it;
    
    // Clear all the contents of the list
    l1.clear();

    return 0;
}