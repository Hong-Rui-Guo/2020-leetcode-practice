class Solution {
public:
    int findKthLargest(vector<int>& array, int k) {
        int start = 0;
        int end = array.size() - 1;
    
        while (true) {
            if (start == end) {
                return array[start];
            }
    
            int pivot = array[start];
    
            int l = start + 1;
            int r = end;
    
            while (true) {
                while (r > start && array[r] >= pivot) {
                    //printf("1\n");
                    --r;
                }
    
                while (l <= r && array[l] <= pivot) {
                    //printf("2\n");
                    ++l;
                }
    
                if (l < r) {
                    int temp = array[l];
                    array[l] = array[r];
                    array[r] = temp;
                } else {
                    if (r > start) {
                        int temp = array[start];
                        array[start] = array[r];
                        array[r] = temp;
                    }
    
                    break;
                }
            }
    
            printf("r:%d\n",r);

            /*
                note1: kth largest is rth smallest
                note2: k + r = array.size() 
            */
            if (k == array.size() - r) { 
                return array[r];
            } else if (k < array.size() - r) {
                //printf("r:%d\n",r);
                start = r + 1;
            } else {
                end = r - 1;
            }
        }        
    }
};