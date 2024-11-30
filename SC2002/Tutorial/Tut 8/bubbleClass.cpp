#include <iostream>
using namespace std;

class Bubble
{
private:
public:
    void sort(int a[], int n)
    {
        int i, j, t;
        for (i = n - 2; i >= 0; i--)
        {
            for (j = 0; j <= i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }
};

int main()
{
    Bubble bubble;

    int a[100], n, i;
    cout << "\n\n Enter number of Integer elements to be sorted: ";
    cin >> n;

    for (i = 0; i <= n - 1; i++)
    {
        cout << "\n\n Enter integer value for element no." << i + 1 << " : " << endl;
        cin >> a[i];
    }

    bubble.sort(a, n);

    cout << "\n\n Finally sorted array is: ";
    for (i = 0; i <= n - 1; i++)
        cout << a[i] << " ";
} // end program.