class MinStack
{
    stack<long long> st;
    long long min;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (st.empty())
        {
            st.push(val);
            min = val;
        }
        else
        {
            if (val < min)
            {
                st.push(2 * 1LL * val - min);
                min = val;
            }
            else
            {
                st.push(val);
            }
        }
    }

    void pop()
    {
        long long val = st.top();
        st.pop();
        if (val < min)
        {
            min = 2 * 1LL*min - val;
        }
    }

    int top()
    {
        long long val = st.top();
        if (val < min)
        {
            return min;
        }
        return val;
    }

    int getMin()
    {
        return min;
    }
};