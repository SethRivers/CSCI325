/**
 * @file Vector.cpp
 * @author Seth Rivers
 * @date 2024-09-24
 * @brief The file in which most of the program's inner guts are located
 * 
 * 
 */

#include "Vector.h"
#include <fstream>
#include <iostream>

using namespace std;

Vector::Vector(){
  //base initializations for variables and the pointer. 
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;

}

Vector::Vector(const Vector &other){
  //transfers the size of the vector over
  vec_size = other.vec_size;
  //transfers the capacity of the vector
  vec_capacity = other.vec_capacity;

  //creates a new array with the vector's size using our previously initialized pointer.  
  vec_ptr = new int[vec_size];

  //for-loop used for copying array contents over to another new array
  for(int i = 0; i < vec_size;i++){
    vec_ptr[i] = other.vec_ptr[i];
  }
}

Vector::~Vector(){
  //de-initializes everything to avoid potential leaks. 
  delete[] vec_ptr;
  vec_size = 0;
  vec_capacity = 0;
}

int Vector::size(){
  //lets main access the vector's size data
  return vec_size;
}

int Vector::capacity(){
  //lets main access the vector's capacity data
  return vec_capacity;
}

void Vector::push_back(int element){
  //checks incase the vector size needs to be expanded. if so - it doubles the capacity. 
  if (vec_size == vec_capacity){
    reserve(2*vec_capacity);
  }
  vec_ptr[vec_size] = element;
  vec_size++;
}

void Vector::reserve(int n){
  //checks if the capacity is 0; and increases it by 1 if it is for doubling purposes.
  if (vec_capacity == 0){
    vec_capacity++;
    vec_ptr = new int[vec_capacity];
  }
  //copies everything over to the new vector
  else {
    //temp helps to transfer everything over smoothly
    int* temp = new int[vec_capacity];

    //for loop for actually transfering things over
    for (int i = 0; i < vec_size; i++){
      temp[i] = vec_ptr[i];
    }
    //final assignment of things 
    vec_capacity = n;
    vec_ptr = new int [vec_capacity];
    //one more transfer to a temp for later use in other functions. 
    for (int t = 0; t < vec_size; t++){
      vec_ptr[t] = temp[t];
    }
  }
}

Vector& Vector::operator=(const Vector &other){
  //safety redundency to make sure that crashes do not occur should variables not match up. 
  if (other.vec_size > vec_size){
    delete[] vec_ptr;
    vec_ptr = new int [other.vec_size];
  }
  
  //copies everything over where it needs to go
  for (int i = 0; i < other.vec_size; i++){
    vec_ptr[i] = other.vec_ptr[i];
  }
  vec_size = other.vec_size;

  return *this;
}

int& Vector::operator[](unsigned int index){
  return vec_ptr[index];
}
