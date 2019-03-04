#include "Q1_180942_header.h"
#include <iostream>
using namespace std;
void main()
{
	
	student s1;
	s1.addQuizScore(10);
	s1.addQuizScore(3);
	s1.addQuizScore(7);
	s1.addQuizScore(1);
	s1.print();
    student s2(4,2);
	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);
	s2.print();
	student s3(s1); //Copy Constructor will be invoked 
	s3.updateScore(1,3);
	s3.updateScore(10,3);
	cout<<s1.compare(s2)<<endl; //Copy Constructor will be invoked because s2 is being passed by value which creates a copy int the compare function
	//Destructor will be invoked for the copy that was made in the compare function
	s3.setGPA(3.0);
	s3.print();
	s1.print();
    //Destructor will be invoked for s3
	//Destructor will be invoked for s2
	//Destructor will be invoked for s1
}
