#pragma once
template <class T>//��ģ����ϸ���� https://www.cnblogs.com/msymm/p/9750787.html
class Array
{
private:
	T *base;//�����׵�ַ
	int length;//����Ԫ�ظ���	
	int size;//�����ܴ�С

public:
	Array();
	~Array();
};

//�ο� https://www.cnblogs.com/jiy-for-you/p/6892358.html