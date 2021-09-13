//ascending
//using max element
import java.util.*;

public class ascSelectionSort
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
        selectionsort(arr);
        in.close(); 
        for(int k=0;k<arr.length;k++)
        {
            System.out.print(arr[k]+" ");
        }
        System.out.println();
    }
    public static void selectionsort(int[] array)
    {
        int i,j;
        int max=0; //maximum index
        for(i=array.length-1;i>0;i--)
        {
            max=0;
            for(j=0;j<=i;j++) //finding max index in the elements
            {
                if(array[max] < array[j])
                {
                    max = j;
                }
            }
            swap(array,max,i);
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