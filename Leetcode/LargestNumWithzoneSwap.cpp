// brute force approach
// given a positive integer need to return the largest number with one swap

class solution
{
      int maxNumWithOneSwap(int num)
      {
            string num_str = to_string(num);
            string temp = num_str;

            for (int i = 0; i < num_str.size(); i++)
            {
                  for (int j = 0; j < num_str.size(); j++)
                  {
                        swap(num_str[i], num_str[j]);
                        if (stoi(num_str) > stoi(temp))
                              temp = num_str;

                        swap(num_str[i], num_str[j]);
                  }
            }
            return stoi(temp);
      }
}