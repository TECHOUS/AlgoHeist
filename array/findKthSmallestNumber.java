// WAP to find Kth smallest number in an array  

package array1;

import java.util.Arrays;

public class findKthSmallestNumber {
	public static void KthSmallestNumber(int arr[], int k) {
		Arrays.sort(arr);
		int n=arr.length;
		for(int i=0;i<=n;i++) {
			k=arr[i];	
			System.out.println((i+1) +" Smallest number is : " + k);
		
	}
	}
	public static void main(String[] args) {
		int arr[] = new int[] {4,6,2,0,-1};
		int k =arr.length;
		KthSmallestNumber(arr,k);
			
		}
	}


