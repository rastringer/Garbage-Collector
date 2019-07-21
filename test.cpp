// PtrDetails method
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    return (ob1.memPtr == ob2.memPtr);
}
// Copy constructor of Pointer class
template< class T, int size>
Pointer<T,size>::Pointer(const Pointer &ob){
    typename std::list<PtrDetails<T> >::iterator p;
    p = findPtrInfo(ob.addr);
    
    // TODO: Implement copy constructor
    
    // increment ref count 
    
    // decide whether it is an array
}
// Overload assignment of Pointer to Pointer. (i.e ptr = ptr)
template <class T, int size>
Pointer<T, size> &Pointer<T, size>::operator=(Pointer &rv){
    typename std::list<PtrDetails<T> >::iterator p;
    // TODO: Implement assignment
    // First, decrement the reference count
    // for the memory currently being pointed to.
    
    // Then, ncrement the reference count of
    // the new address.
    
    // increment ref count
    // store the address.
    // return
}