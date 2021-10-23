#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int y=0,x=0;
	string arr[100];
    string word;
	ifstream obj;
	obj.open("D:\\test\\jawad.txt");
	if(!obj)
	{
		cout<<"file not found";
	}
	else
	{
		while(obj>>word)
		{
			for(int i=0;i<100;i++)
			{
				if(word==arr[i])
				{
					y=1;
					break;
				}
			}
			if(y==0)
			{
			arr[x]=word;
			x++;
			}
			else
			y=0;
		}
	}
	for(int i=0;i<100;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
}
