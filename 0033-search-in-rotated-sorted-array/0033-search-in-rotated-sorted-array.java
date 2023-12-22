class Solution {
    public int search(int[] nums, int target) {
        
         int start = 0;
        int end = nums.length - 1;
        while (start <= end){
            int mid = (start + end) / 2;
            if (nums[mid] == target)
                return mid;
        
            if (nums[start] <= nums[mid]){
                 if (target < nums[mid] && target >= nums[start]) 
                    end = mid - 1;
                 else
                    start = mid + 1;
            } 
        
            if (nums[mid] <= nums[end]){
                if (target > nums[mid] && target <= nums[end])
                    start = mid + 1;
                 else
                    end = mid - 1;
            }
        }
        return -1;
        
//         int start=0,end=nums.length-1,mid=0;
        
//         while(start<=end){
//             mid=(start+end)/2;
//             // System.out.println(start+", "+mid+", "+end);
//             if(nums[mid]==target){
//                 return mid;
//             }
//             if(nums[start]<nums[end]){
//                 if(nums[mid]<target){
//                     start = mid+1;
//                 }else{
//                     end = mid-1;
//                 }
//             }else{
//                 if((nums[start]<=target && target<=nums[mid]  && nums[mid]>=nums[end])||
//                    (nums[start]<=target && target>=nums[mid] && nums[mid]<=nums[end])||
//                   (nums[start]>=target && target<=nums[mid] && nums[mid]<=nums[end])){
//                     end = mid-1;
//                 }else{
//                     start= mid+1;
//                 }
                
//             }
            
//         }
//         return -1;
    }
}


//// 1 2 3 4 5 6 7 8 9

//// 7 8 9 1 2 3 4 5 6

// mid<target , target<end , start = mid+1  
// mid>target, target<end , start = mid+1

//// 7 8 9 10 11 12 5 6
    
    
// mid<target, 