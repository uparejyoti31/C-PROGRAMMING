#include<iostream>
using namespace std;

typedef unsigned int UINT;

/*
op1  op2  &  |   ^
1     0     0   1   1
0     1     0   1   1
1     1     1   1   0
0     0     0   0   0
*/

//iStart =5;
//iEnd=16;

//0000 0000 0000 0000 0000 0000 0000 0000
//0000 0000 0000 0000 1111 1111 1111 0000


UINT DisplayByte(UINT iNo)
{
	UINT Byte1 = iNo & 0x000000FF;
	UINT Byte2 = iNo & 0x0000FF00;
	Byte2=Byte2 >> 8;
	
	UINT Byte3= iNo & 0x00FF0000;
	Byte3=Byte3>>16;
	UINT Byte4 = ino & 0xFF000000;
	Byte4=Byte4>>24;
	
	cout<<"Byte1="<<Byte1<<"\n";
	cout<<"Byte2="<<Byte2<<"\n";
	cout<<"Byte3="<<Byte3<<"\n";
	cout<<"Byte4="<<Byte4<<"\n";
}

int main()
{
	UINT iValue=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
			
	DisplayByte(iValue);
 	return 0;
}