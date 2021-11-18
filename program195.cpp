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


UINT ToggleOnRange(UINT iNo,int iStart,int iEnd)
{
	UINT iResult=0;
	UINT iMask1=0xFFFFFFFF;
	UINT iMask2=0xFFFFFFFF;
	UINT iMask=0;
	
	iMask1=iMask1<< (iStart-1);
	
	iMask2 = iMask2 >> (32-iEnd);
	
	iMask=iMask1 & iMask2;
	
	iResult=iNo | iMask;
	return iResult;
}

int main()
{
	UINT iValue=0, iRet=0,i=0,j=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Enter starting position\n";
	cin>>i;
	
	cout<<"Enter ending position\n";
	cin>>j;
		
	iRet=ToggleOnRange(iValue,i,j);
 
    cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}