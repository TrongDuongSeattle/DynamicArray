#include <iostream>
//double amount of memory left
//ie quarter it
template <class T>
class DynamicArray
{
public:
    DynamicArray(int size) : m_data(new T[size])//member initializer
    {
        m_size = size;
        m_firstEmptyElement = 0;
    }
    ~DynamicArray()
    {
        delete[] m_data;
    }

    void add(T data)
    {
        // if array too small, make it bigger! then add elements.
        if (m_firstEmptyElement >= m_size) {
            increaseArraySize();
        }

        m_data[m_firstEmptyElement] = data;
        m_firstEmptyElement++;
    }

    void removeByElement(int index)
    {
        m_data[index] = 0;

    }

    T getByElement(int index)
    {
        try
        {
            if (index < m_size)
            {
                return m_data[index];
            }
            else
            {
                throw index;
            }
        }
        catch (int index)
        {
            std::cout << "Index " << index << " is out of bounds." << std::endl;
        }

    }
    /**
     * Should scale with size.
     */
    void increaseArraySize()
    {
        m_size *= 2;
        T* temp = new T[m_size];
        for (int i = 0; i < m_size; i++) {
            temp[i] = m_data[i];
        }
        m_data = temp;
    }

    void decreaseArraySize()
    {

    }

private:
    T* m_data; //pointer to array
    int m_size;
    int m_firstEmptyElement;
};