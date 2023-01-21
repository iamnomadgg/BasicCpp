#include <iostream>
#include <string>
using std::cout;
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion(){
        std::cout << "AbstractEmployeeAskForPromotion" << std::endl;
    }
};

class Employee : AbstractEmployee
{
private:
protected:
public:
    Employee()
    {
        std::cout << "EmployeeClass" << std::endl;
    }
    void AskForPromotion(){
        std::cout << "EmployeeAskForPromotion" << std::endl;
    }
};

class Developer : public Employee
{
public:
    Developer()
    {
        std::cout << "DeveloperClass" << std::endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    Teacher()
    {
        std::cout << "TeacherClass" << std::endl;
    }
};

int main()
{
    Employee employee1 = Employee();
    Employee employee2 = Employee();
    Developer dev1 = Developer();
    Teacher t = Teacher();
    Employee *pEmployee3 = &dev1;
    Employee *pEmployee4 = &t;
}
