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
		if ((mid*mid - temp_target) > acc) { // ���ƫ�󣬼�����С�������
			end = mid;
		}
		else {//ʣ��((mid*mid - end) < -acc)��������ƫС�����������������
			start = mid;
		}
	}
	return 0;
}
