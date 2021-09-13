import java.util.Scanner;

class BinarySearch{

    /**
     * this function contains the code for iterative binary search
     * @param array
     * @param find
     * @return int
     **/
    public static int binarySearch(int array[], int find){
        int startIndex = 0, endIndex = array.length, midIndex;

        while( startIndex < endIndex ){
            midIndex = (startIndex + endIndex) / 2;
            if( array[midIndex] == find ){
                return midIndex;
            }
            else if( find < array[midIndex] ){
                endIndex = midIndex;
            }
            else{
                startIndex = midIndex+1;
            }
        }
        return -1;
    }

    public static void main(String args[]){
        int size, find, loc;
        Scanner in = new Scanner(System.in);

        System.out.print("Enter the size of array = ");
        size = in.nextInt();

        int array[] = new int[size];
        System.out.println("Enter " + size + " sorted elements in array :");
        for(int i=0; i<size; i++){
            array[i] = in.nextInt();
        }

        System.out.print("Enter value to find = ");
        find = in.nextInt();

        loc = binarySearch(array, find);

        if( loc == -1 ){
            System.out.println("value Not found in array");
        }
        else{
            System.out.println("value found at index " + loc);
        }
        in.close();
    }
}
