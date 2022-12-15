#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class result{
	double total;
protected:
	void readdata(double val){
		total=val;
	}
	void displaydata(){
		cout<<"Final Result is: "<<total<<endl;
	}
};
class Exam: public result{
	double mark1, mark2;
protected:
	void readdata(){
		cout<<"Enter Mark For Exam_1: ";
		cin>>mark1;
		cout<<"Enter Mark For Exam_2: ";
		cin>>mark2;
	}
	void displaydata(){
		cout<<"Mark For Exam 1: "<<mark1<<endl;
		cout<<"Mark for Exam 2: "<<mark2<<endl;
		result::readdata(mark1+mark2);
		result::displaydata();
	}
	
};
class student: public Exam{
	long long roll_no;
	string branch;
protected:
	void readdata(){
		cout<<"Enter roll no: ";
		cin>>roll_no;
		cout<<"Enter Branch: ";
		cin>>branch;
	}
	void displaydata(){
		cout<<"Roll No: "<<roll_no<<endl;
		cout<<"Branch: "<<branch<<endl;
		Exam::readdata();
		Exam::displaydata();
	}
	
};
class Sports: public result{
	string Game_name;
	double score;
protected:
	void readdata(){
		cout<<"Enter Game Name: ";
		cin>>Game_name;
		cout<<"Enter Score: ";
		cin>>score;
	}
	void displaydata(){
		cout<<"Game Name: "<<Game_name;
		cout<<"Score: "<<score;
		result::readdata(score);
		result::displaydata();
	}
};

class Person: public student, Sports{
		char name[100];
		int age;
	public:
		void readdata(){
			cout<<"Enter name: ";
			cin.getline(name, 100);
			cout<<"Enter Age: ";
			cin>>age;
		}
		void displaydata(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"For student Press 1: "<<endl;
		cout<<"For Sports Press 2: "<<endl;
		cout<<"\t\tEnter your choice: ";
		char c=getch();
		switch(c){
			case '1': student::readdata();  student::displaydata(); break;
			case '2': Sports::readdata(); Sports::displaydata(); break;
			default: cout<<"Envalid...";
		}
	}
};
int main(){
	int d;
	Person obj;
	obj.readdata();
	obj.displaydata();
}
