#include<iostream>
#include<cstring>
using namespace std;

class cws{
    protected:
    char title[40];
    float rating;
    public:
    cws(char *s,float r){
        strcpy(title,s);
        rating=r;
    }
    virtual void display(){ // without virtual it will print bogus code nd if in derived class defination is not there then bogus
        cout<<"bogus code  "<<endl; // code will executed
    }
};

class cws_video : public cws{
    int video_length;
    public:
    cws_video(char *s,float rate,int vl):cws(s,rate){
        video_length=vl;
    }
    void display(){
        cout<<"this is an amazing video with title : "<<title<<endl;
        cout<<"ratings :"<<rating<<" out of 5 stars"<<endl;
        cout<<"length of the video : "<<video_length<<" minutes"<<endl;
    }
};

class cws_text : public cws{
    int words;
    public:
    cws_text(char *s,float rate,int w):cws(s,rate){
        words=w;
    }
     void display(){
        cout<<"this is an amazing text tutorial with title :"<<title<<endl;
        cout<<"ratings : " <<rating<<" out of 5 stars"<<endl;
        cout<<"words in the video :"<<words<<" words "<<endl;
    }
};
int main(){
    //for video
    char s[]="django";
   // char *s= new char[40];
    cws_video shashi1(s,5.7,8);
   // shashi1.display();

    char s2[]="python";
    cws_text shashi2(s2,6.7,89);
    //shashi2.display();

    cws* tuts[2];
    tuts[0]=&shashi1;// giving the address of the derived claas
    tuts[1]=&shashi2;


    tuts[0]->display();
    tuts[1]->display();
    return 0;
}