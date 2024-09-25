#include<iostream>
using namespace std;
class area {
	private:
		int bigside,smallside;
		float radious ;
		float base,height;
		public:
			void get (float r){
				radious =r;
				float ar=3.14*r*r;
				cout<<"the area of circle is :"<<ar<<endl;
				
			}
			void get (float b,float h){
				base=b;
				height=h;
				float ar=0.5*b*h;
				cout<<"the area of triangle is :"<<ar<<endl;
				
			}
			void get (int a,int c){
				bigside=a;
				smallside=c;
				float ar=a*c;
				cout<<"the area of rectangle is :";
			}
};
int main (){
	area x;
	float ra;
	int side_1,side_2;
	float bas,hig;
	cout<<"enter the radius of circle:";
	cin>>ra;
	cout<<"enter the base of triangle:";
	cin>>bas;
	cout<<"enter the height of triangle:";
	cin>>hig;
	cout<<"enter the side 1 of rectangle:";
	cin>>side_1;
	cout<<"enter the side_2 of rectangle:";
	cin>>side_2;
	x.get(ra);
	x.get(bas,hig);
	x.get(side_1,side_2);
	return 0;
}
