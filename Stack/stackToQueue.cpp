// stack to queue using 2 stacks

class solution
{
    stack<int> s1, s2;

public:
    void push(int x) s1.push(x);

    int dequeue()
    {
        if (s1.empty() && s2.empty())
            return -1;

        while (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
};

// using one stack and recursion
class solution
{

    stack<int> s;
    int recursiveDequeue()
    {
        if (s.empty())
            return -1;

        int x = s.top();
        s.pop();

        if (s.empty())
            return x;

        int item = recursiveDequeue();
        s.push(x);
        return item;
    }
}