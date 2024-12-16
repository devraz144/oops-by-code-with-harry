// virtual base class  -> to inherit the data member only once 
// in hybrid inheeritance the derived class can have the same member from their parent class.
// to resolve these we use virtual base class 


/*

               class A ( var dev )
               /            \
              /              \
             /                \
            /                  \
(var dev)  class B        class C ( var dev )
            \                   /
             \                 /
              \               /
               \             /
               class d ( var dev , var dev ) { one from class b , one from class c }


*/


/*

syntax to resolve 

class A ;
class b : virtual public A ;
class c : virtual public A ;
class D : public b , public c ;

*/

// we do this to not have ambiguity 

