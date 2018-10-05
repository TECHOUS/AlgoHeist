import java.util.*;
public class linearSearch
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);    
		System.out.println("Enter the size of the array");
		int N = input.nextInt();  //size of the array
		int[] arr = new int[N];   //declared the array
		System.out.println("Enter the elements of the array");
		for(int i=0;i<N;i++)
		{
			arr[i] = input.nextInt();
		}
		System.out.println("Enter the element you want to search");
		int search = input.nextInt();		//element to search
		lsearch(arr,N,search);
		input.close();
	}
	
	//method for searching element in an array
	public static void lsearch(int[] arr,int n,int s)
	{
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(s == arr[i])
			{
				System.out.println("Element found at index: "+i);
				flag=1;
			}
		}
		if(flag==0)
		{
			System.out.println("Element not found!!!");
		}
	}
}
