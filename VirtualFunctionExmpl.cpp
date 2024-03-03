#include<iostream>
using namespace std;

class CWH{
    protected :
        string title;
        float ratings;

        CWH(string s, float r)
        {
            title = s;
            ratings = r;
        }
        virtual void display(){}
};

class CWH_vedio : public CWH{
    protected :
        float videoLength;
    public :
        CWH_vedio(string s, float r, float vl) : CWH(s , r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWH_text : public CWH{
    protected :
        int words;
    public :
        CWH_text(string s, float r, int wc) : CWH(s , r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing page with title "<<title<<endl;
            cout<<"Ratings: "<<ratings<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<words<<" minutes"<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    //for Code With Harry vedio->
    cout<<"Enter the vedio title : "<<endl;
    cin>>title;
    cout<<"Enter the vedio rating out of 5 : "<<endl;
    cin>>rating;
    cout<<"Enter the vedio vlen : "<<endl;
    cin>>vlen;

    CWH_vedio vedio(title, rating, vlen);
    vedio.display();
    

    //for Code With Harry text->
    cout<<"Enter the page title : "<<endl;
    cin>>title;
    cout<<"Enter the page rating out of 5 : "<<endl;
    cin>>rating;
    cout<<"Enter the page words : "<<endl;
    cin>>words;

    CWH_text text(title, rating, words);
    text.display();






    return 0;
}   