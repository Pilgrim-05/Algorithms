#ifndef DArray_H
#define DArray_H

template<typename T>
class DArray
{
private:
   int m_size = 0;
   int m_capacity = 0;
   T *m_array;
public:
   DArray(int size = 0);
   DArray(const DArray<T>& arr);

   void resize(int s);
   void add(T el);

   T& operator[](int i);
   DArray<T> & operator=(const DArray<T>& arr);



   int size() const {return m_size;}
   int capacity() const {return m_capacity;}

};

#endif // DArray_H


#include <iostream>

template<typename T>
T& DArray<T>::operator[](int i)
{
   if(i < 0 || i >= m_size) throw "ERROR: ";
   return m_array[i];
}
template<typename T>
DArray<T> & DArray<T>::operator=(const DArray<T>& arr)
{
   m_size = arr.m_size;
   m_capacity = arr.m_capacity;
   delete[] m_array;
   m_array = new T[m_capacity];
   for(int i{}; i < m_size; ++i)
      m_array[i] = arr.m_array[i];

   return *this;
}

template<typename T>
DArray<T>::DArray(int size) : m_size(size), m_capacity(size), m_array(nullptr)
{
   if(size > 0)
   {
      m_array = new T[m_capacity];
   }else
      m_capacity = 0;
}

template<typename T>
DArray<T>::DArray(const DArray<T>& arr)
{
   m_size = 0;
   m_capacity = 0;
   *this = arr;
}

template<typename T>
void DArray<T>::resize(int s)
{
   if(s <= 0) throw "ERROR: negative size!";

   if(s > m_capacity)
   {
      m_capacity = s;
      T* arr = new T[m_capacity];
      for(int i{}; i < m_size; ++i)
         arr[i] = m_array[i];
      delete [] m_array;
      m_array = arr;
   }
   m_size = s;
}

template<typename T>
void DArray<T>::add(T el)
{
   if(m_capacity > m_size)
   {
      m_array[m_size] = el;
      ++m_size;
   }else
   {
      int size = m_size;
      resize(m_capacity + 10);
      m_size = size;
      m_array[size] = el;
   }
}
