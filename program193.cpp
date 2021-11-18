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

//Input :  write program which accept one number and toggle 1st 4 and last 4 bit /
//Number: 11   (1011)
//position  1st last
//output:  iRet   2 

UINT ToggleNibble(UINT iNo)
{
	UINT iResult=0;
	
	UINT iMask=0xF000000F;
	
	iResult=iNo ^ iMask;
	return iResult;
	
}

int main()
{
	UINT iValue=0, iRet=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
		
	iRet=ToggleNibble(iValue);
 
    cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}