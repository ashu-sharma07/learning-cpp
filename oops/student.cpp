#include <iostream>
using namespace std;

class Student{
	private:
		char name[30];
		int roll_no;
	public:
		void getdata(){
		cin >> name;
		cin >> roll_no;
		}
		void showdata(){
		cout << name;
		cout << roll_no;
		}
};

int main(){
	Student ashu;
	ashu.getdata();
	ashu.showdata();
}
