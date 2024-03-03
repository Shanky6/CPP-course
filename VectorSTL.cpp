#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout<< i<<" element is : "<<vec[i]<<endl;
    }
    
}

int main(){
    
    vector<int> vec1;
    int size, element;
    cout<<"Enter Your Vector size : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter your "<<i<<" Element : ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    // vec1.pop_back();
    // cout<<"After using pop_back() "<<endl;
    // display(vec1);

    vector<int> ::iterator it = vec1.begin();
    vec1.insert(it, 9);
    cout<<endl;
    display(vec1);

    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s
    

    return 0;
}