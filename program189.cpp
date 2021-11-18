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

//Input :  write program which accept one number from user and count number of ON(1) bits in it without using % and /
//Number: 11   (1011)
//output:  iRet   3 

int CountBit(int iNo)
{
	int iResult=0,i=0,iCnt=0;
	int iMask=0x00000001;
	for(i=1;i<32;i++)
	{
		iResult=iNo&iMask;
		if(iResult!=0)      //(iResult==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	
	iRet=CountBit(iValue);
 
    cout<<"Number of bits which are ON:"<<iRet<<"\n";
	return 0;
}