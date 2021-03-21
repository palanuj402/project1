#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//template <class T>
class P1{
	int a,b;
	public:
		P1(){
			a=b=0;
		}
		/*P1(int x,int y){
			a=x;
			b=y;
		}*/
		void s_cal(){
			int n;
			char s;
			
			cout<<"\n******************SIMPLE CALCULATOR*************************";
			start:
			cout<<"\n1.ADDITION";
			cout<<"\n2.SUBTRACTION";
			cout<<"\n3.DIVISION";
			cout<<"\n4.MULTIPLICATION";
			cout<<"\n5.MODULUS";
			cout<<"\n6.RECIPROCAL";
			cout<<"\nEnter your choice of operation: ";
			cin>>n;	
			switch(n){
				case 1:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					add();
					break;
				case 2:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					sub();
					break;
				case 3:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					div();
					break;	
				case 4:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					mul();
					break;
				case 5:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					mod();
					break;	
				case 6:
					cout<<"\nEnter number for reciprocal: ";
					cin>>a;
					res();
					break;	
			}
			cout<<"\nDo u want to see agaain: ";
			cin>>s;
			if(s=='Y' || s=='y')
			goto start;
			else exit;
		
		}
		void st_cal(){
			int n;
			char s;
			
			cout<<"\n******************SCIENTIFIC CALCULATOR*************************";
			start:
			cout<<"\n1.POWER";
			cout<<"\n2.SIN";
			cout<<"\n3.COS";
			cout<<"\n4.TAN";
			cout<<"\n5.SQUARE OF A NUMBER";
			cout<<"\n6.CUBE OF A NUMBER";
			cout<<"\n7.SQUARE ROOT OF A NUMBER";
			cout<<"\n8.CUBE ROOT OF A NUMBER";
			cout<<"\n9.LOG(With base e) OF A NUMBER";
			cout<<"\n10.LOG(With base 10) OF A NUMBER";
			cout<<"\nEnter your choice of operation: ";
			cin>>n;	
			switch(n){
				case 1:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					power1();
					break;
				case 2:	
					cout<<"\nEnter a number for sin operation: ";
					cin>>a;
					sin1();
					break;
				case 3:
					cout<<"\nEnter a number for cos operation: ";
					cin>>a;
					cos1();
					break;	
				case 4:
					cout<<"\nEnter a number for tan operation: ";
					cin>>a;
					tan1();
					break;	
				case 5:
					cout<<"\nEnter a num for finding square: ";
					cin>>a;
					sqrt1();
					break;	
				case 6:
					cout<<"\nEnter a num for finding cube: ";
					cin>>a;
					cube1();
					break;
				case 7:
					cout<<"\nEnter a num for finding square Root: ";
					cin>>a;
					srt();
					break;	
				case 8:
					cout<<"\nEnter a num for finding cube Root: ";
					cin>>a;
					crt();
					break;	
				case 9:
					cout<<"\nEnter a num for finding Log with base e: ";
					cin>>a;
					l1();
					break;	
				case 10:
					cout<<"\nEnter a num for finding Log with base 10: ";
					cin>>a;
					l2();
					break;	
			}
			cout<<"\nDo u want to see agaain: ";
			cin>>s;
			if(s=='Y' || s=='y')
			goto start;
			else exit;
		
		}
		int add(){
			cout<<"Addition of two num is: "<<a+b;
			return (a+b);
		}
		int sub(){
			cout<<"Sub of two num is: "<<a-b;
			return (a-b);
		}
		int mul(){
			cout<<"Multiplication of two num is: "<<a*b;
			return (a*b);
		}
		int div(){
			cout<<"Division of two num is: "<<a/b;
			return (a/b);
		}
		int mod(){
			cout<<"Modulus of two num is : "<<a%b;
			return (a%b);
		}
		double res(){
			cout<<"Reciprocal is: "<<1/a;
			return (1/a);
		}
		double power1(){
			cout<<a<<" raised to power "<<b<<" is:"<<pow(a,b);
			return pow(a,b);
		}
		double sin1(){
			cout<<"Sin of "<<a<<" is: "<<sin(a);
		}
		double cos1(){
			cout<<"Cos of "<<a<<" is: "<<cos(a);
		}
		double tan1(){
			cout<<"Tan of "<<a<<" is: "<<tan(a);
		}
		double sqrt1(){
			cout<<"Sqaure of given Number is "<<a*a;
			return a*a;
		}
		double cube1(){
			cout<<"Cube of given Number is "<<a*a*a;
			return a*a*a;
		}
		double srt(){
			cout<<"Square root of num is "<<sqrt(a);
			return sqrt(a);
		}
		double crt(){
			cout<<"Cube root of num is "<<cbrt(a);
			return cbrt(a);
		}
		double l1(){
			cout<<"log of "<<a<<" with base e is: "<<log(a);
			return log(a);
		}
		double l2(){
			cout<<"log of "<<a<<" with base 10 is: "<<log10(a);
			return log(a);
		}
};
int main(){
	int n;
	char s;
	P1 ob1;
	start:
	cout<<"1.Simple calculator";
	cout<<"\n2.Scientific calculator";
	cout<<"\nEnter Nunmber for type of calculator u want: ";
	cin>>n;
	switch(n){
		case 1:
			ob1.s_cal();
			break;
			
		case 2:
			ob1.st_cal();
			break;				
	}
	cout<<"\nDo u want to choose again type of calculator: ";
			cin>>s;
			if(s=='Y' || s=='y')
			goto start;
			else exit;
	
	
	return 0;	
}
