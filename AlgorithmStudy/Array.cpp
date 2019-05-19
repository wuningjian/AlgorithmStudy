#include "pch.h"
#include "Array.h"
#include "malloc.h"
using namespace std;

template <class T> Array<T>::Array()
{
}


template <class T> Array<T>::~Array()
{
}

template <class T> bool Array<T>::init() {
	length = 0;
	size = 10;  // 一开始先分配10个T的字节
	base = (T*)malloc(size * sizeof(T));
	if (!base) {
		return false;
	}
	return true;
}

template <class T> bool Array<T>::ensureCapcity() {
	if (length >= size) {
		T *newBase = (T*)realloc(base, (10 + size) * sizeof(T));
		if (!newBase) {
			return false;
		}
		base = newBase;
		size += 10;
		newBase = nullptr;
	}
	return true;
}

template <class T> bool Array<T>::add(T item) {
	if (!ensureCapcity()) {
		return false;
	}
	T *p = base + length;
	*p = item;
	length++;
	return true;
}

template <class T> bool Array<T>::insert(T item, int idx) {
	if (!ensureCapcity()) {
		return false;
	}
	if (idx<1 || idx > length) {
		cout << "插入值超出范围" << endl;
		return false;
	}
	T *start = base + idx - 1;
	T *end = base + length - 1;
	while (end >= start)
	{
		*(end + 1) = *end;
		end--;
	}
	*start = item;
	start = nullptr;
	end = nullptr;
	length++;
	return true;
}

template <class T> T Array<T>::deleteItem(int idx) {
	if (idx < 1 || idx > length) {
		return NULL;
	}
	T *item_ptr = base + idx - 1;
	T item = *item_ptr;
	item_ptr++;
	T *end = base + length - 1;
	while (item_ptr <= end)
	{
		*(item_ptr - 1) = *item_ptr;
		item_ptr++;
	}
	item_ptr = nullptr;
	length--;
	return item;
}

template <class T> T Array<T>::getItemByIndex(int idx) {
	if (idx<1 || idx>length) {
		return NULL;
	}
	T *p = base;
	return *(p + idx - 1);
}

template <class T> void Array<T>::pringArray() {
	T *start = base;
	T *end = base + length - 1;
	while (start<=end)
	{
		cout << *(start++) << " ";
	}
	cout << endl;
}