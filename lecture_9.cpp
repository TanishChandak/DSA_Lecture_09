#include <iostream>
using namespace std;

// Creating an array of integer which can print the array using function:
void printArray_int(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The array of index " << i << " is " << arr[i] << endl;
    }
}

// Creating an array of character which can print the array using function:
void printArray_char(char arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The array of index " << i << " is " << arr[i] << endl;
    }
}

// Creating an array of double which can print the array using function:
void printArray_double(double arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The array of index " << i << " is " << arr[i] << endl;
    }
}

// Creating an function for finding the min/max value from the array:
int getMax(int arr[], int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// printing the array :
// In this, it is type of pass-by-value but
// it will give the address of the index first.
// So, it will change both the places in (main) as well as (update)
void update(int arr8[], int size)
{
    cout << "Inside the function." << endl;
    arr8[0] = 120;
    for (int i = 0; i < size; i++)
    {
        cout << "value of " << i << " index is: " << arr8[i] << " " << endl;
    }
    cout << "Going back to main function." << endl;
}

// Printing the sum of an array:
int sum_of_arr(int arr9[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr9[i];
    }
    return sum;
}

// Searching any element using linear search:
bool search_element(int arr10[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr10[i] == key)
        {
            return true;
        }
    }
    return false;
}

// Reversed an array:
void reverse(int arr11[], int size)
{
    int start = 0;
    int end = size - 1;
    
    while (start <= end)
    {
        swap(arr11[start], arr11[end]);
        start++;
        end--;
    }
}

int main()
{
    // creating an array which can print 1 value in any number of time:
    int ar[10];
    fill_n(ar, 10, 24);
    for (int i = 0; i <= 10; i++)
    {
        cout << ar[i] << endl;
    }

    // Declaring an array:
    int arr[15];
    cout<<"Value of 0 index is: "<<arr[0]<<endl; //it will give you the garbage value.
    cout<<"Value of 20 index is: "<<arr[20]<<endl; //it will give an error or garbage value because of arr is not create for this must storage.

    // Initialising an array:
    int arr1[3] = {5, 7, 11};
    cout<<"Value of 2 index is: "<<arr1[2]<<endl; //accessing the array.

    // Printing the array using the for loop:
    int arr2[15] = {2, 7, 11, 15};
    int n2 = 15;
    printArray_int(arr2, n2); // calling the print function.

    int arr3[10] = {0};
    int n3 = 10;
    printArray_int(arr3, n3); // calling the print function.

    int arr4[10] = {1};
    int n4 = 10;
    printArray_int(arr4, n4); // calling the print function.

    // Size of arr4 (or any array size)  is:
    int Size_of_arr4 = sizeof(arr4) / sizeof(int);
    cout << "The size of arr4 is: " << Size_of_arr4 << endl;

    char arr5[5] = {'a', 'b', 'c', 'd', 'e'}; //character array
    int n5 = 5;
    printArray_char(arr5, n5);

    double arr6[3] = {5.66, 7.44, 3.55}; //double array
    int n6 = 3;
    printArray_double(arr6, n6);

    // Finding the Min/Max value in an array:
    int n7;
    cout << "Enter the size of an array: ";
    cin >> n7;
    int arr7[100];
    // Taking array as an input
    for (int i = 0; i < n7; i++)
    {
        cout << "Value of " << i << " index is: ";
        cin >> arr7[i];
    }
    int getMax_ans = getMax(arr7, n7);
    cout<<"The Maximum value of an array is: "<<getMax_ans<<endl;
    int getMin_ans = getMin(arr7, n7);
    cout<<"The Minimum value of an array is: "<<getMin_ans<<endl;

    //Creating an array:
    int arr8[3] = {1, 2, 3};
    int n8 = 3;
    update(arr8, n8);
    for (int i = 0; i < n8; i++)
    {
        cout << "value of " << i << " index is: " << arr8[i] << " " << endl;
    }

    // Creating an array to sum of all elements:
    int n9;
    cout << "Enter the size of an array: ";
    cin >> n9;
    int arr9[100];
    for (int i = 0; i < n9; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr9[i];
    }
    int ans = sum_of_arr(arr9, n9);
    cout << "Sum of all elements in the array is: " << ans << endl;

    // Search any element in an array using Linear Search:
    int n10;
    cout << "Enter the size of an array: ";
    cin >> n10;
    int key = 1;

    int arr10[100];
    for (int i = 0; i < n10; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr10[i];
    }
    // Checking whether the key is present or not:
    if (search_element(arr10, n10, key))
    {
        cout<<"Yes, the key is present.";
    }
    else
    {
        cout<<"No, the key is not present.";
    }

    // Reversed an array
    int n11;
    cout << "Enter the value of n11: ";
    cin >> n11;

    int arr11[100];
    for (int i = 0; i < n11; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr11[i];
    }
    reverse(arr11, n11);
    cout<<endl;
    printArray_int(arr11, n11);
    
    return 0;
}