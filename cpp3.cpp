#include<iostream>
using namespace std;
class Complex_Number{
 private:
    double real;
    double img;
 public :
Complex_Number(){
    real=0;
    img=0;
}
Complex_Number(double r, double i):real(r),img(i){
}
void getdata(){
cout<<"enter real part"<<endl;
cin>>real;
cout<<"enter img part"<<endl;
cin>>img;
}
void showdata() const{
cout<<"complex Number of objects  is :   "<<real<<" + "<<img<<"i"<<endl;
}
void add(Complex_Number &C){
 real=real+C.real;
 img=img+C.img;
}
void mul(Complex_Number &C){
 double tempReal = real * C.real - img * C.img;
        double tempImg  = real * C.img + img * C.real;
        real = tempReal;
        img = tempImg;
}
};
int main() {
Complex_Number C1, C2(5.4, 7.8), C3(6.3, 7);
 C1.getdata();
 C1.add(C2); 
 C3.mul(C2);    

    C1.showdata();
    C2.showdata();
    C3.showdata();
}


