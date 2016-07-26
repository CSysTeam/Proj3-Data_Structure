/*
 * vector.c
 *
 *  Created on: Jul 22, 2016
 *      Author: leo-0
 */

#include "vector.h"
#include <assert.h>

#define INIT_VECTOR_LEN 4

typedef struct Vector {
	size_t length;
	size_t index;
	int* data;
} Vector;

Vector* Vector_create()
{
	Vector* vector = malloc( sizeof(Vector) );

	assert( vector != NULL && "can not create a vector" );

	vector->data = malloc( INIT_VECTOR_LEN * sizeof(int) );
	assert( vector->data != NULL && "can not create a vector data" );
	vector->index = -1;
	vector->length = INIT_VECTOR_LEN;

	return vector;
}

size_t Vector_get_length( Vector* vector )
{
	return vector->index + 1;
}

int* Vector_resize( Vector *vector, size_t length )
{
	int* resized_data = realloc( vector->data, length * sizeof(int) );

	if( resized_data != NULL )
		vector->length = length;

	return resized_data;
}

void Vector_insert( Vector *vector, int data )
{
	// if the max length reached - resize the vector
	if( vector->index == vector->length )
	{
		int* resized_data = Vector_resize( vector, vector->length * 2 );

		assert( resized_data != NULL && "can not resize vector" );

		vector->data = resized_data;
	}

	vector->data[++vector->index] = data;
}

int Vector_at( Vector* vector, uint32_t index )
{
	return vector->data[index];
}

void Vector_clean( Vector* vector )
{
	free( vector->data );
	vector->data   = NULL;
	vector->index  = -1;
	vector->length = 0;

	free( vector );
	vector = NULL;
}
