class Solution {
public:
    int maxArea(vector<int>& heights) {
    int maxwater=0;
    int lp=0,w,h;
    int rp=heights.size()-1;
    while(lp<rp)
    {
        w=rp-lp;
        if(heights[lp]<heights[rp])
        {
        h=heights[lp];
        }
        else
        {
            h=heights[rp];
        }
        int currwater=w*h;
        if(currwater>maxwater)
        {
            maxwater=currwater;
        }
        heights[lp]<heights[rp]?lp++:rp--;
}
    return maxwater;
    }
};
