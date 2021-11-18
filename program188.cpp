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

//Input :  iNo    0000 0000 1110 0100 1111 0100 1011 1010    
//iPos  6
//output:  iRet   0000 0000 1110 0100 1111 0100 1001 1010 

int ToggleBit(int iNo,int iPos)
{
	int iMask=0x00000001;
	int iResult=0;
	
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	
	iMask=iMask<<(iPos-1);
	iResult=iNo^iMask;
	return iResult;
}

int main()
{
	int iValue=0,i=0,iRet=0;
	
	cout<<"Enter Number\n";
	cin>>iValue;
	
	cout<<"Enter position of bit\n";
	cin>>i;
	
	iRet=ToggleBit(iValue,i);
 
    cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}