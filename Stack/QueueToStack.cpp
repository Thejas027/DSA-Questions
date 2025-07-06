// using 2 queue to convert to stack
class solution
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        q2.push(x);

        // move all q1 elements to
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    int pop()
    {
        if (q1.empty())
            return -1;
        q1.pop();
    }
}

// uisng one queue
class solution
{
    queue<int> q;

public:
    void push(int x)
    {
        int size = q.size();
        q.push(x);

        for (int i = 0; i < size; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (q.empty())
            return -1;

        q.pop();
    }
}