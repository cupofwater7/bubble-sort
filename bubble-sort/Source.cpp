#include <vector>
#include <iostream>

using namespace std;

vector<int> bubbleSort(vector<int> array);

int main()
{
    vector<int> result = bubbleSort({ 8, 5, 2, 9, 5, 6, 3 });
    
    for (int number : result)
    {
        cout << number << " ";
    }
    
    return 0;
}

vector<int> bubbleSort(vector<int> array) {
    // Write your code here.
    if (array.empty())return{};

    bool isSorted = false;
    int count = 0;

    while (!isSorted)
    {

        isSorted = true;
        for (int idx = 0; idx < array.size() - 1 - count; idx++)
        {
            if (array[idx] > array[idx + 1])
            {
                swap(array[idx], array[idx + 1]);
                isSorted = false;
            }
        }
        count++;
    }
    return array;
}
