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

	//初始化内存，分配内存
	//检查内存是否够用，不够就增加
	//添加元素到数组最后
	//插入元素到数组具体位置，位置从1开始
	//删除指定位置元素并返回，位置从1开始
	//返回指定位置元素
	//打印数组所有元素

};

//参考 https://www.cnblogs.com/jiy-for-you/p/6892358.html