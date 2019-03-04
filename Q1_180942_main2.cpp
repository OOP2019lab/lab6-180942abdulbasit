#include "Q1_180942_header.h"
#include <iostream>
using namespace std;
void printStudentArray(student* ,int );
void printStudentArray(student **,int );
student* GpaArray(student *, int);
student** GpaArray(student **, int);
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
	/*
	for(int i=0; i<3;i++)
		arr1[i].print();
		*/
	int size2=4;
	student *arr2;
	arr2=new student[size2];
	arr2[0]= student (3,2);
	arr2[1]= student (3,3);
	arr2[2]= student (4,2.33);
	arr2[3]= student (4,1);
	arr2[0].addQuizScore(1);
	arr2[0].addQuizScore(4);
	arr2[0].addQuizScore(10);
	arr2[1].addQuizScore(10);
	arr2[1].addQuizScore(4);
	arr2[1].addQuizScore(9);
	arr2[2].addQuizScore(9);
	arr2[2].addQuizScore(8);
	arr2[2].addQuizScore(7);
	arr2[3].addQuizScore(2);
	arr2[3].addQuizScore(3);


	
	printStudentArray(arr1,size1); //prints the array of non dynamic students
	cout<<"...."<<endl;
	printStudentArray(arr2,size2); //Prints the array of dynamic students

	
	delete[] arr2;

	return 0;
	//Destructor for non dynamic students will be invoked
	//Destructor for dynamic students will be invoked

}


