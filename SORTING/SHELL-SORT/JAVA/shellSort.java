import java.util.*;

public class shellSort
{
    public static void main(String[] args)
    {
        //descending shell sort
        Scanner in = new Scanner(System.in);
        int n; //size of the array
        System.out.println("Enter the size of the array");
        n = in.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<n;i++)
        {
            arr[i] = in.nextInt();
        }
        shell(arr);
        System.out.println("The sorted array: ");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        in.close();
    }

    public static void shell(int[] array)
    {
        for(int gap=array.length/2;gap>0;gap/=2)
        {
            for(int i=gap;i<array.length;i++)
            {
                int raw = array[i];
                int j=i;
                while(j>=gap && array[j-gap]<raw)
                {
                    array[j] = array[j-gap];
                    j=j-gap;
                }
                array[j] = raw;
            }
        }
    }
}