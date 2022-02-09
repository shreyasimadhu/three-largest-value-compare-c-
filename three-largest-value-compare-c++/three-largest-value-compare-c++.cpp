#include <iostream>
using namespace std;
class class_a;
class class_b;
class class_c;

class class_a{
    int v1;
    public:
    void getdata(int l)
    {
        v1 = l;
    }
    void displaydata(void)
    {
        cout<<v1<<"\n";
    }
    
    friend void largest(class_a &,class_b &,class_c &);
};

class class_b{
    int v2;
    public:
    void getdata(int l)
    {
        v2 = l;
    }
    void displaydata(void)
    {
        cout<<v2<<"\n";
    }
    
    friend void largest(class_a &,class_b &,class_c &);
};

class class_c{
    int v3;
    public:
    void getdata(int l)
    {
        v3 = l;
    }
    void displaydata(void)
    {
        cout<<v3<<"\n";
    }
    
    friend void largest(class_a &,class_b &,class_c &);
};




 void largest(class_a & x,class_b & y,class_c & z){
    if (x.v1 > y.v2){
        if (x.v1 > z.v3)
        cout<<x.v1<< " is largest value" ;
        else
        cout<<z.v3<<" is largest Value";
    }
    else{
        if(y.v2 > z.v3)
        cout<<y.v2<<" is largest Value";
        else
        cout<<z.v3<<" is largest Value";
    }
 }



int main()
{   
    int d1,d2,d3;
    cout<<"Enter the three value : \n\n\n";
    
    cout<<"First Value = ";
    cin>>d1;
    
    cout<<"Seceond Value = ";
    cin>>d2;
    
    cout<<"Third Value = ";
    cin>>d3;
    
    class_a first_ob;
    class_b second_ob;
    class_c third_ob; 
    
    
    first_ob.getdata(d1);
    second_ob.getdata(d2);
    third_ob.getdata(d3);
    
    
    largest(first_ob,second_ob,third_ob);

    return 0;
}