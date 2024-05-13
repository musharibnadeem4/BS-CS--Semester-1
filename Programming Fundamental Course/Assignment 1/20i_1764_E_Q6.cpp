//Musharib
//i201764
//Assignment 6
#include<iostream>
using namespace std;

void ArrayInitialization(int arr[], int);
int Count(int arr[], int size);
void Partition(int arr[], int size);
int next_XOR(int arr[], int size);
void Duplicates(int arr[], int size);
void Circular(int arr[], int size);
int Search(int arr[], int size, int x);
void shift_Circular(int arr[], int size);

int main()
{
	int size;
	cout<<"Enter the size: ";
	cin>>size;
	int arr[size]{0};
	/*Getting user input for choosing the option*/
	ArrayInitialization(arr,size);
	int input;
	cout<<"Please select an operation: \n 1.Count \n 2.Partition \n 3.Next_XOR \n 4.Duplicates \n 5.Circular \n 6. Search \n 7. Shift Circular\n";
	cout<<"Your choice: ";
	cin>>input;
	
	/*Using switch statements for the menu*/
	switch(input)
	{
		case 1:
			cout<<"Your selected number occurences: "<<Count(arr,size)<<".";
			break;
		case 2:
			Partition(arr,size);
			break;
		case 3:
			cout<<"Number of elements which are equal to the XOR of the next two: "<<next_XOR(arr,size);
			break;
		case 4:
			Duplicates(arr,size);
			break;
		case 5:
			Circular(arr,size);
			break;
		case 6:
			int x;
			cout<<"What do you want to find: ";
			cin>>x;
			cout<<"Found at index: "<<Search(arr,size,x)<<endl;
			break;
		case 7:
			shift_Circular(arr,size);
			break;
		default:
			cout<<"Invalid Input, please enter from only the options above.";
			return 0;
	}
	
	
}

void ArrayInitialization(int arr[],int size)
{
	int input;
	for(int i = 0; i < size; i++)
	{
		cout<<"Enter element "<<i+1<<" for the array: ";
		cin>>input;
		arr[i] = input;
	}
}

int Count(int arr[], int size)
{	
	int x;
	cout<<"Enter a number to count how many times it occurs in the array: ";
	cin>>x;
	
	int count = 0;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == x)
			count++;
	}
	return count;
}
/*Function to place number at righ place after and before*/
void Partition(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(arr[j+1] < arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			
		}
	}
	
	cout<<"Partition Array: ";
	for(int i = 0; i < size; i++)
		cout<<arr[i]<<" ";
}
/*Function to find elements xor of next two elements*/
int next_XOR(int arr[], int size)
{
	int count = 0;
	for(int i = 0; i < size - 2; i++)
	{
		if(arr[i] == (arr[i + 1] ^ arr[i + 2]))
			count++;
	}
	return count;
	
}
/*Function for calculating the frequency of paticular number*/
void Duplicates(int arr[], int size)
{
	int freq[size];
	for(int i = 0; i < size; i++)
	{
		freq[i] = 0;
		for(int j = 0; j < size; j++)
		{
			if(arr[i] == arr[j])
				freq[i]++;
		}
	}
	
	for(int i = 0; i < size; i++)
	{
		cout<<"Number: "<<arr[i]<<" Frequency: "<<freq[i]<<endl;
	}
}

void Circular(int arr[], int size)
{
	int prevfirst = arr[0];
	int prevsecond = arr[1];
	for(int i = 0; i < size; i++)
	{
		if(i+2 == size)
			arr[i] = arr[i+1] + prevfirst;
		else if(i+1 == size)
			arr[i] = prevfirst + prevsecond;
		else
			arr[i] = arr[i+1] + arr[i+2];
			
		cout<<arr[i]; 
	}
		
}
/*Function to search for particular number in an array*/
int Search(int arr[], int size, int x)
{
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == x)
		{
			return i;
		}
			
	}
}
/*Function for Shifting the 2 positions to left */
void shift_Circular(int arr[], int size)
{
	
int i,j;
	for(i = 0; i<=1; i++)
	{
		int prevfirst = arr[0];
		for(j=0; j<size-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[j]=prevfirst;
	}
	
for(int x=0; x<size; x++)
{
	cout << arr[x] << "," ;
}
}
