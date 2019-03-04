#include <string>
using namespace std;
class student
{
	static int counter;
	int ID;
	float *quizScore;
	int quizCapacity;
	int quizTaken;
	float GPA;
public:
	student();
	student(int, float);
	student(const student &);
	~student();
	void addQuizScore(int);
	void setGPA(float);
	float getGPA() const;
	void print() const;
	bool compare(student);
	void updateScore(int, int);
};
