#include<iostream>
using namespace std;

//typedef unsinged int UINT;

/*
op1  op2  &  |   ^
1     0     0   1   1
0     1     0   1   1
1     1     1   1   0
0     0     0   0   0
*/

//Input :  write program which accept one number and two position from user and count number of ON(1) bits in it without using % and /
//Number: 11   (1011)
//position  1 4
//output:  iRet   2 

int ToggleBit(int iNo,int iPos1,int iPos2)
{
	int iResult=0;
	int iMask=0;
	int iMask1=0x00000001;
	int iMask2=0x00000001;
	
	iMask1=iMask1 << (iPos1-1);
	iMask2=iMask2 << (iPos2-1);

	iMask=iMask1 | iMask2;

	iResult=iNo ^ iMask;
	return iResult;
	
}

int main()
{
	int iValue=0,iRet=0,i=0,j=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Enter 1st position\n";
	cin>>i;
	
	cout<<"Enter 2nd position\n";
	cin>>j;
	
	
	iRet=ToggleBit(iValue,i,j);
 
    cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}