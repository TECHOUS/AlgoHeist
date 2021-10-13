class BinarySearch{

  public int search(int[] nums, int target) {
      return subSearch(nums, 0, nums.length-1, target);
  }

  private int subSearch(int[] nums, int startIndex, int endIndex, int target) {
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
  
}
