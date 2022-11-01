#include <iostream>
#include <algorithm>

using namespace std;

class Student{
public:
	string name;
	int score;
	Student(string name,int score){
		this->name=name;
		this->score=score;
	}
	
	bool operator <(Student &student){
		return this->score < student.score;
	}
};

int main(void){
	Student students[]={
		Student("가나다",90),
		Student("나다라",80),
		Student("다라마",70),
		Student("라마바",60),
		Student("마바사",50)
	};
	sort(students,students+5);
	for(int i=0;i<5;i++){
		cout<<students[i].name<<' ';
	} 
}
