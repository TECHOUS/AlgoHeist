//descending
//using min element
import java.util.*;

public class selectionsort
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in); //scanner for input
        int n; //size of the array
        System.out.println("Enter the size of the array");
        n = in.nextInt();
        int[] arr = new int[n]; //declared array
        System.out.println("Enter the elements");
        for(int i=0;i<n;i++) //input array
        {
            arr[i] = in.nextInt(); 
        }
        selection(arr);
        in.close(); 
        for(int k=0;k<arr.length;k++)
        {
            System.out.print(arr[k]+" ");
        }
        System.out.println();
    }
    public static void selection(int[] array)
    {
        int i,j;
        int min=0; //minimum index
        for(i=array.length-1;i>0;i--)
        {
            min=0; //set minimum index to 0
            for(j=0;j<=i;j++) //finding min index in the elements
            {
                if(array[min] > array[j])
                {
                    min = j;
                }
            }
            swap(array,min,i);
        }
    }
    public static void swap(int[] arr,int a,int b)
    {
        //swapping
        int t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
    }
}