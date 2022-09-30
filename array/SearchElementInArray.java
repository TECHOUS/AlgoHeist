package array1;

public class SearchElementInArray {
	public static void SearchElement(int a[],int k) {
		int n=a.length;
		int res=-1;
		for(int i=0;i<n;i++) {
			if(a[i]==k) {
				res=i;
				break;
			}
		}

		if(res==-1) {
			System.out.println("Element are not found in array");
		}else {
			System.out.println("Element are found in array at  "+res);
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]=new int[] {2,22,3,5,25,13,16};
		int key=132;
		SearchElement(arr,key);
		
		}
	}


