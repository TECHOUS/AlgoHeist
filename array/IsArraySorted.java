package array1;

public class IsArraySorted {
	public static boolean ArraySorted(int arr[],int n) {
		if(n==0 || n==1) 
			return true;
		for(int i=1;i<n;i++) {
			if(arr[i-1]>arr[i]) return false;
		}
		return true;
		}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int arr[]= new int[] {3,4,5,11,44,111,222};
		int n =arr.length;
		if(ArraySorted(arr,n))
			System.out.println("yes Array is sorted");
		else
			System.out.println("no");

	}

}
