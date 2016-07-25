/*
 * vector.h
 *
 *  Created on: Jul 22, 2016
 *      Author: leo-0
 * This is a simple achievment of Vectors-like c++
 * USING:
 * - Vector_create - create a new vector
 * -  - Vector_insert - insert new data
 * -  - Vector_insert - get data at `index`
 * - Vector_clean - clean the vector
 */

#ifndef SRC_VECTOR_H_
#define SRC_VECTOR_H_

#include <stdlib.h>
#include <stdint.h>

typedef struct Vector Vector;

// create a new vector
Vector* Vector_create();

// push new data
void Vector_insert( Vector *vector, int data );
// get element at index `index`
int Vector_at( Vector* vector, uint32_t index );

// resize the vector
int* Vector_resize( Vector *vector, size_t length );
// get the length of the vector
size_t Vector_get_length( Vector* vector );

// destructor
void Vector_clean( Vector *vector );

#endif /* SRC_VECTOR_H_ */
