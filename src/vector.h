/* The vector ADT */

#include <stdlib.h>  /* malloc and friends */
#include <stdbool.h> /* I can has bool in C99 */

/* A vector is an array of numbers of double precision.
   This structure is not to be used directly. */
typedef struct {
	int size;
	double* data;
} vector;

/* The error reporting is performed through the global variable
   vector_error which takes one of the predefined integer values. */
int vector_error;

/* The predefined error codes of the Vector library. */
#define VECTOR_SUCCESS 0
#define VECTOR_ERR_MALLOC 1
#define VECTOR_ERR_MALLOC_DATA 2
#define VECTOR_ERR_PARAMETERS 3

/* Forward declarations */
char* vector_report(int error);
vector* vector_create(int n);
bool vector_empty(vector* v);
