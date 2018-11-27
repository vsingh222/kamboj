#include<iostream>
#include<math.h>

using namespace std;
void root();
void add();
void sub();
void mul();
void div();
void exponent();
void menu();
void main()
{
    
    int x,a,b,c,d,e,f;
    cout<<"      welcome to calulator   "<<endl;
    cout<<endl;
{
    menu();
}
}
   void menu()
    {
        int x,a,b,c,d,e,f;
        cout<<" enter 1 for add : "<<endl;
        
        cout<<" enter 2 for subtract : "<<endl;
        
        cout<<" enter 3 for multiply : "<<endl;
        
        cout<<" enter 4 for divide : "<<endl;
        
        cout<<" enter 5 for square root : "<<endl;
        
        cout<<" enter 6 for base of exponent : "<<endl;
        cin>>a;
        if (a==1)
        {
            add();
        }
        else if (a==2)
        {
            sub();
        }
        else if (a==3)
        {
            mul();
        }
        else if (a==4)
        {
            div();
        }
        else if (a==5)
        {
            root();
        }
        else if (a==6)
        {
            exponent();
        }
    }
    void add()
    {
        int g,h,i,kk;
        cout<<" enter first number : ";
        cin>>g;
        cout<<" enter second number : ";
        cin>>h;
        i=g+h;
        cout<<" the results are : "<<i;
        cout<<"                        "<<endl;
        cout<<"Enter 0 for menu  : ";
        cin>>kk;
         if (kk==0)
        {
        menu();
        }
        

    }
    void sub()
    {
        int j,k,l,kk;
        cout<<" enter first number : ";
        cin>>j;
        cout<<" enter second number : ";
        cin>>k;
        l=j-k;
        cout<<" the reslts are : "<<l;
         cout<<"                        "<<endl;
        cout<<"Enter 0 for menu  : ";
        cin>>kk;
         if (kk==0)
        {
        menu();
        }
        

    }
    void mul()
    {
        int m,n,o,kk;
        cout<<" enter the first number ";
        cin>>m;
        cout<<" enter the second number : ";
        cin>>n;
        o=m*n;
        cout<<" the results are : "<<o;
         cout<<"                        "<<endl;
        cout<<"Enter 0 for menu  : ";
        cin>>kk;
         if (kk==0)
        {
        menu();
        }
        



    }
    void div()
    {
        int p,q,r,kk;
        cout<<" enter the first number ";
        cin>>p;
        cout<<" enter the second number : ";
        cin>>q;
        r=p/q;
        cout<<" the resuls are "<<r;
         cout<<"                        "<<endl;
        cout<<"Enter 0 for menu  : ";
        cin>>kk;
         if (kk==0)
        {
        menu();
        }
        

    }
    void exponent()
    {
        double s,t,kk;
        cout<<" enter the base number : ";
        cin>>s;
        cout<<" enter the exponent : ";
        cin>>t;
        cout<<"the answer is : "<<pow(s,t);
         cout<<"                        "<<endl;
        cout<<"Enter 0 for menu  : ";
        cin>>kk;
         if (kk==0)
        {
        menu();
        }
        

    }

void root()
{
    int a,kk;
    cout<<"enter the number : ";
    cin>>a;
    cout<<"the square root is : "<<sqrt(a)<<endl;
     cout<<"                        "<<endl;
        cout<<"Enter 0 for menu  : ";
        cin>>kk;
         if (kk==0)
        {
        menu();
        }
        

}
