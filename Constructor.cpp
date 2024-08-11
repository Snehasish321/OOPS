/*  Here we discuss about the constructors , There are three types of 1. Non parameterized constructor 2. Parameterized Constructor 3. Copy constructor */
#include<iostream> 
#include <string>
using namespace std; 

/*Encapsulation is wrapping up of data & member functions in a single unit called class ...

** Encapsulation helps us to hide the data .
the meaning of data hiding means , hide the important data ....  
*/ 

class teacher {
    private :
    /*  Generally we can't change the private elements in the class but we can access this by using methods like setSalary , getSalary elements  */
    double salary ;

    public:
    //! There are three types of constructor . This constructor is Non-parameterized constructor , because , their is not any parameter inside () ;
    teacher () {
        cout << "Hi , I am a cpp constructor" << endl ; // Constructor made by me (programmer)
    }

    string name;
    string dept ;
    string subject ;
    

    void changeDept (string newdept) {
        dept = newdept ;
    }
    void setSalary (double newsal) {
        salary = newsal ;
    }
    double getSalary () {
        return salary ;
    }
};

class account {
    private : 
    double balance ; // using the concept of data hiding , because this information is confidential as the perspective of a customer of any bank 
    string password ; // using the concept of data hiding , because this information is confidential as the perspective of a customer of any bank 

    public :
    string userid ;
    double accountnumber ;
};
int main () {
    teacher t1 ; // constructor call , we dont know how the call occurs here . 
    teacher t2 ;
    t1.name = "Arnab";
    t1.dept = "CSE";
    t1.subject = "C++";
    //t1.salary = 10000 ;
    t1.setSalary(10000) ;

    cout << t1.name << endl ;
    cout << t1.dept << endl ;
    cout << t1.subject << endl ;
    //cout << t1.salary << endl ;
    cout << t1.getSalary() << endl ;

    return 0 ;  
}
/*  There is another type of constructor is called "Copy constructor " . Before talking about copy constructor , we should talk about This pointer . In the next code , we talk about "This pointer" . */