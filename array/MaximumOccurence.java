// In 2D square matrix, print the element with maximum occurence along with number,if all are 
//unique then print "unique"

package array1;

public class MaximumOccurence {
	public static void MaximumOccurenceNumber(int a[][], int n) 
	{
	  int maxElement=0, count;
	   int maxCount = 0;
	   for(int i = 0; i< n; i++)  {
	      for(int j = 0; j < n; j++) {
	    	  count=0;
	      
	    	  for(int k=i+1;k<n;k++) {
	          if(a[i][j] == a[i][k])
	          {
	              count++;
	              if(count > maxCount)
	              {
	                  maxElement = a[i][j];   
	              }
	          }
	      }
	      
	  }
	      System.out.println(maxElement);
				}
				   }

	public static void main(String[] args) {
		int matrix[][]= {
				{20,50,30},
				{10,30,20},
				{30,5,30} };
		
		int n=matrix.length;
		MaximumOccurenceNumber(matrix,n);

	}
}