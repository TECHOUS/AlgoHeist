import java.util.*;
public class ascShellSort
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n; //size of the array
        System.out.println("Enter the size of the array");
        n = in.nextInt();
        int[] intArray = new int[n];
        for(int i=0;i<n;i++)
        {
            intArray[i] = in.nextInt();
        }
        shellsort(intArray);
        //printing array
        System.out.println("The sorted array: ");
        for(int i=0;i<intArray.length;i++)
        {
            System.out.print(intArray[i]+" ");
        }
        System.out.println();
        in.close();
    }

    public static void shellsort(int[] array)
    {
        for(int gap=array.length/2;gap>0;gap/=2) //using different gap values
        {
            for(int i=gap;i<array.length;i++)
            {
                int raw = array[i];
                int j=i;
                while(j>=gap && array[j-gap]>raw)
                {
                    //shifting
                    array[j] = array[j-gap];
                    j=j-gap;
                }
                array[j] = raw;
            }
        }
    }
}