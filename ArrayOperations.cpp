#include<iostream>
using namespace std;
int arr[100],ele,index,size,ch,count,temp,temp1;
void insertion();
void deletion();
void display();
int main()
{
   int ch;
   cout<<"Enter size of element:";
   cin>>size;
   cout<<"Enter array elements:"<<endl;
   for(int i=0; i<size; i++)
   {
      cin>>arr[i];
   }
   cout<<"Entered array is: ";
   for(int i=0; i<size; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   do
   {
     cout<<"1. For Insertion"<<endl;
     cout<<"2. For Deletion"<<endl;
     cout<<"3. For Display"<<endl;
     cout<<"3. Exit"<<endl;
     cout<<"Enter your choice: ";
     cin>>ch;
      switch(ch)
      {
         case 1:
            insertion();
         break;
         case 2:
            deletion();
         break;
         case 3:
            display();
         break;
         case 4:
            cout<<"Exit"<<endl;
         break;
         default:
            cout<<"Invalid choice!....."<<endl;
         break;
      }
   } 
   while (ch!=4);
   return 0;
}

void insertion()
{
  
   cout<<"The array you want to insert: ";
   cin>>ele;
   cout<<"In which index you want to insert: ";
   cin>>index;
   for(int i=size-1; i>=index; i--)
   {
      arr[i+1]=arr[i];
   }
   arr[index]=ele;
 size+=1;
}
void deletion()
{
 cout<<"Enter element you want to delete:"<<endl;
 cin>>ele;
 for(int i=0; i<size; i++)
 {
  if(ele==arr[i])
  {
   count++;
   temp=i;
  }
 }
 temp1=arr[temp];
 if(count>0)
 {
   for(int i=temp; i<size; i++)
   {
      arr[i]=arr[i+1];
   }
   size-=1;
 }
 else
 {
   cout<<"Element is not present in given array"<<endl;
 }
}
void display()
{
   cout<<"Array after operations:"<<endl;
   for(int i=0; i<size; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}