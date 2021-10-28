#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

class MarvellousFile
{
	public:
	char Fname[30];
	int fd;
	
	MarvellousFile(char*Name)
	{
		cout<<"Inside constructor\n";
		strcpy(Fname,Name);
		fd=open(Fname,O_RDWR);
	}
	~MarvellousFile()
	{
		cout<<"Inside destructor\n";
		close(fd);
	}
	
	void Display()
	{
		int iRet=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		cout<<"Data from file is:\n";
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			write(1,Buffer,iRet);
		}
		cout<<"\n";
	}
	
	int CountCapital()
	{
		int iRet=0,iCnt=0,i=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='A')&&(Buffer[i]<='Z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	int CountSmall()
	{
		int iRet=0,iCnt=0,i=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='a')&&(Buffer[i]<='z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	int CountDigit()
	{
		int iRet=0,iCnt=0,i=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='0')&&(Buffer[i]<='9'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	int CountVowel()
	{
		int iRet=0,iCnt=0,i=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]=='a')||(Buffer[i]=='e')||(Buffer[i]=='i')||(Buffer[i]=='o')||(Buffer[i]=='u'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	int FileSize()
	{
		int fd=0,iRet=0;
		fd=open(Fname,O_RDWR);
	
	     if(fd == -1)
      {
        printf("Unable to open the file\n");
        return -1;
      }
    
       iRet = lseek(fd,0,2);
    		return iRet;
	}
	
	int CountSpaces()
	{
		int iRet=0,i=0,fd=0,iCnt=0;
		char Buffer[10];
		fd=open(Fname,O_RDWR);
		
	  if(fd == -1)
      {
        printf("Unable to open the file\n");
        return -1;
      }
		
		while((iRet = read(fd,Buffer,10)) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCnt++;
            }
        }
    }
	return iCnt;

	}
		
};

int main()
{
	char Name[30];
	int iRet=0;
	
	cout<<"Enter name of file\n";
	cin>>Name;
	
	MarvellousFile obj(Name);
	
	obj.Display();
	
	iRet=obj.CountCapital();
	cout<<"Capital letters are:"<<iRet<<"\n";
	
	iRet=obj.CountSmall();
	cout<<"Small letters are:"<<iRet<<"\n";
	
	iRet=obj.CountDigit();
	cout<<"Digits are:"<<iRet<<"\n";
	
	iRet=obj.FileSize();
	cout<<"Size of file is:"<<iRet<<"\n";
	
	iRet=obj.CountVowel();
	cout<<"Count of Vowel are:"<<iRet<<"\n";
	
	iRet=obj.CountSpaces();
	cout<<"Count of Spaces are:"<<iRet<<"\n";
	
	return 0;
}
