/*

Inheritence in C++ an Overview-
 * Reusibilty is very important features of OOPs.
 *  In C++ we can reuse the class and add new features on it.
 *  Reusing of classes saves time and money.
 *  Reusing already tested and debugged classes will save lot of efforts of developing and debugging the same thing.

What is Inheritence? -
 *  The concept of reusability in C++ is supported using Inheritence.
 *  We can reuse the property of an existing class by inheriting it.
 *  Existing class is a called Base Class.
 *  The new class which is inherited from the base class is called Derived Class.
 *  There are many types of Inheritence in C++.

Forms of Inheritence in C++ -
 *  Single Inheritence.
 *  Multiple Inheritence.
 *  Hierarchical Inheritence.
 *  Mlutilevel Inheritence.
 *  Hybrid Inheritence.

Single Inheritence -
    Single inheritance is a type of inheritance in which a derived class is inherited with only one base class.
 For example, we have two classes “employee” and “programmer”.
 If the “programmer” class is inherited from the “employee” class which means that
 the “programmer” class can now implement the functionalities of the “employee” class.
        Ex.    class employee
                    /
               class programmer

Multiple Inheritence -
    Multiple inheritances are a type of inheritance in which one derived class is inherited with more 
than one base class. For example, we have three classes “employee”, “assistant” and “programmer”. 
If the “programmer” class is inherited from the “employee” and “assistant” class which means that 
the “programmer” class can now implement the functionalities of the “employee” and “assistant” class.
        Ex.    class employee   class assistant
                        \           /
                       class programmer      

Heirarchical Inheritence -
    A hierarchical inheritance is a type of inheritance in which several derived classes are inherited 
from a single base class. For example, we have three classes “employee”, “manager” and “programmer”. 
If the “programmer” and “manager” classes are inherited from the “employee” class which means that 
the “programmer” and “manager” class can now implement the functionalities of the “employee” class.   
        Ex.                  class employee
                              /         \
               class programmer       class manager

Multilevel Inheritence -
    Multilevel inheritance is a type of inheritance in which one derived class is inherited from 
another derived class. For example, we have three classes “animal”, “mammal” and “cow”. 
If the “mammal” class is inherited from the “animal” class and “cow” class is inherited 
from “mammal” which means that the “mammal” class can now implement the functionalities 
of “animal” and “cow” class can now implement the functionalities of “mammal” class.  
        Ex.    class animal
                    /
               class mammal           
                    /
               class cow

Hybrid Inheritence -
Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance. 
In hybrid inheritance, a class is derived from two classes as in multiple inheritances. 
However, one of the parent classes is not a base class. For example, we have four classes 
“animal”, “mammal”, “bird”, and “bat”. If “mammal”  and “bird” classes are inherited from 
the “animal” class and “bat” class is inherited from “mammal” and “bird” classes which 
means that “mammal” and “bird” classes can now implement the functionalities of “animal” class and “bat” 
class can now implement the functionalities of “mammal” and “bird” classes.      
        Ex.                  class animal
                              /         \
                    class mammal      class bird
                              \         /
                               class bat
                   

*/