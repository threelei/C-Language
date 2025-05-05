#include<iostream>
#include <Cstring>
using namespace std;
class Student
{
private:
    int num;//学号
    string name;//名字
    int score;//成绩
public:
    Student(int n,string str,int s);
    ~Student();
    int print();
    // int Set(int n,char *str,int s);
};
Student::Student(int n,string str,int s)
{
     num = n;
     name = str;
     score = s;
    cout<<"Constructor"<< " ";
    cout<<num<<" "<<name<<" "<<score<<" " << endl;
}
Student::~Student(){
    cout<< num <<" " << name <<" " << score <<" ";
    cout<<"Destructor"<<endl;
}
int Student::print()
{
    cout<<num<<" "<<name<<" "<<score << endl;
    return 0;
}
int main()
{
    Student A(100,"dot",11);
    Student B(101,"cpp",12);
    cout << "学习使用git"<<endl;
    cout << "HHHHHH" <<endl;
    return 0;
}