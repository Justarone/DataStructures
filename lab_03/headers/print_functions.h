#ifndef _PRINT_FUNCTIONS_H_
#define _PRINT_FUNCTIONS_H_

#include "matrix_cdio.h"
#include <time.h>

void print_menu(FILE *const stream);
int print_elems(const matrix_std *const matrix, const matrix_std *const factor,
                const matrix_std *const res);
void print_coords(const matrix_std *const matrix, const matrix_std *const factor,
                  const matrix_std *const res);
void print_times(const clock_t *const times);

#endif