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
	UINT iMask=0x00FFFF00;
	UINT iTemp=iNo & iMask;
	
	UINT Byte1= iNo<<24;
	UINT Byte4 = iNo>>24;
	
	UINT iResult=iTemp | Byte1 | Byte4;

     return iResult;	
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