#include "Q1_180942_header.h"
#include <iostream>
using namespace std;

int student:: counter=0;
student::student()
{
	counter++;
	ID=counter;
	quizCapacity=3;
	quizScore=new float [quizCapacity];
	quizTaken=0;
	GPA=0;


}
student::student(int a, float b)
{
	counter++;
	ID=counter;
	if(a>=0)
	    quizCapacity=a;
	else
		quizCapacity=3;
	quizScore=new float [quizCapacity];
	quizTaken=0;
	if (b>0 && b<=4)
	    GPA=b;
	else 
		GPA=0;
	

}
student::student(const student &a)
{
	ID=a.ID;
	quizCapacity=a.quizCapacity;
	quizScore=new float [quizCapacity];
	quizTaken=a.quizTaken;
	if (a.quizTaken>0)
	{
		for (int i=0; i<quizTaken;i++)
			quizScore[i]=a.quizScore[i];
	}
	GPA=a.GPA;
	cout<<"Copy Constructor "<<ID<<endl;
	

}
student::~student()
{
	if (quizScore!=nullptr)
		delete[] quizScore;
	cout<<"Destructor "<<ID<<endl;

}
void student::addQuizScore(int a)
{
	if(quizTaken<quizCapacity)
	{
		quizScore[quizTaken]=a;
		quizTaken++;
	}
	else
	{
		cout<<"There is no Capacity"<<endl;
	}
}
void student::setGPA(float a)
{
	if (a>=0 && a<=4)
		GPA=a;
	else
		GPA=0;
}
float student::getGPA() const
{
	return GPA;
}
void student::print() const
{
	cout<<"Student ID: "<<ID<<endl;
	cout<<"GPA: "<<GPA<<endl;
	cout<<"Quiz Taken: "<<quizTaken<<endl;
	if (quizTaken>0)
	{
		cout<<"Quizz Scores: ";
	for (int i=0; i<quizTaken; i++)
		cout<<quizScore[i]<<"  ";
	}
	cout<<endl;
}
bool student::compare(student a)
{
	if (GPA>a.GPA)
		return true;
	else 
		return false;
}
void student::updateScore(int a, int b)
{
	if (a<=quizTaken)
		quizScore[a-1]=b;
	else
		cout<<"Quiz "<<a<<" was not taken"<<endl;
}
void printStudentArray(student *arr,int size)
{
	for (int i=0; i<size;i++)
		arr[i].print();
}
