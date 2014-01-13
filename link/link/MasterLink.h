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

	bool findLink(const Link&);//поиск элемента

	void Push(int value);//добавление элемента в конец
	void Shift(int value);//(добавление элемента в начало 

	void Pop();// удаление  последний
	void Unshift();// удаление первого элемента
	bool Remove(int index);//удаление элемента из массива по указанному индексу
	bool Remove(Link &);//удаление элемента из массива 

	void Insert(int index, int value);// вставка 
	void Clear();//очистка массива
	void Reverse();

	void Shuffle();// (случайное перемешивание элементов массива)
	void Sort();//сортировка массива
	void Print()const;

	const Link* GetElem(int index)const;
	void SetElem(int, Link*);

	void Sort();//организовать not work 
	bool findLink();

	
	Link& operator[](unsigned int index)const;
	friend std::ostream &operator<<(std::ostream&, MasterLink&);

	MasterLink();
	~MasterLink();
};

