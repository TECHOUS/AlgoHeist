package array1;

import java.util.Arrays;
import java.util.Collections;

public class ReverseArray {
	
//using temp array
	public static void ReverseTheArray(int a[]) {
		int n = a.length;
		int j=n;
		int temp[]=new int[n];
		System.out.println("before reverse the array is ");
		for(int i=0;i<n;i++) {
			System.out.print(a[i] +" ");
			
			temp[j-1]=a[i];
			j=j-1;
		}
		System.out.println();
		System.out.println("After reverse the array is ");
		for(int k=0;k<n;k++) {
			System.out.print(temp[k]+" ");
		}
	}
//		by Swapping method
		
		public static void ReverseTheArray2(int a[]) {
			int n = a.length;
			int temp;
//			System.out.println("before reverse the array is ");
			for(int i=0;i<n/2;i++) {
//				System.out.print(a[i] +" ");
				temp=a[i];
				a[i]=a[n-i-1];
				a[n-i-1]=temp;
			}
			System.out.println();
			System.out.println("After reverse the array is ");
			for(int k=0;k<n;k++) {
				System.out.print(a[k]+" ");
			}
		}
//			by using Collections.reverse method
			public static void ReverseTheArray3(Integer a[]) {
				Collections.reverse(Arrays.asList(a));
				System.out.println(Arrays.asList(a));
			}
			
		
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {2,4,6,8,10};
		ReverseTheArray(arr);
		ReverseTheArray2(arr);
		Integer arr1[]= {2,4,6,8,10};
		ReverseTheArray3(arr1);

	}

}
