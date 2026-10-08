#include <dsa/vector.h>

namespace tea {
    template<typename T>
    Vector<T>::Vector(int size){
        this->size = size;
        this->capacity = size*2;
        this->data = new T[capacity];
    }
}