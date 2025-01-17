class solution
{
public:
      bool doesValidArrayExist(vector<int> &derived)
      {
            vector<int> &original = {0};
            for (int i = 0; i < derived.size(); i++)
                  original.push_back((original[i] ^ derived[i]));

            bool checkZero = (original[0] == original[original.size() - 1]);
            original = {1};

            for (int i = 0; i < derived.size(); i++)
                  original.push_back(derived[i] ^ original[i]);

            bool checkOne = (original[0] == original[original.size() - 1]);

            return checkOne | checkZero;
      }
}