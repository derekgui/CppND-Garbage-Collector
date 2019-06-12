#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    //construct from raw pointer
    Pointer<int> p = new int(19);
    //assign to new raw pointer
    p = new int(21);
    p = new int(28);
    //copy construct from Pointer obj
    Pointer<int> p1 = p;
    //assign from Pointer obj;
    Pointer<int> p2 = nullptr;
    p2 = p1;
    //before garbage collection
    p.showlist();
    p.collect();
    //after garbage collection
    p.showlist();


    //construct from raw array pointer    
    Pointer<int,2> p3 = new int[2]{1,2};
    //assign to a new array
    p3 = new int[2]{5,6};
    //copy construct from Pointer to array obj
    Pointer<int,2> p4 = p3;
    //assign from Pointer obj;
    Pointer<int,2> p5 = nullptr;
    p5 = p4;
    //before garbage collection
    p3.showlist();
    p3.collect();
    //after garbage collection
    p3.showlist();


    return 0;
}