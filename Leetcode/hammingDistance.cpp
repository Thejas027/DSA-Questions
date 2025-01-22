// given two numbers in decimal need to return the hamming distance between those two numbers

class solution
{
public:
      int hammingDistance(int x, int y)
      {
            int xorRes = x ^ y;
            int hd;

            while (xorRes > 0)
            {
                  hd += xorRes + 1;
                  xorRes >>= 1;
            }
            return hd;
      }
}