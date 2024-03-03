/*
Why is this important for competitive programmers?

Competitive programming is a part of various environments, be it job interviews, coding contests and all, and if you’re in one of those environments, you’ll be given limited time to code your program.
So, suppose you want in your program, a resizable array, or sort an array or any other data structure. or search for some element in your container.
You will always try to code a function which will execute the above mentioned things, and end up losing a great amount of time. But here is when you will use STL. 
An STL is a library of generic functions and classes which saves you time and energy which you would have spent constructing for your use. This helps you reuse these well tested classes and functions umpteenth number of times according to your own convenience. 

To put this simply, STL is used because it is not a good idea to reinvent something which is already built and can be used to innovate things further. Suppose you go to a company who builds cars, they will not ask you to start from scratch, but to start from where it is left. This is the basic idea behind using STL.

COMPONENTS OF STL:

We have three components in STL:

1. Containers
2. Algrithm
3. Iterators
*/

/*
Containers, objects which store data, Algorithms, set of procedures to process data, and Iterators, objects which point to some element in a container. Today, in this tutorial, we will be interested in discussing more about containers.

Containers are themselves of three types: 

Sequence Containers
Associative Containers
Derived Containers
When we talked about containers, we said containers are objects which store data, but what are its three types all about? We’ll discuss that too.

Sequence Containers
A sequence container stores that data in a linear fashion. Refer to the illustration below to understand what storing something in a linear fashion means.

Associative Containers
An associative container is designed in such a way that enhances the accessing of some element in that container. It is very much used when the user wants to fastly reach some element. Some of these containers are, Set, Multiset, Map, Multimap etc.  They store their data in a tree-like structure.

Derived Containers 
 As the name suggests, these containers are derived from either the sequence or the associative containers. They often provide you with some better methods to deal with your data. They deal with real life modelling. Some examples of derived containers are Stack, Queue, Priority Queue, etc. The following illustration give you the idea of how a stack works.

*/