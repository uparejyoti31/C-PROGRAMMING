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


UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
	return(iNo^((0XFFFFFFFF<<(iStart-1))&(0XFFFFFFFF>>(32-iEnd))));
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
		
	iRet=ToggleRange(iValue,i,j);
 
    cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}