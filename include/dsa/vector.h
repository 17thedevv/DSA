#pragma once

namespace tea {
    template<typename T>
    class Vector{
        private:
        T* data;
        int capacity;
        int size;
        public:
        Vector();
        Vector(int size);
        ~Vector();
        // add a value at the end of array
        void PushBack(T value);
        // remove a value at the end of array
        void PopBack();
        // add a value at the given pos of array
        void InsertAt(T value, int pos);
        // delete a value at the given pos of array
        void DeleteAt(int pos);
        // get a value at the given pos of array
        T Get(int pos);
    };
}