class solution
{
public:
      int maxWater(vector<int> &heights)
      {
            int left = 0;
            int right = heights.size() - 1;
            int maxArea = INT_MIN;

            while (left < right)
            {
                  int currentArea = min(heights[left], heights[right]) * (left - right);
                  maxArea = max(maxArea, currentArea);

                  if (heights[left] < heights[right])
                        left++;
                  else
                        right--;
            }
            return maxArea;
      }
}