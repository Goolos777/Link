#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

class Link
{
	int number;
	Link *link;
public:
	Link();
	~Link();
	

	unsigned int GetNumber(){ return number; };// ���������� ����� �������
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

	bool operator==(Link &l)const;
	Link& operator[](unsigned int index)const;
	friend std::ostream &operator<<(std::ostream&, Link&);
};