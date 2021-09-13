import java.util.*;
public class descendingInsertionSort
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n; //size of the array
        System.out.println("Enter the size of the array: ");
        n = in.nextInt();
        int[] arr = new int[n]; //declared array
        for(int i=0;i<n;i++)
        {
            arr[i] = in.nextInt();
        }
        insertion(arr);
        System.out.println("The sorted array: ");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        in.close();
    }

    public static void insertion(int[] array)
    {
        for(int i=1;i<array.length;i++)
        {
            int raw = array[i]; //created a raw element which we insert
            int j;
            for(j=i;j>0 && array[j-1] < raw;j--)
            {
                //shifting from left to right
                array[j] = array[j-1];
            }
            array[j] = raw;
        }
    }
}