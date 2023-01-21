#include <iostream>
#include <string>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    Employee(string name, string company, int age){
        this->Name = name;
        this->Company = company;
        this->Age = age;
    }
    
    void setName(string name){
        this->Name = name;
    }
    string getName(){
        return this->Name;
    }
    void setCompany(string company){
        this->Company = company;
    }
    string getCompany(){
        return this->Company;
    }
    void setAge(int age){
        this->Age = age;
    }
    int getAge(){
        return this->Age;
    }
    
    void IntroduceYourself(){
        std::cout << "Name: " << this->Name << std::endl;
        std::cout << "Company: " << this->Company << std::endl;
        std::cout << "Age: " << this->Age << std::endl;

    }
    void AskForPromotion(){
        if(this->Age > 30){
            std::cout << this->Name << " got promoted!" << std::endl;
        }
        else{
            std::cout << this->Name << " sorry no promotion for you!" << std::endl;
        }
    }
    virtual void Work(){
        std::cout << this->Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

class Developer: public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        this->FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){
        std::cout << Name << " fixed bug using " << this->FavProgrammingLanguage << std::endl;
    }
    /*void Work(){
        std::cout << Name << " is writing " << this->FavProgrammingLanguage << std::endl;
    }*/
};

class Teacher: public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        this->Subject = subject;
    }
    void PrepareLesson(){
        std::cout << Name << "is preparing " << this->Subject << " lesson" << std::endl;
    }
    void Work(){
        std::cout << Name << " is teaching " << this->Subject << std::endl;
    }
};

int main()
{
    Employee employee1 = Employee("Chris", "Amazon", 23);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("George", "Google", 38);
    employee2.IntroduceYourself();
    Developer dev1 = Developer("David", "Youtube", 26, "C++");
    dev1.IntroduceYourself();
    dev1.FixBug();
    dev1.AskForPromotion();
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    Teacher t = Teacher("Jack", "Cool School", 36, "History");
    t.PrepareLesson();
    t.AskForPromotion();
    t.Work();
    dev1.Work();
    Employee *pEmployee3 = &dev1;
    Employee *pEmployee4 = &t;

    pEmployee3->Work();
    pEmployee4->Work();
}
