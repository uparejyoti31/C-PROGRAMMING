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


UINT SwapByte(UINT iNo)
{	
	     return (iNo & 0x00FFFF00) | (iNo<<24) | (iNo>>24);	
}

int main()
{
	UINT iValue=0,iRet=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
			
	iRet=SwapByte(iValue);
	cout<<"Data is:"<<iRet<<"\n";
 	return 0;
}