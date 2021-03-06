#ifdef VECTOR_H
//default constructor
template <class T, int N>
vector<T, N>::vector(const T &a)
{
    for (int i = 0; i < N; i++)
    {
        components[i] = a;
    }
}

//constructor of standard unit vector
template <class T, int N>
vector<T, N>::vector(const T &t, int n, char *)
{
    for (int i = 0; i < N; i++)
    {
        components[i] = t;
    }
    components[n] = t;
}
//copy constructor
template <class T, int N>
vector<T, N>::vector(const vector &v)
{
    for (int i = 0; i < N; i++)
    {
        components[i] = v.components[i];
    }
}

//Assignment Operators
template <class T, int N>
const vector<T, N> &vector<T, N>::operator=(const vector<T, N> &v)
{
    if (this != &v)
    {
        for (int i = 0; i < N; i++)
        {
            components[i] = v.components[i];
        }
    }
    return *this;
}

template <class T, int N>
const vector<T, N> &vector<T, N>::operator=(const T &t)
{
    for (int i = 0; i < N; i++)
    {
        components[i] = t;
    }
    return *this;
}

//adding vector to the current vector
template <class T, int N>
const vector<T, N> &vector<T, N>::operator+=(const vector<T, N> &v)
{
    for (int i = 0; i < N; i++)
    {
        components[i] += v;
    }
}
//arthmetic operators
template <class T, int N>
const vector<T, N> operator+(const vector<T, N> &u, const vector<T, N> &v)
{
    return vector<T, N>(u) += v;
}

template <class T, int N>
const vector<T, N> operator-(const vector<T, N> &v)
{
    return vector<T, N>(v) *= -1;
}
#endif