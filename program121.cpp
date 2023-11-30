#include<iostream>
using namespace std;

class Array
{
    private:
         int * Arr;
         int iSize;

    public:
         Array(int X)   // parametrised constructor
         {
            iSize = X;
            Arr = new int[iSize];
         }   
         ~Array()       // destructor
         {
            delete []Arr;
         }  
         void Accept()    // member function
         {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
         }
         void Display()
         {
            cout<<"Element of the array are : "<<endl;
            int iCnt = 0;
             for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
         }
};

int main()
{
   int iLength = 0;

   cout<<"Enter the number of element that u want to store : "<<endl;
   cin>>iLength;

   Array aobj(iLength);

   aobj.Accept();
   aobj.Display();

    return 0;
}