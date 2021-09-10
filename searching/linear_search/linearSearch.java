import java.util.*;
public class linearSearch
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);    
		System.out.println("Enter the size of the array");
		int size = input.nextInt();  							// size of the array
		int[] array = new int[size];   							// declared the array

		System.out.println("Enter the elements of the array");
		for(int i=0; i<size; i++)
		{
			array[i] = input.nextInt();
		}
		System.out.println("Enter the element you want to search");
		
		int search = input.nextInt();							// element to search
		
		LinearSearch(array, size, search);
		
		input.close();
	}
	
	/**
	 * this function contains the main logic of linear search
	 * 
	 * @param array
	 * @param size
	 * @param search
	 * 
	 * @return void
	 **/
	public static void LinearSearch(int[] array, int size, int search)
	{
		boolean flag = false;
		for(int i=0; i<size; i++){
			if(search == array[i]){
				flag = true;
			}
		}

		if(flag){
			System.out.println("Element Found");
		}else{
			System.out.println("Element not found!!!");
		}
	}
}
