#include<iostream>
#include<math.h>

using namespace std;

class numeric_string
{
	public:
		string d;
		void no(int b,string &a)
	{
		
		int c;
		if(b/27!=0)
		{
		   c=b/27;
		   no(c,a);	
		}
		
		int i;
		if(b%27==0)
			i=31;
		else
		i=b%27;
		i=64+i;
		a=a+char(i);
	}
	
		void letter(int &b,string a)
	{
		int i,s=0;
		for(i=0;i<a.length();i++)
		{
		   if(a.at(i)=='~')
		   continue;
		   else if(a.at(i)!='_')
		   s=s*27+int(a.at(i))-64;
		   else
		   s=s*27;
		}
		b=s;
	}
	
};

class b1:public numeric_string
{
	public:
		friend istream &operator>>(istream &cin,b1 &a)
	{
		cin>>a.d;
	}
	friend  ostream&operator<<(ostream &cout,b1 a)
	{
		cout<<a.d;
	}
		void operator+(b1 &a)
		{
			int a1=0,b=0;
			letter(a1,d);
			letter(b,a.d);
			a1=(d.at(0)=='~')?a1*(-1):a1;
			b=((a.d).at(0)=='~')?b*(-1):b;
			a1=a1+b;
			string k;
			b=a1;
			a1=abs(a1);
			no(a1,k);
			cout<<"result :- ";
			if(b<0)
			cout<<"~";
			cout<<k<<endl;
			
		}
		void operator-(b1 &a)
		{
			int a1=0,b=0;
			letter(a1,d);
			letter(b,a.d);
			a1=(d.at(0)=='~')?a1*(-1):a1;
			b=((a.d).at(0)=='~')?b*(-1):b;
			a1=a1-b;
			string k;
			b=a1;
			a1=abs(a1);
			no(a1,k);
			cout<<"result :- ";
			if(b<0)
			cout<<"~";
			cout<<k<<endl;
		}
		void operator/(b1 &a)
		{
			int a1=0,b=0;
			letter(a1,d);
			letter(b,a.d);
			a1=(d.at(0)=='~')?a1*(-1):a1;
			b=((a.d).at(0)=='~')?b*(-1):b;
			a1=a1/b;
			string k;
			b=a1;
			a1=abs(a1);
			no(a1,k);
			cout<<"result :- ";
			if(b<0)
			cout<<"~";
			cout<<k<<endl;
		}
		void operator*(b1 &a)
		{
			int a1=0,b=0;
			letter(a1,d);
			letter(b,a.d);
			a1=(d.at(0)=='~')?a1*(-1):a1;
			b=((a.d).at(0)=='~')?b*(-1):b;
			a1=a1*b;
			string k;
			b=a1;
			a1=abs(a1);
			no(a1,k);
			cout<<"result :- ";
			if(b<0)
			cout<<"~";
			cout<<k<<endl;
		}
		void operator%(b1 &a)
		{
			int a1=0,b=0;
			letter(a1,d);
			letter(b,a.d);
			a1=(d.at(0)=='~')?a1*(-1):a1;
			b=((a.d).at(0)=='~')?b*(-1):b;
			a1=a1%b;
			string k;
			b=a1;
			a1=abs(a1);
			no(a1,k);
			cout<<"result :- ";
			if(b<0)
			cout<<"~";
			cout<<k<<endl;
		}
};

int main()
{
	numeric_string c;
	int z,x;
	string f;
	cout<<"enter no. :- ";
	cin>>z;
	x=z;
	z=abs(z);
	c.no(z,f);
	c.d=f;
	cout<<"result : ";
	if(x<0)
	cout<<"~";
	cout<<c.d<<endl;
	cout<<"enter letter :- ";
	cin>>c.d;
	c.letter(z,c.d);
	if((c.d).at(0)=='~')
	z=z*(-1);
	cout<<z<<endl;
	int n;
	cout<<"\n\n";
	b1 d,g;
	cout<<"Enter string 1 : ";
	cin>>d;
	cout<<"Enter string 2 : ";
	cin>>g;
	cout<<"Enter\n1 for +\n2 for -\n3 for /\n4 for *\n5 for%\n";
	cin>>n;
	switch(n)
	{
		case 1:
			{
			   d+g;
			   break;	
			}
		case 2:
			{
			   d-g;
			   break;	
			}
		case 3:
			{
			   d/g;
			   break;	
			}
		case 4:
			{
			   d*g;
			   break;	
			}
		case 5:
			{
			   d%g;
			   break;	
			}
	}
}
