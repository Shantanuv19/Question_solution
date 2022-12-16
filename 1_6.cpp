#include<iostream>
using namespace std;
class a{
public:
    void fun() {
	 cout << "Delegate"; 
	}
};
class b{
    a obj;
	public:
    void fun_1() {
		obj.fun(); 
	}
};
 
int main()
{
    b obj1;
    obj1.fun_1();
    return 0;
}
