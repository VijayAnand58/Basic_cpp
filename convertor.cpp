#include<iostream>
#include<string>
using namespace std;
class convertor{
    protected:
    string conver;
    int option;
    public:
    void welcome();
/*  distance();
    mass();
    temprature();
    pressure();
    energy()
    currency()*/
};
void convertor :: welcome(){
    cout<<"Please Enter the type of conversion";
    cout<<"\n1.distance\n2.mass\n3.temprature\n4.pressure\n5.energy\n6.currency\n";
    cout<<"Enter the option number "<<endl;
    cin>>option;

}

class ihdistance : public convertor{
    int length,opt1,opt2;
    float convlen;
    int mm=1,cm=10,dm=100,m=1000,dam=10000,hm=100000,km=1000000;
    float div;
    public:
    void get_data();
    void lenconversion();
    void show_data();

};
void ihdistance :: get_data(){
    cout<<"Enter The Primary Unit From the options below:"<<endl;
    cout<<"1.mm\n2.cm\n3.dm\n4.m\n5.dam\n6.hm\n7.km"<<endl;
    cin>>opt1;
    cout<<"Enter The Secondary Unit From the options below:"<<endl;
    cout<<"1.mm\n2.cm\n3.dm\n4.m\n5.dam\n6.hm\n7.km"<<endl;
    cin>>opt2;
    cout<<"Enter the Length"<<endl;
    cin>>length;
}
void ihdistance :: lenconversion(){
    if(opt1<opt2)
    {
        if(opt1==1)
        {
            if(opt2==2){
                div=cm/mm;
                convlen=length/div;
            }
            else if(opt2==3){
                div=dm/mm;
                convlen=length/div;
            }
            else if(opt2==4){
                div=m/mm;
                convlen=length/div;
            }
            else if(opt2==5){
                div=dam/mm;
                convlen=length/div;
            }
             else if(opt2==6){
                div=hm/mm;
                convlen=length/div;
            }
             else if(opt2==7){
                div=km/mm;
                convlen=length/div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }


        }
        else if (opt1==2)
        {
            if(opt2==3){
                div=dm/cm;
                convlen=length/div;
            }
            else if(opt2==4){
                div=m/cm;
                convlen=length/div;
            }
            else if(opt2==5){
                div=dam/cm;
                convlen=length/div;
            }
             else if(opt2==6){
                div=hm/cm;
                convlen=length/div;
            }
             else if(opt2==7){
                div=km/cm;
                convlen=length/div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }

        }
        else if(opt1==3)
        {
            if(opt2==4){
                div=m/dm;
                convlen=length/div;
            }
            else if(opt2==5){
                div=dam/dm;
                convlen=length/div;
            }
             else if(opt2==6){
                div=hm/dm;
                convlen=length/div;
            }
             else if(opt2==7){
                div=km/dm;
                convlen=length/div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else if(opt1==4)
        {
            if(opt2==5){
                div=dam/m;
                convlen=length/div;
            }
            
            else if(opt2==6){
                div=hm/m;
                convlen=length/div;
            }
             else if(opt2==7){
                div=km/m;
                convlen=length/div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else if(opt1==5)
        {
            if(opt2==6){
                div=hm/dam;
                convlen=length/div;
            }

             else if(opt2==7){
                div=km/dam;
                convlen=length/div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else if(opt1==6)
        {
            if(opt2==7){
                div=km/dam;
                convlen=length/div;
            }

            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else
        {
            cout<<"Wrong Input"<<endl;
        }
      
    }
    else if(opt1>opt2)
    {
        if(opt1==7)
        {
            if(opt2==6){
                div=km/hm;
                convlen=length*div;
            }
            else if(opt2==5){
                div=km/dam;
                convlen=length*div;
            }
            else if(opt2==4){
                div=km/m;
                convlen=length*div;
            }
            else if(opt2==3){
                div=km/dm;
                convlen=length*div;
            }
             else if(opt2==2){
                div=km/cm;
                convlen=length*div;
            }
             else if(opt2==1){
                div=km/mm;
                convlen=length*div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }


        }
        else if(opt1==6)
        {
            if(opt2==5){
                div=hm/dam;
                convlen=length*div;
            }
           
            else if(opt2==4){
                div=hm/m;
                convlen=length*div;
            }
            else if(opt2==3){
                div=hm/dm;
                convlen=length*div;
            }
             else if(opt2==2){
                div=hm/cm;
                convlen=length*div;
            }
             else if(opt2==1){
                div=hm/mm;
                convlen=length*div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }

        }
        else if(opt1==6)
        {
            if(opt2==5){
                div=hm/dam;
                convlen=length/div;
            }
           
            else if(opt2==4){
                div=hm/m;
                convlen=length*div;
            }
            else if(opt2==3){
                div=hm/dm;
                convlen=length*div;
            }
             else if(opt2==2){
                div=hm/cm;
                convlen=length*div;
            }
             else if(opt2==1){
                div=hm/mm;
                convlen=length*div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else if (opt1==5)
        {
            if(opt2==4){
                div=dam/m;
                convlen=length*div;
            }
           
            else if(opt2==3){
                div=dam/dm;
                convlen=length*div;
            }
             else if(opt2==2){
                div=dam/cm;
                convlen=length*div;
            }
             else if(opt2==1){
                div=dam/mm;
                convlen=length*div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else if(opt1==4)
        {
            if(opt2==3){
                div=m/dm;
                convlen=length*div;
            }
           
            
             else if(opt2==2){
                div=m/cm;
                convlen=length*div;
            }
             else if(opt2==1){
                div=m/mm;
                convlen=length*div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
            
        }
        else if (opt1==3)
        {
            if(opt2==2)
            {
                div=dm/cm;
                convlen=length*div;
            }
           
            
             else if(opt2==1)
             {
                div=dm/mm;
                convlen=length*div;
            }
            else{
                cout<<"Wrong Input"<<endl;
            }
        }
        else if(opt1==2)
        {
            if(opt2==1)
            {
                div=cm/mm;
                convlen=length*div;
            }
            else
            {
                cout<<"Wrong Input"<<endl;
            }
        }
    }
}
void ihdistance :: show_data(){
    cout<<"Length is "<<convlen<<endl;
}
int main(){
    ihdistance d;
    d.get_data();
    d.lenconversion();
    d.show_data();
    return 0;


}