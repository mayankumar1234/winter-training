// #include<iostream>
// using namespace std;
// class Student {
//     public:
//     string name;
//     int rollno ;
//     string course;
//     Student(string name,int rollno,string course){
//         this->name=name;
//         this->rollno=rollno;
//         this->course=course;
//     }
// };
// int main() {
//     Student Boy("Anshika ",40," Wintwer Pep");
//     cout<<Boy.name<<Boy.rollno<<Boy.course;
  
// }
#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno ;
    string course;
    Student(string name,int rollno,string course){
        this->name=name;
        this->rollno=rollno;
        this->course=course;
    }
};
int main() {
    Student *st=new Student("Anshika ",40," Wintwer Pep");
    cout<<st->name<<st->rollno<<st->course;
  
}