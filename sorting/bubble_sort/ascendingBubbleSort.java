/**
 *  BUBBLE SORT
 *  --ASCENDING
 *  --STABLE SORT
 **/
import java.util.*;
public class ascendingBubbleSort
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); //Scanner for input
        int n; //size of the array
        System.out.println("Enter the size of the array");
        n = input.nextInt();
        int[] arr = new int[n]; //declared array
        for(int i=0;i<n;i++) //inputing array
        {
            arr[i] = input.nextInt();
        }
        input.close();
        bubblesort(arr); //BUBBLE SORT
        System.out.println("After sorting:"); //output array
        for(int k=0;k<arr.length;k++)
        {
            System.out.print(arr[k]+" ");
        }
    }

    public static void bubblesort(int[] array)
    {
        int i,j;
        for(i=array.length-1;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(array[j] > array[j+1])
                {
                    //swapp
                    swap(array,j,j+1);
                }
            }
        }
    }
    public static void swap(int[] ary,int a,int b)
    {
        int temp = ary[a];
        ary[a] = ary[b];
        ary[b] = temp;
    }
}