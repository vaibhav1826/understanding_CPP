/*
objects --> object are entites in real world.
class --> class is the blueprint of these entites.


basic syntax of class -->
class A{

};

int main(){

A a; // creating object

}


Acess modifier-->
1. private = which can only access inside a class
2. pubic = which can access by everyone
3.protected = which can access inside a class and to its derived class


1. encapsulation --> wraping up of data and member function in a single unit
                    called class.

2. constructor --> special method invoked automatically at a time of creation of
                    an object.

3.this is a special pointer in c++ that points to the current object.
            this-> prop

4. copy constructor -> special constructor (default) used to copy properties
                        of one object into another .

5. shallow copy--> when objects copies all the member value from one object to
                     another.

6. deep copy -->it also make a copy of dynamicallly allocated memory in heap

7. destructor -> Destructor is an instance member function that is invoked
                 automatically whenever an object is going to be destroyed

8. polymorphism -> its an ability of an object to take on different ways
                    depending on the context in which they are used .

--> compile time polymorphism
for example- function overloading , constructor overloading

--> run time polymorphism
for example -function overriding

9. virtual function -> member function that you expect to be redefined in
                        derived classes.

10. Abstraction --> hiding all the unnessary details & showing only the important
                    parts .

11. static keyword
-> static variable
-> static object
 */