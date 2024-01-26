class MyCalendar {
    List<Integer> arr = new ArrayList<>();
    Map<Integer,Integer> m1 = new HashMap<>();
    
    public MyCalendar() {
        
    }
    
    public boolean book(int start, int end) {
        // if(start==null||end==null)return null;
        
        for(int i=0;i<arr.size();i++){
            if((start>=arr.get(i) && start<m1.get(arr.get(i)))||(end>arr.get(i) && end<=m1.get(arr.get(i))) || (start<=arr.get(i)&& end>=m1.get(arr.get(i))))              {
                System.out.println("start ="+start+", end ="+end);
                System.out.println("arr[i] ="+arr.get(i)+", end of arr i ="+m1.get(arr.get(i)));
                return false;
             }
        }
        arr.add(start);
        m1.put(start,end);
        return true;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */