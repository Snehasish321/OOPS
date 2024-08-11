#include<iostream>
#include<string>
using namespace std ;

/*  Important note */
/*  Difference between shallow copy constructor & Deep copy constructor */
/*  Shallow copy constructor copied the object as it is . There is no change happens . In this type of constructor , elements of an objects are saved in the stack memory . */
/*  But in the deep copy constructor , the elements are saved into the heap memory . So , if we need to copy a whole object , but a single element change needs to the object then we create another memory in the heap and call that heap memory when the new object will create .  */

class student {
    public :
    string name ;
    double CGPA ;
    student (string name , double CGPA ) {
        this -> name = name ;
        this -> CGPA = CGPA ;
    }
    
        void getInfo () {
            cout << "Name : " << name << endl ;
            cout << "CGPA : " << CGPA << endl ;
        } 
};

int main () {
    student s1 ("John Doe", 3.8) ;
    s1.getInfo () ; 
    return 0 ; 
}