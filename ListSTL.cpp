#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator iter;
    for (iter  = lst.begin(); iter != lst.end(); iter++)
    {
        cout<< *iter<<" ";
    }
    
}

int main(){
    
    list<int> list1; //List with 0 element.
    //insert value in list.
    list1.push_back(34);
    list1.push_back(36);
    list1.push_back(54);
    list1.push_back(89);
    list1.push_back(45);
    display(list1);

    list1.sort(); // to sort any list.
    list1.pop_front(); // to delete first element in list.
    list1.pop_back(); // to delete last element in list.
    list1.remove(36); // to delete any element in list. It will remove all element which is equal to given value  (36).



    list<int> list2(4); //list with 4 element.
    list<int> :: iterator it = list2.begin();
    *it = 76;
    it++;
    *it = 83;
    it++;
    *it = 47;
    it++;
    display(list2);

    list1.merge(list2);// merging lists.

    // If we want to know more methods of list then we go for (cpp refrence list).
    return 0;
}