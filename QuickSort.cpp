#include <iostream>

using namespace std;

int Partition(int *A,int start,int end)
{
	int pivot = A[end];
	int pIndex = start;
	
	for(int i = start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			swap(A[i],A[pIndex]);
			pIndex++;
		}
	}

	swap(A[pIndex],A[end]);
	return pIndex;
		
}

void QuickSort(int *A,int start,int end)
{
        if(start < end)
        {
                int pIndex = Partition(A,start,end);
                QuickSort(A,start,pIndex-1);
                QuickSort(A,pIndex+1,end);
        }
}


int main()
{
  int n,i;
  cout<<"\nEnter the number of elements in the array that you want to sort: ";
  cin>>n;
  int A[n];
  cout<<"\nEnter all "<<n<<" numbers : ";
  for(i=0;i<n;i++)
    cin>>A[i];

  QuickSort(A,0,n-1);

  cout<<"\n\nAfter sorting using quick sort we get : \n";
  for(i=0;i<n;i++)
    cout<<A[i]<<"\t";

    cout<<"\n";
    return 0;
}
