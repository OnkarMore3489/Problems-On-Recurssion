#include<iostream>
using namespace std;

int SumI(int Arr[],int iSize)
{
    int iSum=0,i=0;
    for(i=0;i<iSize;i++)
    {
        iSum+=Arr[i];
    }
    return iSum;
}
int main()
{
    int iLength=0,i=0,iRet=0;
    int *p=NULL;

    cout<<"Enter Number of Elements : ";
    cin>>iLength;

    p=new int[iLength];

    cout<<"Enter the Elements : "<<"\n";
    for(int i=0;i<iLength;i++)
    {
        cin>>p[i];
    }

    iRet=SumI(p,iLength);
    cout<<"Addition is : "<<iRet;
    delete []p;
    return 0;
}