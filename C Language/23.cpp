#include<iostream>
using namespace std;


//this key word is used to refer to it's own class

class detail
{
	public :
		string n;
		string a;
		
		void user_info(string name,string address)
		{
			this->a = address;
			this->n = name;
//			cout<<"Name is : "<<n<<endl;
//			cout<<"Address is : "<<a<<endl;
		}	
};



class student
{
	public :
		
		course_detail(string name,detail* d)
		{
			cout<<"Course Name is : "<<name<<endl;
			cout<<"Name is : "<<d->n<<endl;
			cout<<"City is : "<<d->a<<endl;
		}
};

class teacher
{
	public :
		teacher_detail(string salary,detail* d)
		{
			cout<<"Teacher Name is "<<d->n<<endl;
			cout<<"Teacher City is "<<d->a<<endl;
			cout<<"Teacher Salary is "<<salary<<endl;
		}
};

main()
{
	detail d;
	student s;
	teacher t;
	d.user_info("deep","ahmedabad");
	s.course_detail("PHP",&d);
	d.user_info("smit","baroda");
	t.teacher_detail("48454",&d);
//	s.course_detail("PHP",&t);
}