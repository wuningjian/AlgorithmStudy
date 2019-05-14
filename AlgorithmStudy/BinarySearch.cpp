#include "pch.h"
#include "BinarySearch.h"


BinarySearch::BinarySearch()
{
}


BinarySearch::~BinarySearch()
{
}

double BinarySearch::bsearchSqrt(double target, double acc)
{
	
	double start = 1.0;
	double end = target;
	double temp_target = target;
	if (target < 1) {
		end = 1 / target;
		temp_target = 1 / target;
	}
	double mid;
	while (1)
	{
		mid = start / 2 + end / 2;
		if ((mid*mid- temp_target)<=acc && (mid*mid - temp_target) >= -acc)
		{
			if (target < 1) {
				return 1 / mid;
			}
			else {
				return mid;
			}
			
		}
		if ((mid*mid - temp_target) > acc) { // 结果偏大，继续往小区间查找
			end = mid;
		}
		else {//剩下((mid*mid - end) < -acc)情况，结果偏小，继续往大区间查找
			start = mid;
		}
	}
	return 0;
}
