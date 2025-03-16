class solution
{
public:
      long long repairCars(vector<int> &ranks, int cars)
      {
            int minRank = ranks[0], maxRank = ranks[0];

            for (auto it : ranks)
            {
                  minRank = min(minRank, it);
                  maxRank = max(maxRank, it);
            }
            vector<int> freq(maxRank + 1);
            for (auto it : ranks)
            {
                  minRank = min(minRank, it);
                  freq[it]++;
            }
            long long low = 1, high = 1LL * minRank * cars * cars;
            while (low < high)
            {
                  long long mid = (low + high) / 2;
                  int carRepaired = 0;

                  for (int i = 1; i < maxRank; i++)
                        carRepaired += freq[i] * (long long)sqrt(mid / (long long)i);

                  if (carRepaired >= cars)
                        high = mid;
                  else
                        low = mid + 1;
            }
            return low;
      }
}