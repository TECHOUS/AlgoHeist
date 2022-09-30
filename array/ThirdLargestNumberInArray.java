package array1;
import java.util.*;

public class ThirdLargestNumberInArray {
	
	public static void ThirdLargestNumber(int a[]) {
		
		int n=a.length;
		if(n<3)
			System.out.println("invalid array");
		int max1=a[0],max2=a[0],max3=a[0];
		for(int i=0;i<n;i++) {
			if(a[i] > max1)
				max1=a[i];
		}
		System.out.println("Maximum first number is "+max1);
		
		for(int i=0;i<n;i++) {
			if(a[i] > max2 && a[i]<max1)
				max2=a[i];
		}
		System.out.println("Maximum second number is "+max2);
		
		for(int i=0;i<n;i++) {
			if(a[i] > max3 && a[i]<max2 && a[i]<max1)
				max3=a[i];
		}
		System.out.println("Maximum third number is "+max3);
		
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= new int[] {3,4,5,8,2,44,11,22};
		
		ThirdLargestNumber(arr);

	}

}
