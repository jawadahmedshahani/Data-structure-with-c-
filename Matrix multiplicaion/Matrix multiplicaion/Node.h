#include<iostream>
using namespace std;
template<class T>
class Node
{
	private:
		T info;//int info;
		Node<T> *next;	
	public:
		Node(T i=0,Node<T> *n=0):info(i),next(n)
		{
			
		}
		
		void setInfo(T item);
		T getInfo();
		void setNext(Node<T>* n);
		Node<T>* getNext();
};
template<class T>
void Node<T>::setInfo(T item)
{
	info=item;
}//setInfo

template<class T>
void Node<T>::setNext(Node<T>* n)
{
	next=n;
}//setNext

template<class T>
T Node<T>::getInfo()
{
	return info;
}//getInfo

template<class T>
Node<T>* Node<T>::getNext()
{
	return next;
}//getNext


