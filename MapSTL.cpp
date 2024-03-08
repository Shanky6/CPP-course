#include<iostream>
#include<map>
using namespace std;

int main(){
    //Maps are assosiative arrays.
    map<string, int> marksStudents;
    marksStudents["Shbham"] = 98;
    marksStudents["Atul"] = 92;
    marksStudents["Rohit"] = 84;
    marksStudents["Krishna"] = 96;
    marksStudents["Shivam"] = 57;

    marksStudents.insert({{"Bhola", 99},{"David", 76}});
    map<string, int> :: iterator iter;
    for (iter  = marksStudents.begin(); iter != marksStudents.end(); iter++)
    {
       cout<<(*iter).first<<" -> "<<(*iter).second<<"%"<<endl;
    }
    
   cout<<marksStudents.max_size()<<endl;

    //We can refer cppreference website for learnings of Map.
    return 0;
}