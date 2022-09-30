// WAAP to display the greatest product of FOUR adjacent numbers in the same direction (up,
//down,left, right,diagonal) for each element in a 20*20 matrix .

package array1;
public class MaximumProductInMatrix {
	static int n=5;
	public static int MaximumProduct(int arr[][],int n) {
		int max=0;
		int ans;
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
//				for horizontal
				if((j-3) >=0) {
					ans=arr[i][j] * arr[i][j-1] * arr[i][j-2]*arr[i][j-3];
					if(max<ans)
						max=ans;
				}
				
//				for verticle
				if((i-3) >=0) {
					ans=arr[i][j] * arr[i-1][j] * arr[i-2][j]*arr[i-3][j];
					if(max<ans)
						max=ans;
				}
				
//				for diagonal down-right
				if((i-3) >=0  && (j-3) >=0) {
					ans=arr[i][j] * arr[i-1][j-1] * arr[i-2][j-2]*arr[i-3][j-3];
					if(max<ans)
						max=ans;
				}
				
//				for diagonal up-right
				if((i-3) >=0 && (j-1) <=0) {
					ans=arr[i][j] * arr[i-1][j+1] * arr[i-2][j+2]*arr[i-3][j+3];
					if(max<ans)
						max=ans;
				}
			}
		}
		return max;
	}

	public static void main(String[] args) {
		int arr[][]= {
				{1,2,8,4,5},
				{6,7,8,9,2},
				{7,3,1,0,6},
				{7,8,9,1,0},
				{9,1,4,2,3}
		};
		System.out.println(" Maximum product of 4 adjacent elements in a given matrix is : "+MaximumProduct(arr,n));

	}

}
