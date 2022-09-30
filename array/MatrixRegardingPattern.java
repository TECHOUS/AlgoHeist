// Given 2D matrix - Search the 1 Dimensional pattern in the 2D matrix-row wise and column-wise
// print "yes" . Pattern could be 0,0,0  or  2,4,6,9 or -1,-2,5,7 

package array1;

public class MatrixRegardingPattern {
	public static void MatrixAccordingPattern(int a[][], int n) 
	{
		int pattern = 0;
	   for(int i = 0; i<=n; i++)  {
	      for(int j = 0; j <=n; j++) {
	    	 if((a[i][j]==a[i][j+1]) || (a[i][j]==a[i+1][j]))
	    		 pattern=a[i][j];

	    	 if(a[i][j]<=a[i][j+1]) 
	    		 pattern=a[i][j];
	    	 if(a[i][j]<=a[i+1][j]) 
	    		 pattern=a[i][j];

	    	 System.out.println(pattern);
	          }
	      
	      }
	}
	  
	  
	     

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int matrix[][]= {
				{2,5,8},
				{1,3,2},
				{0,0,0}
				 };
		
		int n=matrix.length;
		MatrixAccordingPattern(matrix,n);

	}

}
