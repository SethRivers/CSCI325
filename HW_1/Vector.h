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

using namespace std;

class Vector{
 private:
  int *vec_ptr;
  int vec_size, vec_capacity;

 public:


/**
 * Class's Constructor; readying and initilizing things for us to use. 
 * in this case; a Vector and some variables for it. 
 * 
 * @pre no pre condition
 * @post the vector pointer (vec_ptr) is set to null, and the vector size/capacity is set to 0
 * 
 */
  Vector();


/**
 * The Copy Constructor 
 * forms a dynamic array of adequate proportions, and transfers the data of the vector over to it. 
 * @param const Vector &other acts as a repository for data and organization. 
 * @pre An accessible vector is capable of being accessed. (other being the prime target)
 * @post The vec_ptr is fully initialized and now in use holding the data of other.vec_ptr
 * 
 */
  Vector(const Vector &other);


/**
 * The Assignment Operator
 * initializes a new array and copies data from a pre-existing array over to the new one. 
 * @param const Vector &other 
 * @pre an array full of data is sent through
 * @post a new vec_ptr is initialized and the data of the other array is now contained within. 
 * 
 */
  Vector& operator=(const Vector &other);


/**
 * The Size Function
 *
 * Returns the number of elements in the vector. 
 * @pre a vector exists
 * @return int          
 * @post the vector's size is revealed
 *
 */
  int size();


/**
 * The Capacity Function
 *
 * Returns the allocated storage space of the vector
 * @pre a vector exists
 * @return int 
 * @post the vector's capacity is revealed
 * 
 */
  int capacity();


/**
 * The Push_Back Function
 *
 * Stores an element at the end of the vector 
 * If needed, calls reserve() to expand the Vector if there is no space. 
 * @param int element 
 * @pre A vector exists
 * @return void 
 * @post The vector has another element, and/or is doubled in size. 
 * 
 */
  void push_back(int element);


/**
 * The Reserve Function 
 *
 * Increases the size of the vector and automatically transfers data over 
 * to the expanded vector if needed
 * @param int n is how much the vector will expand by
 * @pre a vector exists and is called for poptential resizing
 * @return void 
 * @post if the vector is to small, it will be expanded. If not, nothing happens. 
 * 
 */
  void reserve(int n);


/**
 * The Second Assignment Operator
 *
 * when used, shows the element at the prompted position in the vector
 * @param unsigned int index 
 * @pre an initialized vector is called
 * @return int& 
 * @post the user now knows the exact element in the given position 
 * 
 */
  int& operator[](unsigned int index);
  

/**
 * Deconstructor
 *
 * Deallocates vec_ptr and resets the size and capacity integers
 * @pre vec_ptr is allocated
 * @post vec_ptr is deacllocated and the size/capacity integers are set to 0. 
 * 
 */
  ~Vector();
  

};

#endif //VECTOR_H
