#include<iostream>
using namespace std;

class x{
	public :
		int a;
		int b;
		int c;
};
class y : public x{
	public :
		void setdata(){
			cout<<"enter the value of A:-";
			cin>>a;
			cout<<"enter the value of B:-";
			cin>>b;
			cout<<"enter the value of C:-";
			cin>>c;
			
			}
		void getdata(){
			cout<<"the cubles of all elemnts :"<<endl;
			cout<<"cube of a is :"<<a*a*a<<endl;
			cout<<"cube of b is :"<<b*b*b<<endl;
			cout<<"cube of c is :"<<c*c*c<<endl;
		}
		
};
	int main(){
		y y;
		y.setdata();
		y.getdata();
		return 0;
	}

