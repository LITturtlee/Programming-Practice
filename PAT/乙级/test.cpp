#include <iostream>
#include <string>
using namespace std;
 
class Teacher
{
	string name;
	string course;
public:
	Teacher() {
		cout << "Default constructor " << endl;
	}
	Teacher(const char* n, const char*c) :name(n), course(c) {
		cout << "constructor " << course << "'s teacher is " << name << endl;
	}
	Teacher(const Teacher& t) :name(t.name), course(t.course) {
		cout << "Copy Constructor " << course << "'s teacher is " << name << endl;
	}
	~Teacher() {
		cout << "Destructor " << course << "'s teacher is " << name << endl;
	}
	Teacher& operator=(const Teacher& p)
	{
		cout << "Assign" << endl;
        this->name = p.name;
		return *this;
	}
    string GetInfo(){
        return name;
    }
};
int main()
{
	Teacher *t5 = new Teacher;  // 或Teacher *t5 = new Teacher(); new没有产生匿名对象，可参考：https://blog.csdn.net/a3192048/article/details/80213288
	cout << "=======0" << endl;
	Teacher *t0 = new Teacher("Mr Hu", "Python");
	cout << "=======1" << endl;
	Teacher t1("Mr Zhao", "C++");
	cout << "=======2" << endl; 
	Teacher t2 = t1;//初始化
	cout << "=======3" << endl;
 
	/* 这行代码的运行结果有点“出人意料”，从思维逻辑上说，当匿名对象创建了后，是应该调用自定义拷贝构造函数，或者是默认拷贝构造函数来完成复制过程的，但事实上系统并没有这么做，因为匿名对象使用过后在整个程序中就失去了作用，对于这种情况c++会把代码看成是：
	Teacher t3("Ms Wang", "Matlab");
	省略了创建匿名对象这一过程，所以说不会调用拷贝构造函数。 */
 
	Teacher t3 = Teacher("Ms Wang", "Matlab");//用临时对象来初始化一个新对象，编译器一般会优化成直接用创建临时对象的参数来创建新对象。
 
	cout << "=======4" << endl;
	t2 = t3;//不会调用构造函数，因为没有创建新对象，赋值
    cout<<t2.GetInfo()<<endl;
    cout<<t3.GetInfo()<<endl;

	cout << "=======5" << endl;
	t2 = Teacher("Ms Li", "Consult");//赋值，临时对象会立即释放
	cout << "=======6" << endl;
	delete(t5);
	delete(t0);
 
	return 0;
}
