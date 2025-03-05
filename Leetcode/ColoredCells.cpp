class solution
{
public:
      long long coloredCells(int n)
      {
            int totalCells = 1;
            int adds = 4;
            while (--n)
            {
                  totalCells += adds;
                  adds += 4;
            }
            return totalCells;
      }
}