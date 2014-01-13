#pragma once
#include "Link.h"
class MasterLink
{
	Link *first;
	Link *last;
	int length;
public:
	void addLinkFirst(Link*);
	void addLinlLast(Link*);
	void delLinkFirst(Link*);
	void delLinkLast(Link*);
	int getLength(){ return length; }

	bool findLink(const Link&);//����� ��������

	void Push(int value);//���������� �������� � �����
	void Shift(int value);//(���������� �������� � ������ 

	void Pop();// ��������  ���������
	void Unshift();// �������� ������� ��������
	bool Remove(int index);//�������� �������� �� ������� �� ���������� �������
	bool Remove(Link &);//�������� �������� �� ������� 

	void Insert(int index, int value);// ������� 
	void Clear();//������� �������
	void Reverse();

	void Shuffle();// (��������� ������������� ��������� �������)
	void Sort();//���������� �������
	void Print()const;

	const Link* GetElem(int index)const;
	void SetElem(int, Link*);

	void Sort();//������������ not work 
	bool findLink();

	
	Link& operator[](unsigned int index)const;
	friend std::ostream &operator<<(std::ostream&, MasterLink&);

	MasterLink();
	~MasterLink();
};

