class Solution {
public:
    int mySqrt(int x) {
    	int l = 0, r = x, mid;
    	if (x <= 3) return x>0 ? 1 : 0;
    	while (l <= r){
    		mid = (l + r) / 2;
    		if (x / mid >=mid && x/(mid+1)<(mid+1))
    			return mid;
    		else if (x / mid > mid)
    			l = mid + 1;
    		else r = mid - 1;
    	}
    	return l;
    }
};