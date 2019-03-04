#include "Q1_180942_header.h"
#include <iostream>
using namespace std;
void printStudentArray(student *,int );
int main()
{
	int const size1=3;
	student arr1[size1]={student(3,2),student(3,3),student(4,2.33)}; //Overloaded Constructors will be called for 3 students
	arr1[0].addQuizScore(1);
	arr1[0].addQuizScore(4);
	arr1[0].addQuizScore(10);
	arr1[1].addQuizScore(10);
	arr1[1].addQuizScore(4);
	arr1[1].addQuizScore(9);
	arr1[2].addQuizScore(9);
	arr1[2].addQuizScore(8);
	arr1[2].addQuizScore(7);
	for(int i=0; i<3;i++)
		arr1[i].print();
/*
	student **arr2=new student*[4];
	int size=4;
	*/
	printStudentArray(arr1,size1); //prints the array of non dynamic students

	return 0;
	//Destructor for non dynamic students will be invoked

}


