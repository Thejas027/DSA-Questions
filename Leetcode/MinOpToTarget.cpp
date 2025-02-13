// feb 13th
class solution
{
public:
      int minOperations(vector<int> &nums, int target)
      {
            vector<long, vector<long>, greater<long>> min_heap(nums.begin(), nums.end());
            int numOperations = 0;
            while (min_heap.top < k)
            {
                  int a = min_heap.top();
                  min_heap.pop();
                  int b = min_heap.top();
                  min_heap.pop();
                  min_heap.push(min(a, b) * 2 + max(a, b));
                  numOperations++;
            }
            return numOperations;   
      }
}