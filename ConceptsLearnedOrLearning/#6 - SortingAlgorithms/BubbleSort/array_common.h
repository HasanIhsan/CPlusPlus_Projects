#pragma once
#include <iostream>

const int ARR_5_SIZE = 5;
const int ARR_10_SIZE = 10;

#ifdef ARRAY_SORTED_ASC
	int arr_5[ARR_5_SIZE] = { 1,2,3,4,5};
	int arr_10[ARR_10_SIZE] = { 1,2,3,4,5,6,7,8,9,10};
#elif defined(ARRAY_SORTED_DESC)
	int arr_5[ARR_5_SIZE] = { 5,4,3,2,1};
	int arr_10[ARR_10_SIZE] = { 10,9,8,7,6,5,4,3,2,1};
#elif defined(ARRAY_MIXED)
	int arr_5[ARR_5_SIZE] = { 5,1,2,4,3 };
	int arr_10[ARR_10_SIZE] = { 5,1,2,4,3,10,8,7,6,9 };
#endif

inline void swap(int* lhs, int* rhs)
{
	const int temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

inline void print_array(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
		
	std::cout << std::endl;
}