#include<fstream>
#include<iostream>
#include<conio.h>
#include<sstream>
using namespace std;
int main()
{
	int y=0,x=0,z;
	string arr[100][2];
    string word,ch;
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
				if(word==arr[i][0])
				{
					y=1;
					stringstream s1,s2;
					s1<<arr[i][1];
					s1>>z;
					int w=z+1;
					s2<<w;
					s2>>ch;
					arr[i][1]=ch;
					break;
				}
			}
			if(y==0)
			{
			arr[x][0]=word;
			arr[x][1]="1";
			x++;
			}
			else
			y=0;
		}
	}
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	
}
