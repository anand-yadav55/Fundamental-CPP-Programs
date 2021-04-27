/* #include <iostream>
using namespace std;
void moveZeroToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        arr[count++] = 0;
    }
}
void printArray(int arr[], int n)
{
    cout << endl
         << "The Array is\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter size";
    cin >> n;
    int arr[n];
    cout << "Enter Elements";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Entered Array is: ";
    printArray(arr, n);
    moveZeroToEnd(arr, n);
    cout << "Array after moving 0's to the end is: ";
    printArray(arr, n);
    return 0;
} */
// In single traversal

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}
void moveZeroToEnd(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j++]);
        }
    }
    printArray(arr, n);
}
int main()
{
    int arr[] = {1, 4, 0, 9, 8, 0, 0, 5, 8, 0, 9};
    moveZeroToEnd(arr, sizeof(arr) / sizeof(int));
    return 0;
}