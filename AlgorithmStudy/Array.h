#ifndef Array_hpp
#define Array_hpp

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

	//��ʼ���ڴ棬�����ڴ�
	bool init();
	//����ڴ��Ƿ��ã�����������
	bool ensureCapcity();
	//���Ԫ�ص��������
	bool add(T item);
	//����Ԫ�ص��������λ�ã�λ�ô�1��ʼ
	bool insert(T item, int idx);

	//ɾ��ָ��λ��Ԫ�ز����أ�λ�ô�1��ʼ
	T deleteItem(int idx);

	//����ָ��λ��Ԫ�� ��1��ʼ����
	T getItemByIndex(int idx);
	//��ӡ��������Ԫ��
	void pringArray();

};

//�ο� https://www.cnblogs.com/jiy-for-you/p/6892358.html

#endif // !Array_hpp