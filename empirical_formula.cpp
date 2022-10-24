#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

typedef struct Element
{
    double mass, molar_mass, mole;

} Element;

void print_vector(vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}

// find greatest common divisor of positive numbers
int gcd(vector<int> nums)
{
    // find min value in array except 0
    sort(nums.begin(), nums.end());
    int max_gcd;
    for (int x : nums)
    {
        if (x != 0)
        {
            max_gcd = x;
        }
    }
    for (int i = max_gcd; i > 0; --i)
    {
        bool is_divisor = true;
        for (int x : nums)
        {
            if (x % i != 0)
            {
                is_divisor = false;
                break;
            }
        }
        if (is_divisor)
        {
            return i;
        }
    }
    return 1;
}

// 5, 10, 20 -> 1, 2, 4
void reduce(vector<int> &nums)
{
    int k = gcd(nums);
    for (int i = 0; i < (int)nums.size(); ++i)
    {
        nums[i] /= k;
    }
}

double round_mole(double f)
{
    int n = (int)(f * 10) % 10;
    if (n == 0 || n == 1 || n == 8 || n == 9)
    {
        f = (int)(f + 0.5);
    }
    else if (n == 5)
    {
        f = (int)f + 0.5;
    }
    return f;
}

int main()
{
    int n, i;

    // >> Number of elements
    cin >> n;
    vector<Element> elems(n);

    // >> Molar mass
    for (i = 0; i < n; ++i)
    {
        cin >> elems[i].molar_mass;
    }

    // >> Mass/percentage
    for (i = 0; i < n; ++i)
    {
        cin >> elems[i].mass;
    }

    // Find the number of moles of each element in the 100g sample.
    for (i = 0; i < n; ++i)
    {
        elems[i].mole = elems[i].mass / elems[i].molar_mass;
    }

    // Calculate the mole-ratio of elements.
    // The ratio is deterined by dividing each mole alue by the lowest value.

    // lowest mole value
    double smallest_mole = elems[0].mole;
    for (i = 1; i < n; ++i)
    {
        if (elems[i].mole < smallest_mole && elems[i].mole > 0)
        {
            smallest_mole = elems[i].mole;
        }
    }
    // divide
    for (i = 0; i < n; ++i)
    {
        elems[i].mole /= smallest_mole;
    }

    // << Original ratio
    for (i = 0; i < n; ++i)
    {
        cout << elems[i].mole << ' ';
    }
    cout << "\n";

    // whole-number ratio
    for (i = 0; i < n; ++i)
    {
        elems[i].mole = round_mole(elems[i].mole) * 12;
    }

    // reduce whole-number ratio
    vector<int> emp(n);
    for (i = 0; i < n; ++i)
    {
        emp[i] = (int)(elems[i].mole + 0.5);
    }
    reduce(emp);

    // << Empirical Formula
    print_vector(emp);
    
    return 0;
}
