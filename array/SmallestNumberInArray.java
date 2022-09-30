package array1;

public class SmallestNumberInArray {
	public static void Smallest(int a[]) {
		int min=a[0];
		int n=a.length;
		for(int i=0;i<n;i++) {
			if(a[i]<min)
				min=a[i];
//			System.out.println("Smallest number is : "+min);
		}
		System.out.println("Smallest number is : "+min);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {33,-22,-11,55,4,-43};
		Smallest(arr);

	}

}
