#include<iostream>
using namespace std;
class Student
{
public:
	int index;
	float grade;
	Student(int idx,float grd) {
		index = idx;
		grade = grd;
	}
	static void max(Student* students, int size) {
		Student* highest = &students[0]; 
		for (int i = 1; i < size; ++i) {
			if (students[i].grade > highest->grade) {
				highest = &students[i];
			}
		}
		cout << "学生成绩最高的是学生" << highest->index << "的成绩 " << highest->grade << endl;
	}

};

int main() {
	Student students[5] = {
		Student(1, 89.5),
		Student(2, 92),
		Student(3, 88),
		Student(4, 95),
		Student(5, 91.5)
	};
	Student::max(students, 5);
	return 0;
}