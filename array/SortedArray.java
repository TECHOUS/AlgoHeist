package array1;


public class SortedArray {
	
	public static void SortedArrayFromRight(int a[]) {
		int n=a.length;
		int max=a[n-1];
		a[n-1]=0;

		for(int i=n-2;i>=0;i--) {
					int temp=a[i];
					a[i]=max;
					if(max<temp) {
						max=temp;
				}
				
			}}
	public static void PrintArray(int arr[]) {
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
	}
		
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {7,5,8,9,6,8,5,7,4,6};
		SortedArrayFromRight(arr);
		System.out.println("Modified array  array is : ");
		PrintArray(arr);
	}
}
