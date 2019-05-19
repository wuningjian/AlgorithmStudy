// AlgorithmStudy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "SkillListClass.h"
#include "BinarySearch.h"
#include "Array.cpp"

int main()
{
	int end_input;
    /*std::cout << "Hello World!\n请输入目标值和精度："; 

	BinarySearch bSearchObj = BinarySearch();
	double target, acc;
	std::cin >> target >> acc;
	std::cout << bSearchObj.bsearchSqrt(target, acc) << std::endl;
	std::cin >> target;*/

	Array<int> test_array = *new Array<int>;
	test_array.init();
	test_array.add(1);
	test_array.add(3);
	test_array.add(6);
	test_array.add(7);
	test_array.add(4);
	test_array.pringArray();

	test_array.insert(99, 5);
	test_array.pringArray();

	int item = test_array.deleteItem(7);
	test_array.pringArray();
	std::cout << item << "被删除了" << endl;

	std::cin >> end_input;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
