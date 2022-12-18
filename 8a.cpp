#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class person{
		string name;
		int age;
	public:
		void readdata(){
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
		}
		void displaydata(){
			cout<<"\tName: "<<name<<endl;
			cout<<"\tAge: "<<age<<endl;
	}
};
class sports: virtual public person{
	protected:
	string Game_name;
	double score;
public:
	void readdata(){
		cout<<"Enter Game Name: ";
		cin>>Game_name;
		cout<<"Enter Score: ";
		cin>>score;
	}
	void displaydata(){
		cout<<"\tGame Name: "<<Game_name<<endl;
		cout<<"\tScore: "<<score<<endl;
	}
};
class student:virtual public person{
	long long roll_no;
	string branch;
public:
	void readdata(){
		cout<<"Enter roll no: ";
		cin>>roll_no;
		cout<<"Enter Branch: ";
		cin>>branch;
	}
	void displaydata(){
		cout<<"\tRoll No: "<<roll_no<<endl;
		cout<<"\tBranch: "<<branch<<endl;
	}
	
};

class Exam:public student{
protected:
	int mark1, mark2;
public:
	void readdata(){
		cout<<"Enter Mark For Exam_1: ";
		cin>>mark1;
		cout<<"Enter Mark For Exam_2: ";
		cin>>mark2;
	}
	void displaydata(){
		cout<<"\tMark For Exam 1: "<<mark1<<endl;
		cout<<"\tMark for Exam 2: "<<mark2<<endl;
	}
	
};

class result: public Exam, sports{
	double total;
public:
	void readdata(){
		person::readdata();
		student::readdata();
		Exam::readdata();
		sports::readdata();
	}
	void displaydata(){
		person::displaydata();
		student::displaydata();
		Exam::displaydata();
		sports::displaydata();
		total=mark1+mark2+score;
		cout<<"\t\tFinal Result is: "<<total<<endl;
	}
};
int main(){
	result obj;
	
	obj.readdata();
	obj.displaydata();
}
