/**
 * @file Vector.h
 * @author Seth Rivers
 * @date 2024-09-24
 * @brief the file in which the functions of Vector.cpp are initialized
 * 
 * 
 */

#ifndef VECTOR_H
#define VECTOR_H

class Vector{
 private:
  int *vec_ptr;
  int vec_size, vec_capacity;

 public:
  Vector();

  Vector(const Vector &other);

  Vector& operator=(const Vector &other);

  int size();

  int capacity();

  void push_back(int element);

  void reserve(int n);

  int& operator[](unsigned int index);
  
  ~Vector();

#endif //VECTOR_H
