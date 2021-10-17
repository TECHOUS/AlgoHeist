public class BinarySearch {

	public static int search(int[] nums, int target) {
      return subSearch(nums, 0, nums.length-1, target);
  }

  private static int subSearch(int[] nums, int startIndex, int endIndex, int target) {
      int midIndex = (endIndex + startIndex) / 2;
    
      if (midIndex < startIndex || midIndex > endIndex) 
        return -1; 
    
      if (target == nums[midIndex]) {
          return midIndex;
      }

      if(target < nums[midIndex]) {
          return subSearch(nums, startIndex, midIndex-1, target);
      }

      if(target > nums[midIndex]) {
          return subSearch(nums, midIndex + 1, endIndex, target);
      }
    
      return -1;
  }

	public static void main(String[] args){
		int[] array = {3, 6, 9, 12, 15, 18};
		for (int i = 0; i < 20; i++) {
			int loc = search(array, i);
			System.out.println(i + ": " + loc);
		}
	}

}
