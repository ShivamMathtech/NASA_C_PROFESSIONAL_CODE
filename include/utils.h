#ifndef UTILS_H
#define UTILS_H

/**
 * @file utils.h
 * @brief Utility functions for the project.
 *
 * This header declares helper functions for data processing,
 * validation, and other reusable operations.
 */

#include <stddef.h> // For size_t

/**
 * @brief Adds two integers safely.
 *
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int add(int a, int b);

/**
 * @brief Calculates the average of an integer array.
 *
 * @param arr Pointer to the integer array
 * @param size Number of elements in the array
 * @return The average value (double). Returns 0 if size == 0.
 */
double average(const int *arr, size_t size);

#endif // UTILS_H
