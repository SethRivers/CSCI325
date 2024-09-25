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


/**
 * Class's Constructor; readying and initilizing things for us to use. 
 * in this case; a Vector
 * 
 * @pre no pre condition
 * @post no post item
 * 
 */
  Vector();


/**
 * 
 *
 * @param const Vector &other 
 * @pre 
 * @post 
 * 
 */
  Vector(const Vector &other);


/**
 * 
 *
 * @param const Vector &other 
 * @pre 
 * @return Vector& 
 * @post 
 * 
 */
  Vector& operator=(const Vector &other);


/**
 * 
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int size();


/**
 * 
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int capacity();


/**
 * 
 *
 * @param int element 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void push_back(int element);


/**
 * 
 *
 * @param int n 
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void reserve(int n);


/**
 * 
 *
 * @param unsigned int index 
 * @pre 
 * @return int& 
 * @post 
 * 
 */
  int& operator[](unsigned int index);
  

/**
 * 
 *
 * @pre 
 * @post 
 * 
 */
  ~Vector();
  

#endif //VECTOR_H
