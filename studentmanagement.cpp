#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name,register_no;
    int age;
    float eng,maths,sci,sst,lang;
    float avg;
    public:
    void get_basic_data();
    void get_marks();
    void show_data();
    void calculate();
    void grade();
};
void student :: get_basic_data(){
    cout<<"Enter Name \n";
    cin>>name;
    cout<<"Enter Register Number \n";
    cin>>register_no;
    cout<<"Enter Age";
    cin>>age;
}
void student :: get_marks(){
    cout<<"Enter English Marks \n";
    cin>>eng;
    cout<<"Enter SST Marks \n";
    cin>>sst;
    cout<<"Enter 2nd Language Marks \n";
    cin>>lang;
    cout<<"Enter Science Marks \n";
    cin>>sci;
    cout<<"Enter Maths Marks \n";
    cin>>maths;

}
void student :: show_data(){
    cout<<"Name is \n"<<name<<endl;
    cout<<"Register Number is \n"<<register_no<<endl;
    cout<<"Age is \n"<<age<<endl;
    cout<<"English Marks is \n"<<eng<<endl;
    cout<<"SST Marks is \n"<<sst<<endl;
    cout<<"Second Language Marks is \n"<<lang<<endl;
    cout<<"Science Marks is \n"<<sci<<endl;
    cout<<"Maths Marks is \n"<<maths<<endl;
}
void student :: calculate(){
    if (eng && maths && sci && sst && lang <= 100 ){
        cout<<"Marks entered are valid"<<endl;
        cout<<"Calculating Average"<<endl;
        avg=(maths+sci+lang+sst+eng)/5;
        cout<<"Average is "<<avg<<endl;
    }
    else{
        cout<<"Marks are invalid"<<endl;
    }
}
void student :: grade(){
    cout<<"English"<<endl;
    if(eng<=100&&eng>80){cout<<"Grade is A"<<endl;}
    else if(eng<=80&&eng>60){cout<<"Grade is B"<<endl;}
    else if (eng<=60&&eng>35){cout<<"Grade is C"<<endl;}
    else{cout<<"Grade is F"<<endl;}

    cout<<"Science"<<endl;
    if(sci<=100&&sci>80){cout<<"Grade is A"<<endl;}
    else if(sci<=80&&sci>60){cout<<"Grade is B"<<endl;}
    else if (sci<=60&&sci>35){cout<<"Grade is C"<<endl;}
    else{cout<<"Grade is F"<<endl;}

    cout<<"Maths"<<endl;
    if(maths<=100&&maths>80){cout<<"Grade is A"<<endl;}
    else if(maths<=80&&maths>60){cout<<"Grade is B"<<endl;}
    else if (maths<=60&&maths>35){cout<<"Grade is C"<<endl;}
    else{cout<<"Grade is F"<<endl;}

    cout<<"SST"<<endl;
    if(sst<=100&&sst>80){cout<<"Grade is A"<<endl;}
    else if(sst<=80&&sst>60){cout<<"Grade is B"<<endl;}
    else if (sst<=60&&sst>35){cout<<"Grade is C"<<endl;}
    else{cout<<"Grade is F"<<endl;}

    cout<<"Language"<<endl;
    if(lang<=100&&lang>80){cout<<"Grade is A"<<endl;}
    else if(lang<=80&&lang>60){cout<<"Grade is B"<<endl;}
    else if (lang<=60&&lang>35){cout<<"Grade is C"<<endl;}
    else{cout<<"Grade is F"<<endl;}
}
int main(){
    student a;
    a.get_basic_data();
    a.get_marks();
    a.show_data();
    a.calculate();
    a.grade();
    return 0;
}