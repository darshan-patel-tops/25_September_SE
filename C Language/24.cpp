#include<iostream>
using namespace std;

//Class templates like function templates, class templates are useful when a 
//class defines something that is independent of the data type. 
//Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc. 
/*

Templates in C++ is an interesting feature that is used for 
generic programming and templates in c++ is defined as a blueprint or 
formula for creating a generic class or a function. Simply put, you can 
create a single function or single class to work with different data types using templates.


*/
template<class sqaure>
sqaure kuchbhi(sqaure &value )
{
	cout<<"double Value is : "<<value+value;
};
//sqaure kb2(sqaure &num)
//{
//	cout<<"Number is : "<<num;
//};


main()
{
	int a = 8;
	kuchbhi(a);
//	s.kuchbhi(8);
}