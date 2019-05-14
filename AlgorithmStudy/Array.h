#pragma once
template <class T>//类模板详细介绍 https://www.cnblogs.com/msymm/p/9750787.html
class Array
{
private:
	T *base;//数组首地址
	int length;//数组元素个数	
	int size;//数组总大小

public:
	Array();
	~Array();
};

//参考 https://www.cnblogs.com/jiy-for-you/p/6892358.html