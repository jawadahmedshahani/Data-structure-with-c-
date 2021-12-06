#include<iostream>
#include "Node.h"
using namespace std;
template<class T>
class LinkedList
{
	private:
		Node<T> *head;
		Node<T> *tail;	
	
	public:
		LinkedList()
		{
			head=0;
			tail=0;
		}
		
		void addToHead(T item);
		void traversing();
		void addToTail(T item);
		Node<T>* searching(T item);
		void addAfter(T existingItem, T newItem);
		void addBefore(T existingItem, T newItem);//your task
		T removeFromHead();
		Node<T> *largest();
		T removeFromTail();
				/*
		
		
		int removeFromTail();
		void remove(int item);//it removes specific item
		void removeAll();
		bool isEmpty();*/	
};
template<class T>
void LinkedList<T>::traversing()
{
	Node<T> *ptr=head;
	while(ptr!=0)
	{
		cout<<ptr->getInfo()<<" ";
		ptr=ptr->getNext();
	}
}//traversing
template<class T>
Node<T> *LinkedList<T>:: largest()
{
	if(head==0)
	cout<<"nothing to find"<<endl;
	else if(head==tail)
	return head;
	else{
		Node<T> *loc=head;
		Node<T> *ptr=head->getNext();
		while(ptr!=0)
		{
			if(loc->getInfo()<ptr->getInfo())
			{
				loc =ptr;
			 int locinfo=loc->getInfo();
			}
			ptr=ptr->getNext();
			
		}
		delete loc;
	    addToHead(locinfo;)
	    
			
	}
}

template<class T>
void LinkedList<T>::addToHead(T item)
{
	Node<T> *ptr=new Node<T>(item);
	//ptr->setInfo(item);
	if(head==0 && tail==0)//list is empty
	{
		head=ptr;
		tail=ptr;
		//head=tail=ptr;
	}
	else//non-empty
	{
		ptr->setNext(head);
		head=ptr;
	}	
}//addToHead

template<class T>
void LinkedList<T>::addToTail(T item)
{
	Node<T> *ptr=new Node<T>(item);//info=item & next=0
	if(head==0)//empty (head & tail)
	{
		head=tail=ptr;
	}
	else //one element or more than one element
	{
		tail->setNext(ptr);
		tail=ptr;
	}
	
}//add to Tail
template<class T>
Node<T>* LinkedList<T>::searching(T item)
{
	if(head==0)//list empty
	{
		cerr<<"There is nothing to search \n";
	}
	else
	{
		Node<T> *ptr=head;
		Node<T> *loc=0;
		while(ptr!=0)
		{
			if(item==ptr->getInfo())
			{
				loc=ptr;
				return loc;//loc contains the address of specific node where the value exist
			}
			ptr=ptr->getNext();
		}
		return loc;//loc contains o which indicates value not found
	}
	
}//searching
template<class T>
void LinkedList<T>::addAfter(T existingItem, T newItem)
{
	if(head==0)//empty
	{
		cerr<<"List is emtpy therefore, existingItem cannot exist \n";
	}
	else if(tail->getInfo()==existingItem)//only tail can modify if existingItem found at tail node
	{
		Node<T> *ptr=new Node<T>(newItem);
		tail->setNext(ptr);
		tail=ptr;
		
		//addToTail(newItem);
	}
	else// head & tail (no). !head &!tail (yes) when existing is anywhere 
	{
		Node<T> *loc=searching(existingItem);
		if(loc==0)//existing does not exist
		{
			cerr<<"Existing not found therefore,new element cannot be added"<<endl;
		}
		else//existing found and loc contains address of that node
		{
			Node<T> *ptr=new Node<T>(newItem);
			ptr->setNext(loc->getNext());
			loc->setNext(ptr);
		}
	}
}//add after
template<class T>
void LinkedList<T>:: addBefore(T existingItem, T newItem)
{     
	if(head==0)//empty
	{
		cerr<<"List is emtpy therefore, existingItem cannot exist \n";
	}
	else if(head->getInfo()==existingItem)//only tail can modify if existingItem found at tail node
	{
		Node<T> *ptr=new Node<T>(newItem);
        ptr->setNext(head);
		head=ptr;
		
		//addTohead(newItem);
	}
	else// head & tail (no). !head &!tail (yes) when existing is anywhere 
	{
	  Node<T> *temp=head;
	  while(temp!=0)
	  {
	  	if(temp->getNext()->getInfo()==existingItem)
	  	{
	  		Node<T> *ptr=new Node<T>(newItem);
	  		ptr->setNext(temp->getNext());
	  		temp->setNext(ptr);
	  		break;
		 }
		 else 
		 cout<<"existing not found"<<endl;
		 temp=temp->getNext();
	  }
	}
}//add before

template<class T>
T LinkedList<T>::removeFromHead()
{
	if(head==0)//empty
	{
		cerr<<"There is nothing to delete"<<endl;
	}
	else if(head==tail)//there is only one element
	{
		/*T headInfo=head->getInfo();
		delete head;
		head=tail=0;//bcz there was only one element and after delete list will become empty
		return headInfo;*/
		Node<T> *temp=head;
		head=tail=0;
		T tempInfo=temp->getInfo();
		delete temp;
		return tempInfo;
		
	}
	else//more than one element
	{ /*Node<T> *temp=head->getNext();
		delete head;
		head=temp;*/
		Node<T> *temp=head;
		head=temp->getNext();
		T tempInfo=temp->getInfo();
		delete temp;
		return tempInfo;
		
	}
}//removeFromHead

template<class T>
T LinkedList<T>::removeFromTail()
{
	if(head==0)//empty
	{
		cerr<<"There is nothing to delete"<<endl;
	}
	else if(head==tail)//there is only one element
	{
		/*T headInfo=head->getInfo();
		delete tail;
		head=tail=0;//bcz there was only one element and after delete list will become empty
		return headInfo;*/
		Node<T> *temp=head;
		head=tail=0;
		T tempInfo=temp->getInfo();
		delete temp;
		return tempInfo;
		
	}
	else
	{
		Node<T> *temp=head;
		while(temp->getNext()!=tail)
		{
			temp=temp->getNext();
		}
		
		/*Node *ptr=tail;
		temp->setNext(0);
		tail=temp;
		T tailInto=ptr->getInfo();
		delete ptr;
		return tailInfo;*/
		
		/*T tailInfo=tail->getInfo();
		delete tail;
		temp->setNext(0);
		tail=temp;
		return tailInfo;*/
		
		T tailInfo=tail->getInfo();
		tail=temp;
		delete temp->getNext();
		temp->setNext(0);
		return tailInfo;
		
	}
}

