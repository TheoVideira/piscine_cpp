#include "Pony.hpp"

void ponyOnTheHeap( void )
{
    Pony *heap_pony = new Pony("Martin", "pink");
    heap_pony->talk();
    delete heap_pony;
}

void ponyOnTheStack( void )
{
    Pony stack_pony = Pony("Rémi", "blue");
    stack_pony.talk();
}

int main( void ){
    std::cout << "Pony on the heap start:" << std::endl;
    ponyOnTheHeap();
    std::cout << "Pony on the heap ended" << std::endl << std::endl;
    std::cout << "Pony on the stack start:" << std::endl;
    ponyOnTheStack();
    std::cout << "Pony on the stack ended" << std::endl;
    return 0;
}