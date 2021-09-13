import java.util.*;
public class ascInsertionSort
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int N; //size of the array
        System.out.println("Enter the size of the array");
        N = input.nextInt();
        int[] arr = new int[N]; //declaring array
        for(int i=0;i<N;i++)
        {
            arr[i] = input.nextInt();
        }
        insertionsort(arr);
        //printing the array
        System.out.println("The sorted array: ");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        input.close();
    }

    public static void insertionsort(int[] array)
    {
        for(int i=1;i<array.length;i++)
        {
            int raw = array[i];
            int j;
            for(j=i;j>0 && array[j-1] > raw;j--)
            {
                array[j] = array[j-1]; //shifting
            }
            array[j] = raw;
        }
    }
}